# Test App file recipes

pkglib_LTLIBRARIES = libfoo.la 

libfoo_la_SOURCES = foo1.c

libfoo_la_LIBADD 		= -lc -ldl 
libfoo_la_LDFLAGS 	=  -avoid-version -module -shared -export-dynamic \
             -export-symbols-regex '^([a-zA-Z0-9]+)_(AppInit|AppMain|AppClose)$$'
libfoo_la_CFLAGS 		= -I$(top_srcdir)/common



