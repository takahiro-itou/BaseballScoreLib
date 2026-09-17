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
**      An Implementation of Test Case 'BaseballScoreSettings'.
**
**      @file       Common/Tests/BaseballScoreSettingsTest.cpp
**/

#include    "TestDriver.h"
#include    "BaseballScore/Common/BaseballScoreSettings.h"


BASEBALLSCORE_NAMESPACE_BEGIN

//========================================================================
//
//    BaseballScoreSettingsTest  class.
//
/**
**    クラス BaseballScoreSettings の単体テスト。
**/

class  BaseballScoreSettingsTest : public  TestFixture
{
    CPPUNIT_TEST_SUITE(BaseballScoreSettingsTest);
    CPPUNIT_TEST(testNameSpace);
    CPPUNIT_TEST_SUITE_END();

public:
    virtual  void   setUp()     override    { }
    virtual  void   tearDown()  override    { }

private:
    void  testNameSpace();
};

CPPUNIT_TEST_SUITE_REGISTRATION( BaseballScoreSettingsTest );

//========================================================================
//
//    Tests.
//

void  BaseballScoreSettingsTest::testNameSpace()
{
    return;
}

SCORE4_CORE_NAMESPACE_END

//========================================================================
//
//    エントリポイント。
//

int  main(int argc, char * argv[])
{
    return ( executeCppUnitTests(argc, argv) );
}
