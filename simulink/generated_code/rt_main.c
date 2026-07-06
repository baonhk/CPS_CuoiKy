#include <stdio.h>
#include <stdlib.h>
#include "Chapter_9_Section_5.h"
#include "rtwtypes.h"

int main(int argc, const char *argv[])
{
    FILE *fin;
    FILE *fout;
    char line[256];
    double pwm;
    double actual_rpm;

    fin = fopen("/tmp/input.csv", "r");
    if (fin == NULL) {
        printf("Cannot open /tmp/input.csv\n");
        return 1;
    }

    fout = fopen("/tmp/output.csv", "w");
    if (fout == NULL) {
        printf("Cannot create /tmp/output.csv\n");
        fclose(fin);
        return 1;
    }

    /* Skip header */
    fgets(line, sizeof(line), fin);

    fprintf(fout, "PWM_Input,Actual_Motor_Speed,Predicted_Motor_Speed\n");

    Chapter_9_Section_5_initialize();

    while (fgets(line, sizeof(line), fin) != NULL) {
        if (sscanf(line, "%lf,%lf", &pwm, &actual_rpm) == 2) {

            Chapter_9_Section_5_U.In1 = pwm;

            Chapter_9_Section_5_step();

            fprintf(fout, "%.10g,%.10g,%.10g\n",
                    pwm,
                    actual_rpm,
                    Chapter_9_Section_5_Y.Out1);
        }
    }

    Chapter_9_Section_5_terminate();

    fclose(fin);
    fclose(fout);

    printf("Digital Twin finished. Output saved to /tmp/output.csv\n");

    return 0;
}
