#undef LINK_SPEC
#define LINK_SPEC "-melf" XLEN_SPEC "lriscv \
   %{static:-Bstatic}				\
   %{shared:-shared}				   \
   %{!static:%{rdynamic:-export-dynamic}}"


#undef LIB_SPEC
#define LIB_SPEC "%{pthread:-lpthread} -lc -lm -lhermit"
