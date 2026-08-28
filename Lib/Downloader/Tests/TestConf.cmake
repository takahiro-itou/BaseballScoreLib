
##----------------------------------------------------------------
##
##    テストの設定。
##

add_test(NAME   HtmlDownloaderTest
    COMMAND  $<TARGET_FILE:HtmlDownloaderTest>
)

##----------------------------------------------------------------
##
##    テストプログラムのビルド。
##

add_executable(HtmlDownloaderTest       HtmlDownloaderTest.cpp)

