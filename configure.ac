AC_INIT([hello], [1.0])
AM_INIT_AUTOMAKE([-Wall -Werror foreign dist-bzip2])

AC_PROG_CC

AC_ARG_ENABLE([nls],
  AS_HELP_STRING([--enable-nls], [enable Native Language Support]),
  [enable_nls=$enableval], [enable_nls=false]
)

if test x$enable_nls = xyes; then
    AC_CHECK_FUNCS([dgettext bindtextdomain], [], [enable_nls=false])
    if test x$enable_nls != xyes; then
        AC_MSG_ERROR([Functions required for NLS are not available])
    fi
    AC_DEFINE([ENABLE_NLS], [1], [Define if NLS support is enabled])
fi

AM_CONDITIONAL([ENABLE_NLS], [test x$enable_nls = xyes])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile src/Makefile po/Makefile])
AC_OUTPUT
