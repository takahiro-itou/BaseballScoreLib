
##----------------------------------------------------------------
##
##    テストの設定。
##

add_test(NAME   DateTimeFormatTest
    COMMAND  $<TARGET_FILE:DateTimeFormatTest>
)

add_test(NAME   ErrorDetectionCodeTest
    COMMAND  $<TARGET_FILE:ErrorDetectionCodeTest>
)

add_test(NAME   ProcessManagerTest
    COMMAND  $<TARGET_FILE:ProcessManagerTest>
)

add_test(NAME   ProgressCallbackTest
    COMMAND  $<TARGET_FILE:ProgressCallbackTest>
)

add_test(NAME   Score4CoreSettingsTest
    COMMAND  $<TARGET_FILE:Score4CoreSettingsTest>
)

##----------------------------------------------------------------
##
##    テストプログラムのビルド。
##

add_executable(DateTimeFormatTest       DateTimeFormatTest.cpp)
add_executable(ErrorDetectionCodeTest   ErrorDetectionCodeTest.cpp)
add_executable(ProcessManagerTest       ProcessManagerTest.cpp)
add_executable(ProgressCallbackTest     ProgressCallbackTest.cpp)
add_executable(Score4CoreSettingsTest   Score4CoreSettingsTest.cpp)

