###########################################################################
## Makefile generated for component 'Chapter_9_Section_5'. 
## 
## Makefile     : Chapter_9_Section_5.mk
## Generated on : Sun Jun 14 03:42:43 2026
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/Chapter_9_Section_5
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile

PRODUCT_NAME              = Chapter_9_Section_5
MAKEFILE                  = Chapter_9_Section_5.mk
MATLAB_ROOT               = /usr/local/MATLAB/R2026a
MATLAB_BIN                = /usr/local/MATLAB/R2026a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/glnxa64
START_DIR                 = /home/bui-anh-duy/CPS
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ..
C_STANDARD_OPTS           = -fwrapv
CPP_STANDARD_OPTS         = -fwrapv
LIBSSC_SLI_STD_OBJS       = 
LIBSSC_CORE_STD_OBJS      = 
LIBPM_ST_STD_OBJS         = 
LIBMC_STD_OBJS            = 
LIBEX_STD_OBJS            = 
LIBPM_STD_OBJS            = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          GNU gcc/g++ | gmake (64-bit Linux)
# Supported Version(s):    
# ToolchainInfo Version:   2026a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# C_STANDARD_OPTS
# CPP_STANDARD_OPTS

#-----------
# MACROS
#-----------

WARN_FLAGS         = -Wall -W -Wwrite-strings -Winline -Wstrict-prototypes -Wnested-externs -Wpointer-arith -Wcast-align -Wno-stringop-overflow
WARN_FLAGS_MAX     = $(WARN_FLAGS) -Wcast-qual -Wshadow
CPP_WARN_FLAGS     = -Wall -W -Wwrite-strings -Winline -Wpointer-arith -Wcast-align -Wno-stringop-overflow
CPP_WARN_FLAGS_MAX = $(CPP_WARN_FLAGS) -Wcast-qual -Wshadow

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

FORMAT_FOR_ECHO_SH               = ""'$1'
FORMAT_FOR_ECHO                  = $(FORMAT_FOR_ECHO_SH)
HASH                             = \#
SEMICOLON                        = ;
OPEN_PAREN                       = (
CLOSE_PAREN                      = )
ESCAPE_SPECIAL_CHARS             = $(strip $(subst $(CLOSE_PAREN),\$(CLOSE_PAREN),\
	$(subst $(OPEN_PAREN),\$(OPEN_PAREN),\
	$(subst &,\&,\
	$(subst ~,\~,\
	$(subst ?,\?,\
	$(subst *,\*,\
	$(subst },\},\
	$(subst {,\{,\
	$(subst >,\>,\
	$(subst <,\<,\
	$(subst !,\!,\
	$(subst ],\],\
	$(subst [,\[,\
	$(subst $(HASH),\$(HASH),\
	$(subst \\,\\\,\
	$(subst ',\',\
	$(subst ",\",\
	$1))))))))))))))))))

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: GNU C Compiler
CC = gcc

# Linker: GNU Linker
LD = g++

# C++ Compiler: GNU C++ Compiler
CPP = g++

# C++ Linker: GNU C++ Linker
CPP_LD = g++

# Archiver: GNU Archiver
AR = ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%/bin/glnxa64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @rm -f
ECHO                = @echo
MV                  = @mv
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c $(C_STANDARD_OPTS) -fPIC \
                       -O0
CPPFLAGS             = -c $(CPP_STANDARD_OPTS) -fPIC \
                       -O0
CPP_LDFLAGS          =
CPP_SHAREDLIB_LDFLAGS  = -shared -Wl,--no-undefined
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              =
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -j $(MAX_MAKE_JOBS) -l $(MAX_MAKE_LOAD_AVG) -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -shared -Wl,--no-undefined



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/Chapter_9_Section_5
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/Chapter_9_Section_5_grt_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/extern/physmod/glnxa64/ex/include -I$(MATLAB_ROOT)/extern/physmod/glnxa64/mc/include -I$(MATLAB_ROOT)/extern/physmod/glnxa64/pd/include -I$(MATLAB_ROOT)/extern/physmod/glnxa64/pm/include -I$(MATLAB_ROOT)/extern/physmod/glnxa64/pm_log/include -I$(MATLAB_ROOT)/extern/physmod/glnxa64/pm_st/include -I$(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_core/include -I$(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_dae/include -I$(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_ds/include -I$(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_sli/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DMAT_FILE=1 -DONESTEPFCN=1 -DTERMFCN=1 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DTID01EQ=1
DEFINES_STANDARD = -DMODEL=Chapter_9_Section_5 -DNUMST=2 -DNCSTATES=4 -DHAVESTDIO -DRT -DUSE_RTMODEL

DEFINES = $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1_ds.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1_ds_log.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1_ds_obs_act.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1_ds_obs_il.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1_ds_obs_all.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1_ds_obs_exp.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1_gateway.c $(MATLAB_ROOT)/rtw/c/src/rt_logging.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/rt_backsubrr_dbl.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/rt_forwardsubrr_dbl.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/rt_lu_real.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/rt_matrixlib_dbl.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_data.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/rtGetInf.c $(START_DIR)/Chapter_9_Section_5_grt_rtw/rt_nonfinite.c

MAIN_SRC = $(MATLAB_ROOT)/rtw/c/src/common/rt_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = Chapter_9_Section_5_a65846e1_1_ds.o Chapter_9_Section_5_a65846e1_1_ds_log.o Chapter_9_Section_5_a65846e1_1_ds_obs_act.o Chapter_9_Section_5_a65846e1_1_ds_obs_il.o Chapter_9_Section_5_a65846e1_1_ds_obs_all.o Chapter_9_Section_5_a65846e1_1_ds_obs_exp.o Chapter_9_Section_5_a65846e1_1.o Chapter_9_Section_5_a65846e1_1_gateway.o rt_logging.o rt_backsubrr_dbl.o rt_forwardsubrr_dbl.o rt_lu_real.o rt_matrixlib_dbl.o Chapter_9_Section_5.o Chapter_9_Section_5_data.o rtGetInf.o rt_nonfinite.o

MAIN_OBJ = rt_main.o

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_sli/lib/ssc_sli_std.a $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_core/lib/ssc_core_std.a $(MATLAB_ROOT)/extern/physmod/glnxa64/pm_st/lib/pm_st_std.a $(MATLAB_ROOT)/extern/physmod/glnxa64/mc/lib/mc_std.a $(MATLAB_ROOT)/extern/physmod/glnxa64/ex/lib/ex_std.a $(MATLAB_ROOT)/extern/physmod/glnxa64/pm/lib/pm_std.a

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_TFL = -msse2 -fno-predictive-commoning
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_TFL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_TFL = -msse2 -fno-predictive-commoning
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_TFL) $(CPPFLAGS_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute


all : build
	@echo $(call FORMAT_FOR_ECHO,### Successfully generated all binary outputs.)


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo $(call FORMAT_FOR_ECHO,### Successfully generated all binary outputs.)


prebuild : 


download : $(PRODUCT)


execute : download
	@echo $(call FORMAT_FOR_ECHO,### Invoking postbuild tool Execute ...)
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo $(call FORMAT_FOR_ECHO,### Done invoking postbuild tool.)


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS) $(MAIN_OBJ)
	@echo $(call FORMAT_FOR_ECHO,### Creating standalone executable "$(PRODUCT)" ...)
	$(LD) $(LDFLAGS) -o $(PRODUCT) $(OBJS) $(MAIN_OBJ) -Wl,--start-group $(LIBS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS) -Wl,--end-group
	@echo $(call FORMAT_FOR_ECHO,### Created: "$(PRODUCT)")


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : %.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ex/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ex/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ex/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ex/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ex/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ex/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ex/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ex/src/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/mc/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/mc/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/mc/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/mc/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/mc/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/mc/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/mc/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/mc/src/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm/src/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm_st/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm_st/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm_st/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm_st/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm_st/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm_st/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm_st/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/pm_st/src/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_core/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_core/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_core/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_core/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_core/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_core/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_core/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_core/src/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_sli/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_sli/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_sli/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_sli/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_sli/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_sli/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_sli/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_sli/src/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/simulink/src/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.cc
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.cp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.cxx
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.CPP
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.c++
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/toolbox/simulink/blocks/src/%.C
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Chapter_9_Section_5_a65846e1_1_ds.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1_ds.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Chapter_9_Section_5_a65846e1_1_ds_log.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1_ds_log.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Chapter_9_Section_5_a65846e1_1_ds_obs_act.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1_ds_obs_act.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Chapter_9_Section_5_a65846e1_1_ds_obs_il.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1_ds_obs_il.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Chapter_9_Section_5_a65846e1_1_ds_obs_all.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1_ds_obs_all.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Chapter_9_Section_5_a65846e1_1_ds_obs_exp.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1_ds_obs_exp.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Chapter_9_Section_5_a65846e1_1.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Chapter_9_Section_5_a65846e1_1_gateway.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_a65846e1_1_gateway.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_logging.o : $(MATLAB_ROOT)/rtw/c/src/rt_logging.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_backsubrr_dbl.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/rt_backsubrr_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_forwardsubrr_dbl.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/rt_forwardsubrr_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_lu_real.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/rt_lu_real.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_matrixlib_dbl.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/rt_matrixlib_dbl.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Chapter_9_Section_5.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5.c
	$(CC) $(CFLAGS) -o "$@" "$<"


Chapter_9_Section_5_data.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/Chapter_9_Section_5_data.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rtGetInf.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/rtGetInf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_nonfinite.o : $(START_DIR)/Chapter_9_Section_5_grt_rtw/rt_nonfinite.c
	$(CC) $(CFLAGS) -o "$@" "$<"


rt_main.o : $(MATLAB_ROOT)/rtw/c/src/common/rt_main.c
	$(CC) $(CFLAGS) -o "$@" "$<"


#------------------------
# BUILDABLE LIBRARIES
#------------------------

$(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_sli/lib/ssc_sli_std.a : $(LIBSSC_SLI_STD_OBJS)
	@echo $(call FORMAT_FOR_ECHO,### Creating static library $@ ...)
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_SLI_STD_OBJS)


$(MATLAB_ROOT)/extern/physmod/glnxa64/ssc_core/lib/ssc_core_std.a : $(LIBSSC_CORE_STD_OBJS)
	@echo $(call FORMAT_FOR_ECHO,### Creating static library $@ ...)
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_CORE_STD_OBJS)


$(MATLAB_ROOT)/extern/physmod/glnxa64/pm_st/lib/pm_st_std.a : $(LIBPM_ST_STD_OBJS)
	@echo $(call FORMAT_FOR_ECHO,### Creating static library $@ ...)
	$(AR) $(ARFLAGS)  $@ $(LIBPM_ST_STD_OBJS)


$(MATLAB_ROOT)/extern/physmod/glnxa64/mc/lib/mc_std.a : $(LIBMC_STD_OBJS)
	@echo $(call FORMAT_FOR_ECHO,### Creating static library $@ ...)
	$(AR) $(ARFLAGS)  $@ $(LIBMC_STD_OBJS)


$(MATLAB_ROOT)/extern/physmod/glnxa64/ex/lib/ex_std.a : $(LIBEX_STD_OBJS)
	@echo $(call FORMAT_FOR_ECHO,### Creating static library $@ ...)
	$(AR) $(ARFLAGS)  $@ $(LIBEX_STD_OBJS)


$(MATLAB_ROOT)/extern/physmod/glnxa64/pm/lib/pm_std.a : $(LIBPM_STD_OBJS)
	@echo $(call FORMAT_FOR_ECHO,### Creating static library $@ ...)
	$(AR) $(ARFLAGS)  $@ $(LIBPM_STD_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo $(call FORMAT_FOR_ECHO,### PRODUCT = $(PRODUCT))
	@echo $(call FORMAT_FOR_ECHO,### PRODUCT_TYPE = $(PRODUCT_TYPE))
	@echo $(call FORMAT_FOR_ECHO,### BUILD_TYPE = $(BUILD_TYPE))
	@echo $(call FORMAT_FOR_ECHO,### INCLUDES = $(INCLUDES))
	@echo $(call FORMAT_FOR_ECHO,### DEFINES = $(DEFINES))
	@echo $(call FORMAT_FOR_ECHO,### ALL_SRCS = $(ALL_SRCS))
	@echo $(call FORMAT_FOR_ECHO,### ALL_OBJS = $(ALL_OBJS))
	@echo $(call FORMAT_FOR_ECHO,### LIBS = $(LIBS))
	@echo $(call FORMAT_FOR_ECHO,### MODELREF_LIBS = $(MODELREF_LIBS))
	@echo $(call FORMAT_FOR_ECHO,### SYSTEM_LIBS = $(SYSTEM_LIBS))
	@echo $(call FORMAT_FOR_ECHO,### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS))
	@echo $(call FORMAT_FOR_ECHO,### CFLAGS = $(CFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### LDFLAGS = $(LDFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### CPPFLAGS = $(CPPFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### CPP_LDFLAGS = $(CPP_LDFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### ARFLAGS = $(ARFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### MEX_CFLAGS = $(MEX_CFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### MEX_CPPFLAGS = $(MEX_CPPFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### MEX_LDFLAGS = $(MEX_LDFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS))
	@echo $(call FORMAT_FOR_ECHO,### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS))
	@echo $(call FORMAT_FOR_ECHO,### EXECUTE_FLAGS = $(EXECUTE_FLAGS))
	@echo $(call FORMAT_FOR_ECHO,### MAKE_FLAGS = $(MAKE_FLAGS))


clean : 
	$(ECHO) "### Deleting all derived files ..."
	$(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


