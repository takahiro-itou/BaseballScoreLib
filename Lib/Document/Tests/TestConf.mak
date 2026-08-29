
##
##    List of Tests.
##

extra_tests             =
TESTS                   =  \
        DocumentFileTest        \
        ScoreDocumentTest       \
        ${extra_tests}

##
##    Test Configurations.
##

target_testee_library       +=  -lscore4Document

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

DocumentFileTest_SOURCES        =  DocumentFileTest.cpp
ScoreDocumentTest_SOURCES       =  ScoreDocumentTest.cpp

