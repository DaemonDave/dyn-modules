# AppMain app dynamic loadable module with "AppMain" symbol(s) for external dlopening


pkglib_LTLIBRARIES = libfoo.la 

libfoo_la_SOURCES 	= foo1.c 
libfoo_la_CFLAGS 	= -I$(top_srcdir)/common
# for this library only, expose the symbols with specific function names
# you will find a libfoo.exp symbols file in .libs - those are the exposed ones.
libfoo_la_LDFLAGS 	= -avoid-version -module -shared -export-dynamic \
              -export-symbols-regex '^([a-zA-Z0-9]+)_(AppMain|AppInit|AppClose)$$'
# add libc and dynamic loading
libfoo_la_LIBADD 	= -lc -ldl

