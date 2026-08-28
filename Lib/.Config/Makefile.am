
##
##    ライブラリのビルドとインストール。
##

##
##    List of Directories.
##

module_dir_name         =  .Config
SUBDIRS                 =  .

include  $(top_srcdir)/.M4/BuildCommon/DirList.inc
include  $(top_srcdir)/.M4/BuildCommon/DefVars.inc

##
##    List of Source and Header Files.
##

extra_library_source_files  =
extra_library_header_files  =
extra_noinst_data_files     =
extra_noinst_header_files   =

library_source_files        +=  \
        ${extra_library_source_files}

library_instantiations      +=
library_inline_files        +=

dist_noinst_data_files      +=  \
        CMakeLists.txt              \
        ${inclib_source_dir}/Config.h.cmake.in  \
        ${extra_noinst_data_files}

dist_noinst_header_files    +=  \
        ${extra_noinst_header_files}

inclib_header_files         +=  \
        ${extra_library_header_files}

inclib_nodist_header_files  +=
        ${inclib_binary_dir}/ConfiguredScore4Core.h

library_install_srcfiles    +=  \
        ${library_inline_files}

library_compile_srcfiles    +=  \
        ${library_source_files}    \
        ${library_instantiations}

##
##    List of Libraries.
##

static_libraries_list   =  libscore4Common.static.a
shared_libraries_list   =

##
##    Internal Libraries.
##

##
##    Compile and Link Options.
##

AM_CPPFLAGS          =  \
        -I${INCTOP_SOURCE_DIR}
AM_CFLAGS               =
AM_CXXFLAGS             =

##
##    Include Common Install Settings.
##

include  $(top_srcdir)/.M4/BuildCommon/Install.inc

##
##    Build Libraries.
##

libscore4Common_static_a_SOURCES    =  ${library_source_files}


include  $(top_srcdir)/.M4/Makefile.DirList.inc

##
##    List of Source and Header Files.
##

