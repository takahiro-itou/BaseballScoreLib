dnl----------------------------------------------------------------
dnl
dnl   Linker Scripts.
dnl   リンカスクリプトを生成する。
dnl

AC_CONFIG_FILES([Lib/libbscCommon.a:Lib/.LinkerScript/Common.in])
AC_CONFIG_FILES([Lib/libbscDocument.a:Lib/.LinkerScript/Document.in])
AC_CONFIG_FILES([Lib/libbscDownloader.a:Lib/.LinkerScript/Downloader.in])

