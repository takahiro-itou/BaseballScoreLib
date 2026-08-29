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
**      An Implementation of Test Case 'HtmlDownloader'.
**
**      @file       Downloader/Tests/HtmlDownloaderTest.cpp
**/

#include    "TestDriver.h"
#include    "BaseballScore/Downloader/HtmlDownloader.h"


BASEBALLSCORE_NAMESPACE_BEGIN
namespace  Downloader  {

//========================================================================
//
//    HtmlDownloaderTest  class.
//
/**
**    クラス HtmlDownloader の単体テスト。
**/

class  HtmlDownloaderTest : public  TestFixture
{
    CPPUNIT_TEST_SUITE(HtmlDownloaderTest);
    CPPUNIT_TEST(testHtmlDownloader);
    CPPUNIT_TEST_SUITE_END();

public:
    virtual  void   setUp()     override    { }
    virtual  void   tearDown()  override    { }

private:
    void  testHtmlDownloader();
};

CPPUNIT_TEST_SUITE_REGISTRATION( HtmlDownloaderTest );

//========================================================================
//
//    Tests.
//

void  HtmlDownloaderTest::testHtmlDownloader()
{
    HtmlDownloader  dtFormat;

    return;
}


}   //  End of namespace  Downloader
BASEBALLSCORE_NAMESPACE_END

//========================================================================
//
//    エントリポイント。
//

int  main(int argc, char * argv[])
{
    return ( executeCppUnitTests(argc, argv) );
}
