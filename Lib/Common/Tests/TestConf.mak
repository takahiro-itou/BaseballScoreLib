
##
##    List of Tests.
##

extra_tests             =
TESTS                   =  \
        BaseballScoreSettingsTest   \
        DateTimeFormatTest          \
        ErrorDetectionCodeTest      \
        ProcessManagerTest          \
        ProgressCallbackTest        \
        ${extra_tests}

##
##    Test Configurations.
##

target_testee_library       +=  -lbscCommon

dist_noinst_data_files      +=
dist_noinst_header_files    +=
extra_test_drivers          +=
library_test_drivers        +=
source_test_drivers         +=

##
##    Compile and Link Options.
##

test_cppflags_common        +=
test_ldflags_common         +=

##
##    Test Programs.
##

BaseballScoreSettingsTest_SOURCES   =  BaseballScoreSettingsTest.cpp
DateTimeFormatTest_SOURCES          =  DateTimeFormatTest.cpp
ErrorDetectionCodeTest_SOURCES      =  ErrorDetectionCodeTest.cpp
ProcessManagerTest_SOURCES          =  ProcessManagerTest.cpp
ProgressCallbackTest_SOURCES        =  ProgressCallbackTest.cpp

