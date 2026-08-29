
##----------------------------------------------------------------
##
##    テストの設定。
##

add_test(NAME   DocumentFileTest
    COMMAND  $<TARGET_FILE:DocumentFileTest>
)

add_test(NAME   ScoreDocumentTest
    COMMAND  $<TARGET_FILE:ScoreDocumentTest>
)

##----------------------------------------------------------------
##
##    テストプログラムのビルド。
##

add_executable(DocumentFileTest         DocumentFileTest.cpp)
add_executable(ScoreDocumentTest        ScoreDocumentTest.cpp)

