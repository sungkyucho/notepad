# Makefile.in generated by automake 1.15 from Makefile.am.
# GMMP_lib/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2014 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.




am__is_gnu_make = { \
  if test -z '$(MAKELEVEL)'; then \
    false; \
  elif test -n '$(MAKE_HOST)'; then \
    true; \
  elif test -n '$(MAKE_VERSION)' && test -n '$(CURDIR)'; then \
    true; \
  else \
    false; \
  fi; \
}
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/gmmp_sample
pkgincludedir = $(includedir)/gmmp_sample
pkglibdir = $(libdir)/gmmp_sample
pkglibexecdir = $(libexecdir)/gmmp_sample
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-apple-darwin15.6.0
host_triplet = x86_64-apple-darwin15.6.0
subdir = GMMP_lib
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/libtool.m4 \
	$(top_srcdir)/m4/ltoptions.m4 $(top_srcdir)/m4/ltsugar.m4 \
	$(top_srcdir)/m4/ltversion.m4 $(top_srcdir)/m4/lt~obsolete.m4 \
	$(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
DIST_COMMON = $(srcdir)/Makefile.am $(am__DIST_COMMON)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__uninstall_files_from_dir = { \
  test -z "$$files" \
    || { test ! -d "$$dir" && test ! -f "$$dir" && test ! -r "$$dir"; } \
    || { echo " ( cd '$$dir' && rm -f" $$files ")"; \
         $(am__cd) "$$dir" && rm -f $$files; }; \
  }
am__installdirs = "$(DESTDIR)$(libdir)"
LTLIBRARIES = $(lib_LTLIBRARIES)
libgmmp_la_LIBADD =
am__dirstamp = $(am__leading_dot)dirstamp
am_libgmmp_la_OBJECTS = GMMP.lo ErrorCode/StringTable.lo \
	Log/GMMP_Log.lo Network/Network.lo Util/GMMP_Util.lo \
	Operation/GMMP_Operation.lo \
	Operation/ProfileInfo/GMMP_ProfileInfo.lo \
	Operation/LongSentence/GMMP_LSentence.lo \
	Operation/Remote/GMMP_Remote.lo \
	Operation/Encrypt/GMMP_Encrypt.lo \
	Operation/Notification/GMMP_Notification.lo \
	Operation/Control/GMMP_Control.lo \
	Operation/Delivery/GMMP_Delivery.lo \
	Operation/Heartbeat/GMMP_Heartbeat.lo \
	Operation/Reg/GMMP_Reg.lo Operation/LOB/GMMP_LOB.lo \
	Operation/FTP/GMMP_FTP.lo \
	Operation/Multimedia/GMMP_Multimedia.lo
libgmmp_la_OBJECTS = $(am_libgmmp_la_OBJECTS)
AM_V_lt = $(am__v_lt_$(V))
am__v_lt_ = $(am__v_lt_$(AM_DEFAULT_VERBOSITY))
am__v_lt_0 = --silent
am__v_lt_1 = 
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
DEFAULT_INCLUDES = -I. -I$(top_builddir)
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__depfiles_maybe = depfiles
am__mv = mv -f
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=compile $(CC) $(DEFS) \
	$(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) \
	$(AM_CFLAGS) $(CFLAGS)
AM_V_CC = $(am__v_CC_$(V))
am__v_CC_ = $(am__v_CC_$(AM_DEFAULT_VERBOSITY))
am__v_CC_0 = @echo "  CC      " $@;
am__v_CC_1 = 
CCLD = $(CC)
LINK = $(LIBTOOL) $(AM_V_lt) --tag=CC $(AM_LIBTOOLFLAGS) \
	$(LIBTOOLFLAGS) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) \
	$(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_V_CCLD = $(am__v_CCLD_$(V))
am__v_CCLD_ = $(am__v_CCLD_$(AM_DEFAULT_VERBOSITY))
am__v_CCLD_0 = @echo "  CCLD    " $@;
am__v_CCLD_1 = 
SOURCES = $(libgmmp_la_SOURCES)
DIST_SOURCES = $(libgmmp_la_SOURCES)
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
# Read a list of newline-separated strings from the standard input,
# and print each of them once, without duplicates.  Input order is
# *not* preserved.
am__uniquify_input = $(AWK) '\
  BEGIN { nonempty = 0; } \
  { items[$$0] = 1; nonempty = 1; } \
  END { if (nonempty) { for (i in items) print i; }; } \
'
# Make sure the list of sources is unique.  This is necessary because,
# e.g., the same source file might be shared among _SOURCES variables
# for different programs/libraries.
am__define_uniq_tagged_files = \
  list='$(am__tagged_files)'; \
  unique=`for i in $$list; do \
    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
  done | $(am__uniquify_input)`
ETAGS = etags
CTAGS = ctags
am__DIST_COMMON = $(srcdir)/Makefile.in $(top_srcdir)/depcomp
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /Users/SungkyuCho/works/remote_attestation_crypto_lib/_src/cryptolib/Sample_Registration_Encryption/missing aclocal-1.15
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 1
AR = ar
AUTOCONF = ${SHELL} /Users/SungkyuCho/works/remote_attestation_crypto_lib/_src/cryptolib/Sample_Registration_Encryption/missing autoconf
AUTOHEADER = ${SHELL} /Users/SungkyuCho/works/remote_attestation_crypto_lib/_src/cryptolib/Sample_Registration_Encryption/missing autoheader
AUTOMAKE = ${SHELL} /Users/SungkyuCho/works/remote_attestation_crypto_lib/_src/cryptolib/Sample_Registration_Encryption/missing automake-1.15
AWK = awk
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -g -O2
CPP = gcc -E
CPPFLAGS = 
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DLLTOOL = false
DSYMUTIL = dsymutil
DUMPBIN = 
ECHO_C = \c
ECHO_N = 
ECHO_T = 
EGREP = /usr/bin/grep -E
EXEEXT = 
FGREP = /usr/bin/grep -F
GREP = /usr/bin/grep
INSTALL = /usr/local/bin/ginstall -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
LD = /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/ld
LDFLAGS = 
LIBOBJS = 
LIBS = 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIPO = lipo
LN_S = ln -s
LTLIBOBJS = 
LT_SYS_LIBRARY_PATH = 
MAKEINFO = ${SHELL} /Users/SungkyuCho/works/remote_attestation_crypto_lib/_src/cryptolib/Sample_Registration_Encryption/missing makeinfo
MANIFEST_TOOL = :
MKDIR_P = /usr/local/bin/gmkdir -p
NM = /usr/bin/nm -B
NMEDIT = nmedit
OBJDUMP = false
OBJEXT = o
OTOOL = otool
OTOOL64 = :
PACKAGE = gmmp_sample
PACKAGE_BUGREPORT = kkim@securityplatform.co.kr
PACKAGE_NAME = GMMP_Sample
PACKAGE_STRING = GMMP_Sample 1.0
PACKAGE_TARNAME = gmmp_sample
PACKAGE_URL = 
PACKAGE_VERSION = 1.0
PATH_SEPARATOR = :
RANLIB = ranlib
SED = /usr/bin/sed
SET_MAKE = 
SHELL = /bin/sh
STRIP = strip
VERSION = 1.0
abs_builddir = /Users/SungkyuCho/works/remote_attestation_crypto_lib/_src/cryptolib/Sample_Registration_Encryption/GMMP_lib
abs_srcdir = /Users/SungkyuCho/works/remote_attestation_crypto_lib/_src/cryptolib/Sample_Registration_Encryption/GMMP_lib
abs_top_builddir = /Users/SungkyuCho/works/remote_attestation_crypto_lib/_src/cryptolib/Sample_Registration_Encryption
abs_top_srcdir = /Users/SungkyuCho/works/remote_attestation_crypto_lib/_src/cryptolib/Sample_Registration_Encryption
ac_ct_AR = ar
ac_ct_CC = gcc
ac_ct_DUMPBIN = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build = x86_64-apple-darwin15.6.0
build_alias = 
build_cpu = x86_64
build_os = darwin15.6.0
build_vendor = apple
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
host = x86_64-apple-darwin15.6.0
host_alias = 
host_cpu = x86_64
host_os = darwin15.6.0
host_vendor = apple
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /Users/SungkyuCho/works/remote_attestation_crypto_lib/_src/cryptolib/Sample_Registration_Encryption/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /usr/local
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../
top_builddir = ..
top_srcdir = ..
AUTOMAKE_OPTIONS = subdir-objects
lib_LTLIBRARIES = libgmmp.la
libgmmp_la_SOURCES = GMMP.c GMMP.h Define/Define_Control.h \
	Define/Define_Operation.h Define/Define_Delivery.h \
	Define/Define.h ErrorCode/OMPErrorCode.h \
	ErrorCode/StringTable.c ErrorCode/StringTable.h \
	ErrorCode/ErrorCode.h Log/GMMP_Log.c Log/GMMP_Log.h \
	Network/Network.c Network/Network.h Util/GMMP_Util.c \
	Util/GMMP_Util.h Operation/GMMP_Operation.c \
	Operation/GMMP_Operation.h \
	Operation/ProfileInfo/GMMP_ProfileInfo.h \
	Operation/ProfileInfo/GMMP_ProfileInfo.c \
	Operation/ProfileInfo/Struct_ProfileInfo.h \
	Operation/LongSentence/GMMP_LSentence.c \
	Operation/LongSentence/GMMP_LSentence.h \
	Operation/LongSentence/Struct_LSentence.h \
	Operation/Remote/GMMP_Remote.h Operation/Remote/GMMP_Remote.c \
	Operation/Remote/Struct_Remote.h \
	Operation/Encrypt/GMMP_Encrypt.c \
	Operation/Encrypt/Struct_Encrypt.h \
	Operation/Encrypt/GMMP_Encrypt.h \
	Operation/Notification/GMMP_Notification.h \
	Operation/Notification/GMMP_Notification.c \
	Operation/Notification/Struct_Notification.h \
	Operation/Control/Struct_Control.h \
	Operation/Control/GMMP_Control.c \
	Operation/Control/GMMP_Control.h \
	Operation/Control/Struct_Control_Opt.h \
	Operation/Delivery/GMMP_Delivery.c \
	Operation/Delivery/GMMP_Delivery.h \
	Operation/Delivery/Struct_Delivery.h \
	Operation/Heartbeat/GMMP_Heartbeat.c \
	Operation/Heartbeat/GMMP_Heartbeat.h \
	Operation/Heartbeat/Struct_Heartbeat.h \
	Operation/Struct_Common.h Operation/Reg/Struct_DeReg_Device.h \
	Operation/Reg/GMMP_Reg.c Operation/Reg/Struct_Reg_Device.h \
	Operation/Reg/GMMP_Reg.h Operation/Reg/Struct_Reg_GW.h \
	Operation/Reg/Struct_DeReg_GW.h Operation/LOB/Struct_LOB.h \
	Operation/LOB/GMMP_LOB.h Operation/LOB/GMMP_LOB.c \
	Operation/FTP/GMMP_FTP.c Operation/FTP/Struct_FTP.h \
	Operation/FTP/GMMP_FTP.h \
	Operation/Multimedia/GMMP_Multimedia.c \
	Operation/Multimedia/GMMP_Multimedia.h \
	Operation/Multimedia/Struct_Multimedia.h
all: all-am

.SUFFIXES:
.SUFFIXES: .c .lo .o .obj
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu GMMP_lib/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --gnu GMMP_lib/Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):

install-libLTLIBRARIES: $(lib_LTLIBRARIES)
	@$(NORMAL_INSTALL)
	@list='$(lib_LTLIBRARIES)'; test -n "$(libdir)" || list=; \
	list2=; for p in $$list; do \
	  if test -f $$p; then \
	    list2="$$list2 $$p"; \
	  else :; fi; \
	done; \
	test -z "$$list2" || { \
	  echo " $(MKDIR_P) '$(DESTDIR)$(libdir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(libdir)" || exit 1; \
	  echo " $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$list2 '$(DESTDIR)$(libdir)'"; \
	  $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=install $(INSTALL) $(INSTALL_STRIP_FLAG) $$list2 "$(DESTDIR)$(libdir)"; \
	}

uninstall-libLTLIBRARIES:
	@$(NORMAL_UNINSTALL)
	@list='$(lib_LTLIBRARIES)'; test -n "$(libdir)" || list=; \
	for p in $$list; do \
	  $(am__strip_dir) \
	  echo " $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=uninstall rm -f '$(DESTDIR)$(libdir)/$$f'"; \
	  $(LIBTOOL) $(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) --mode=uninstall rm -f "$(DESTDIR)$(libdir)/$$f"; \
	done

clean-libLTLIBRARIES:
	-test -z "$(lib_LTLIBRARIES)" || rm -f $(lib_LTLIBRARIES)
	@list='$(lib_LTLIBRARIES)'; \
	locs=`for p in $$list; do echo $$p; done | \
	      sed 's|^[^/]*$$|.|; s|/[^/]*$$||; s|$$|/so_locations|' | \
	      sort -u`; \
	test -z "$$locs" || { \
	  echo rm -f $${locs}; \
	  rm -f $${locs}; \
	}
ErrorCode/$(am__dirstamp):
	@$(MKDIR_P) ErrorCode
	@: > ErrorCode/$(am__dirstamp)
ErrorCode/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) ErrorCode/$(DEPDIR)
	@: > ErrorCode/$(DEPDIR)/$(am__dirstamp)
ErrorCode/StringTable.lo: ErrorCode/$(am__dirstamp) \
	ErrorCode/$(DEPDIR)/$(am__dirstamp)
Log/$(am__dirstamp):
	@$(MKDIR_P) Log
	@: > Log/$(am__dirstamp)
Log/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Log/$(DEPDIR)
	@: > Log/$(DEPDIR)/$(am__dirstamp)
Log/GMMP_Log.lo: Log/$(am__dirstamp) Log/$(DEPDIR)/$(am__dirstamp)
Network/$(am__dirstamp):
	@$(MKDIR_P) Network
	@: > Network/$(am__dirstamp)
Network/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Network/$(DEPDIR)
	@: > Network/$(DEPDIR)/$(am__dirstamp)
Network/Network.lo: Network/$(am__dirstamp) \
	Network/$(DEPDIR)/$(am__dirstamp)
Util/$(am__dirstamp):
	@$(MKDIR_P) Util
	@: > Util/$(am__dirstamp)
Util/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Util/$(DEPDIR)
	@: > Util/$(DEPDIR)/$(am__dirstamp)
Util/GMMP_Util.lo: Util/$(am__dirstamp) Util/$(DEPDIR)/$(am__dirstamp)
Operation/$(am__dirstamp):
	@$(MKDIR_P) Operation
	@: > Operation/$(am__dirstamp)
Operation/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Operation/$(DEPDIR)
	@: > Operation/$(DEPDIR)/$(am__dirstamp)
Operation/GMMP_Operation.lo: Operation/$(am__dirstamp) \
	Operation/$(DEPDIR)/$(am__dirstamp)
Operation/ProfileInfo/$(am__dirstamp):
	@$(MKDIR_P) Operation/ProfileInfo
	@: > Operation/ProfileInfo/$(am__dirstamp)
Operation/ProfileInfo/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Operation/ProfileInfo/$(DEPDIR)
	@: > Operation/ProfileInfo/$(DEPDIR)/$(am__dirstamp)
Operation/ProfileInfo/GMMP_ProfileInfo.lo:  \
	Operation/ProfileInfo/$(am__dirstamp) \
	Operation/ProfileInfo/$(DEPDIR)/$(am__dirstamp)
Operation/LongSentence/$(am__dirstamp):
	@$(MKDIR_P) Operation/LongSentence
	@: > Operation/LongSentence/$(am__dirstamp)
Operation/LongSentence/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Operation/LongSentence/$(DEPDIR)
	@: > Operation/LongSentence/$(DEPDIR)/$(am__dirstamp)
Operation/LongSentence/GMMP_LSentence.lo:  \
	Operation/LongSentence/$(am__dirstamp) \
	Operation/LongSentence/$(DEPDIR)/$(am__dirstamp)
Operation/Remote/$(am__dirstamp):
	@$(MKDIR_P) Operation/Remote
	@: > Operation/Remote/$(am__dirstamp)
Operation/Remote/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Operation/Remote/$(DEPDIR)
	@: > Operation/Remote/$(DEPDIR)/$(am__dirstamp)
Operation/Remote/GMMP_Remote.lo: Operation/Remote/$(am__dirstamp) \
	Operation/Remote/$(DEPDIR)/$(am__dirstamp)
Operation/Encrypt/$(am__dirstamp):
	@$(MKDIR_P) Operation/Encrypt
	@: > Operation/Encrypt/$(am__dirstamp)
Operation/Encrypt/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Operation/Encrypt/$(DEPDIR)
	@: > Operation/Encrypt/$(DEPDIR)/$(am__dirstamp)
Operation/Encrypt/GMMP_Encrypt.lo: Operation/Encrypt/$(am__dirstamp) \
	Operation/Encrypt/$(DEPDIR)/$(am__dirstamp)
Operation/Notification/$(am__dirstamp):
	@$(MKDIR_P) Operation/Notification
	@: > Operation/Notification/$(am__dirstamp)
Operation/Notification/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Operation/Notification/$(DEPDIR)
	@: > Operation/Notification/$(DEPDIR)/$(am__dirstamp)
Operation/Notification/GMMP_Notification.lo:  \
	Operation/Notification/$(am__dirstamp) \
	Operation/Notification/$(DEPDIR)/$(am__dirstamp)
Operation/Control/$(am__dirstamp):
	@$(MKDIR_P) Operation/Control
	@: > Operation/Control/$(am__dirstamp)
Operation/Control/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Operation/Control/$(DEPDIR)
	@: > Operation/Control/$(DEPDIR)/$(am__dirstamp)
Operation/Control/GMMP_Control.lo: Operation/Control/$(am__dirstamp) \
	Operation/Control/$(DEPDIR)/$(am__dirstamp)
Operation/Delivery/$(am__dirstamp):
	@$(MKDIR_P) Operation/Delivery
	@: > Operation/Delivery/$(am__dirstamp)
Operation/Delivery/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Operation/Delivery/$(DEPDIR)
	@: > Operation/Delivery/$(DEPDIR)/$(am__dirstamp)
Operation/Delivery/GMMP_Delivery.lo:  \
	Operation/Delivery/$(am__dirstamp) \
	Operation/Delivery/$(DEPDIR)/$(am__dirstamp)
Operation/Heartbeat/$(am__dirstamp):
	@$(MKDIR_P) Operation/Heartbeat
	@: > Operation/Heartbeat/$(am__dirstamp)
Operation/Heartbeat/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Operation/Heartbeat/$(DEPDIR)
	@: > Operation/Heartbeat/$(DEPDIR)/$(am__dirstamp)
Operation/Heartbeat/GMMP_Heartbeat.lo:  \
	Operation/Heartbeat/$(am__dirstamp) \
	Operation/Heartbeat/$(DEPDIR)/$(am__dirstamp)
Operation/Reg/$(am__dirstamp):
	@$(MKDIR_P) Operation/Reg
	@: > Operation/Reg/$(am__dirstamp)
Operation/Reg/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Operation/Reg/$(DEPDIR)
	@: > Operation/Reg/$(DEPDIR)/$(am__dirstamp)
Operation/Reg/GMMP_Reg.lo: Operation/Reg/$(am__dirstamp) \
	Operation/Reg/$(DEPDIR)/$(am__dirstamp)
Operation/LOB/$(am__dirstamp):
	@$(MKDIR_P) Operation/LOB
	@: > Operation/LOB/$(am__dirstamp)
Operation/LOB/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Operation/LOB/$(DEPDIR)
	@: > Operation/LOB/$(DEPDIR)/$(am__dirstamp)
Operation/LOB/GMMP_LOB.lo: Operation/LOB/$(am__dirstamp) \
	Operation/LOB/$(DEPDIR)/$(am__dirstamp)
Operation/FTP/$(am__dirstamp):
	@$(MKDIR_P) Operation/FTP
	@: > Operation/FTP/$(am__dirstamp)
Operation/FTP/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Operation/FTP/$(DEPDIR)
	@: > Operation/FTP/$(DEPDIR)/$(am__dirstamp)
Operation/FTP/GMMP_FTP.lo: Operation/FTP/$(am__dirstamp) \
	Operation/FTP/$(DEPDIR)/$(am__dirstamp)
Operation/Multimedia/$(am__dirstamp):
	@$(MKDIR_P) Operation/Multimedia
	@: > Operation/Multimedia/$(am__dirstamp)
Operation/Multimedia/$(DEPDIR)/$(am__dirstamp):
	@$(MKDIR_P) Operation/Multimedia/$(DEPDIR)
	@: > Operation/Multimedia/$(DEPDIR)/$(am__dirstamp)
Operation/Multimedia/GMMP_Multimedia.lo:  \
	Operation/Multimedia/$(am__dirstamp) \
	Operation/Multimedia/$(DEPDIR)/$(am__dirstamp)

libgmmp.la: $(libgmmp_la_OBJECTS) $(libgmmp_la_DEPENDENCIES) $(EXTRA_libgmmp_la_DEPENDENCIES) 
	$(AM_V_CCLD)$(LINK) -rpath $(libdir) $(libgmmp_la_OBJECTS) $(libgmmp_la_LIBADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)
	-rm -f ErrorCode/*.$(OBJEXT)
	-rm -f ErrorCode/*.lo
	-rm -f Log/*.$(OBJEXT)
	-rm -f Log/*.lo
	-rm -f Network/*.$(OBJEXT)
	-rm -f Network/*.lo
	-rm -f Operation/*.$(OBJEXT)
	-rm -f Operation/*.lo
	-rm -f Operation/Control/*.$(OBJEXT)
	-rm -f Operation/Control/*.lo
	-rm -f Operation/Delivery/*.$(OBJEXT)
	-rm -f Operation/Delivery/*.lo
	-rm -f Operation/Encrypt/*.$(OBJEXT)
	-rm -f Operation/Encrypt/*.lo
	-rm -f Operation/FTP/*.$(OBJEXT)
	-rm -f Operation/FTP/*.lo
	-rm -f Operation/Heartbeat/*.$(OBJEXT)
	-rm -f Operation/Heartbeat/*.lo
	-rm -f Operation/LOB/*.$(OBJEXT)
	-rm -f Operation/LOB/*.lo
	-rm -f Operation/LongSentence/*.$(OBJEXT)
	-rm -f Operation/LongSentence/*.lo
	-rm -f Operation/Multimedia/*.$(OBJEXT)
	-rm -f Operation/Multimedia/*.lo
	-rm -f Operation/Notification/*.$(OBJEXT)
	-rm -f Operation/Notification/*.lo
	-rm -f Operation/ProfileInfo/*.$(OBJEXT)
	-rm -f Operation/ProfileInfo/*.lo
	-rm -f Operation/Reg/*.$(OBJEXT)
	-rm -f Operation/Reg/*.lo
	-rm -f Operation/Remote/*.$(OBJEXT)
	-rm -f Operation/Remote/*.lo
	-rm -f Util/*.$(OBJEXT)
	-rm -f Util/*.lo

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/GMMP.Plo
include ErrorCode/$(DEPDIR)/StringTable.Plo
include Log/$(DEPDIR)/GMMP_Log.Plo
include Network/$(DEPDIR)/Network.Plo
include Operation/$(DEPDIR)/GMMP_Operation.Plo
include Operation/Control/$(DEPDIR)/GMMP_Control.Plo
include Operation/Delivery/$(DEPDIR)/GMMP_Delivery.Plo
include Operation/Encrypt/$(DEPDIR)/GMMP_Encrypt.Plo
include Operation/FTP/$(DEPDIR)/GMMP_FTP.Plo
include Operation/Heartbeat/$(DEPDIR)/GMMP_Heartbeat.Plo
include Operation/LOB/$(DEPDIR)/GMMP_LOB.Plo
include Operation/LongSentence/$(DEPDIR)/GMMP_LSentence.Plo
include Operation/Multimedia/$(DEPDIR)/GMMP_Multimedia.Plo
include Operation/Notification/$(DEPDIR)/GMMP_Notification.Plo
include Operation/ProfileInfo/$(DEPDIR)/GMMP_ProfileInfo.Plo
include Operation/Reg/$(DEPDIR)/GMMP_Reg.Plo
include Operation/Remote/$(DEPDIR)/GMMP_Remote.Plo
include Util/$(DEPDIR)/GMMP_Util.Plo

.c.o:
	$(AM_V_CC)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.o$$||'`;\
	$(COMPILE) -MT $@ -MD -MP -MF $$depbase.Tpo -c -o $@ $< &&\
	$(am__mv) $$depbase.Tpo $$depbase.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ $<

.c.obj:
	$(AM_V_CC)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.obj$$||'`;\
	$(COMPILE) -MT $@ -MD -MP -MF $$depbase.Tpo -c -o $@ `$(CYGPATH_W) '$<'` &&\
	$(am__mv) $$depbase.Tpo $$depbase.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ `$(CYGPATH_W) '$<'`

.c.lo:
	$(AM_V_CC)depbase=`echo $@ | sed 's|[^/]*$$|$(DEPDIR)/&|;s|\.lo$$||'`;\
	$(LTCOMPILE) -MT $@ -MD -MP -MF $$depbase.Tpo -c -o $@ $< &&\
	$(am__mv) $$depbase.Tpo $$depbase.Plo
#	$(AM_V_CC)source='$<' object='$@' libtool=yes \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(LTCOMPILE) -c -o $@ $<

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
	-rm -rf ErrorCode/.libs ErrorCode/_libs
	-rm -rf Log/.libs Log/_libs
	-rm -rf Network/.libs Network/_libs
	-rm -rf Operation/.libs Operation/_libs
	-rm -rf Operation/Control/.libs Operation/Control/_libs
	-rm -rf Operation/Delivery/.libs Operation/Delivery/_libs
	-rm -rf Operation/Encrypt/.libs Operation/Encrypt/_libs
	-rm -rf Operation/FTP/.libs Operation/FTP/_libs
	-rm -rf Operation/Heartbeat/.libs Operation/Heartbeat/_libs
	-rm -rf Operation/LOB/.libs Operation/LOB/_libs
	-rm -rf Operation/LongSentence/.libs Operation/LongSentence/_libs
	-rm -rf Operation/Multimedia/.libs Operation/Multimedia/_libs
	-rm -rf Operation/Notification/.libs Operation/Notification/_libs
	-rm -rf Operation/ProfileInfo/.libs Operation/ProfileInfo/_libs
	-rm -rf Operation/Reg/.libs Operation/Reg/_libs
	-rm -rf Operation/Remote/.libs Operation/Remote/_libs
	-rm -rf Util/.libs Util/_libs

ID: $(am__tagged_files)
	$(am__define_uniq_tagged_files); mkid -fID $$unique
tags: tags-am
TAGS: tags

tags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	set x; \
	here=`pwd`; \
	$(am__define_uniq_tagged_files); \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: ctags-am

CTAGS: ctags
ctags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	$(am__define_uniq_tagged_files); \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"
cscopelist: cscopelist-am

cscopelist-am: $(am__tagged_files)
	list='$(am__tagged_files)'; \
	case "$(srcdir)" in \
	  [\\/]* | ?:[\\/]*) sdir="$(srcdir)" ;; \
	  *) sdir=$(subdir)/$(srcdir) ;; \
	esac; \
	for i in $$list; do \
	  if test -f "$$i"; then \
	    echo "$(subdir)/$$i"; \
	  else \
	    echo "$$sdir/$$i"; \
	  fi; \
	done >> $(top_builddir)/cscope.files

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(LTLIBRARIES)
installdirs:
	for dir in "$(DESTDIR)$(libdir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)
	-rm -f ErrorCode/$(DEPDIR)/$(am__dirstamp)
	-rm -f ErrorCode/$(am__dirstamp)
	-rm -f Log/$(DEPDIR)/$(am__dirstamp)
	-rm -f Log/$(am__dirstamp)
	-rm -f Network/$(DEPDIR)/$(am__dirstamp)
	-rm -f Network/$(am__dirstamp)
	-rm -f Operation/$(DEPDIR)/$(am__dirstamp)
	-rm -f Operation/$(am__dirstamp)
	-rm -f Operation/Control/$(DEPDIR)/$(am__dirstamp)
	-rm -f Operation/Control/$(am__dirstamp)
	-rm -f Operation/Delivery/$(DEPDIR)/$(am__dirstamp)
	-rm -f Operation/Delivery/$(am__dirstamp)
	-rm -f Operation/Encrypt/$(DEPDIR)/$(am__dirstamp)
	-rm -f Operation/Encrypt/$(am__dirstamp)
	-rm -f Operation/FTP/$(DEPDIR)/$(am__dirstamp)
	-rm -f Operation/FTP/$(am__dirstamp)
	-rm -f Operation/Heartbeat/$(DEPDIR)/$(am__dirstamp)
	-rm -f Operation/Heartbeat/$(am__dirstamp)
	-rm -f Operation/LOB/$(DEPDIR)/$(am__dirstamp)
	-rm -f Operation/LOB/$(am__dirstamp)
	-rm -f Operation/LongSentence/$(DEPDIR)/$(am__dirstamp)
	-rm -f Operation/LongSentence/$(am__dirstamp)
	-rm -f Operation/Multimedia/$(DEPDIR)/$(am__dirstamp)
	-rm -f Operation/Multimedia/$(am__dirstamp)
	-rm -f Operation/Notification/$(DEPDIR)/$(am__dirstamp)
	-rm -f Operation/Notification/$(am__dirstamp)
	-rm -f Operation/ProfileInfo/$(DEPDIR)/$(am__dirstamp)
	-rm -f Operation/ProfileInfo/$(am__dirstamp)
	-rm -f Operation/Reg/$(DEPDIR)/$(am__dirstamp)
	-rm -f Operation/Reg/$(am__dirstamp)
	-rm -f Operation/Remote/$(DEPDIR)/$(am__dirstamp)
	-rm -f Operation/Remote/$(am__dirstamp)
	-rm -f Util/$(DEPDIR)/$(am__dirstamp)
	-rm -f Util/$(am__dirstamp)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libLTLIBRARIES clean-libtool \
	mostlyclean-am

distclean: distclean-am
	-rm -rf ./$(DEPDIR) ErrorCode/$(DEPDIR) Log/$(DEPDIR) Network/$(DEPDIR) Operation/$(DEPDIR) Operation/Control/$(DEPDIR) Operation/Delivery/$(DEPDIR) Operation/Encrypt/$(DEPDIR) Operation/FTP/$(DEPDIR) Operation/Heartbeat/$(DEPDIR) Operation/LOB/$(DEPDIR) Operation/LongSentence/$(DEPDIR) Operation/Multimedia/$(DEPDIR) Operation/Notification/$(DEPDIR) Operation/ProfileInfo/$(DEPDIR) Operation/Reg/$(DEPDIR) Operation/Remote/$(DEPDIR) Util/$(DEPDIR)
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am:

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am: install-libLTLIBRARIES

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -rf ./$(DEPDIR) ErrorCode/$(DEPDIR) Log/$(DEPDIR) Network/$(DEPDIR) Operation/$(DEPDIR) Operation/Control/$(DEPDIR) Operation/Delivery/$(DEPDIR) Operation/Encrypt/$(DEPDIR) Operation/FTP/$(DEPDIR) Operation/Heartbeat/$(DEPDIR) Operation/LOB/$(DEPDIR) Operation/LongSentence/$(DEPDIR) Operation/Multimedia/$(DEPDIR) Operation/Notification/$(DEPDIR) Operation/ProfileInfo/$(DEPDIR) Operation/Reg/$(DEPDIR) Operation/Remote/$(DEPDIR) Util/$(DEPDIR)
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic \
	mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-libLTLIBRARIES

.MAKE: install-am install-strip

.PHONY: CTAGS GTAGS TAGS all all-am check check-am clean clean-generic \
	clean-libLTLIBRARIES clean-libtool cscopelist-am ctags \
	ctags-am distclean distclean-compile distclean-generic \
	distclean-libtool distclean-tags distdir dvi dvi-am html \
	html-am info info-am install install-am install-data \
	install-data-am install-dvi install-dvi-am install-exec \
	install-exec-am install-html install-html-am install-info \
	install-info-am install-libLTLIBRARIES install-man install-pdf \
	install-pdf-am install-ps install-ps-am install-strip \
	installcheck installcheck-am installdirs maintainer-clean \
	maintainer-clean-generic mostlyclean mostlyclean-compile \
	mostlyclean-generic mostlyclean-libtool pdf pdf-am ps ps-am \
	tags tags-am uninstall uninstall-am uninstall-libLTLIBRARIES

.PRECIOUS: Makefile


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
