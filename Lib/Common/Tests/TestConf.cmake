
##----------------------------------------------------------------
##
##    テストの設定。
##

add_test(NAME   BaseballScoreSettingsTest
    COMMAND  $<TARGET_FILE:BaseballScoreSettingsTest>
)

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

##----------------------------------------------------------------
##
##    テストプログラムのビルド。
##

add_executable(BaseballScoreSettingsTest    BaseballScoreSettingsTest.cpp)
add_executable(DateTimeFormatTest           DateTimeFormatTest.cpp)
add_executable(ErrorDetectionCodeTest       ErrorDetectionCodeTest.cpp)
add_executable(ProcessManagerTest           ProcessManagerTest.cpp)
add_executable(ProgressCallbackTest         ProgressCallbackTest.cpp)

