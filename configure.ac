AC_PREREQ([2.61])
AC_INIT([dyn-module], [1.0], [bugs@module.org])
AM_INIT_AUTOMAKE([subdir-objects])
AC_CONFIG_MACRO_DIR([m4])
AC_LIBTOOL_DLOPEN

LT_PREREQ([2.2])
# needed to make compiled objects work with dlopen
LT_INIT([dlopen])

# Checks for programs.
AC_PROG_CC
AC_PROG_CXX


AM_PROG_CC_C_O



AC_CONFIG_FILES([Makefile
                  common/Makefile
	          src/apps/Makefile
	          src/apps/test/Makefile
                  src/Makefile])
AC_OUTPUT

