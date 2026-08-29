//  -*-  coding: utf-8-with-signature;  mode: c++  -*-  //
/*************************************************************************
**                                                                      **
**                  ---  Baseball  Score  Project  ---                  **
**                                                                      **
**          Copyright (C), 2017-2026, Takahiro Itou                     **
**          All Rights Reserved.                                        **
**                                                                      **
**          License: (See COPYING or LICENSE files)                     **
**          GNU Affero General Public License (AGPL) version 3,         **
**          or (at your option) any later version.                      **
**                                                                      **
*************************************************************************/

/**
**      An Implementation of Test Case 'ProcessManager'.
**
**      @file       Common/Tests/ProcessManager.cpp
**/

#include    "TestDriver.h"
#include    "BaseballScore/Common/ProcessManager.h"


BASEBALLSCORE_NAMESPACE_BEGIN
namespace  Common  {

//========================================================================
//
//    ProcessManagerTest  class.
//
/**
**    クラス ProcessManager の単体テスト。
**/

class  ProcessManagerTest : public  TestFixture
{
    CPPUNIT_TEST_SUITE(ProcessManagerTest);
    CPPUNIT_TEST(testProcessManager);
    CPPUNIT_TEST_SUITE_END();

public:
    virtual  void   setUp()     override    { }
    virtual  void   tearDown()  override    { }

private:
    void  testProcessManager();

};

CPPUNIT_TEST_SUITE_REGISTRATION( ProcessManagerTest );

//========================================================================
//
//    Tests.
//

void  ProcessManagerTest::testProcessManager()
{
    ProcessManager      testee;

    return;
}

}   //  End of namespace  Common
BASEBALLSCORE_NAMESPACE_END

//========================================================================
//
//    エントリポイント。
//

int  main(int argc, char * argv[])
{
    return ( executeCppUnitTests(argc, argv) );
}
