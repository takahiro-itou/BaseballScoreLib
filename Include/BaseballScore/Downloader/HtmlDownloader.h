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
**      An Interface of HtmlDownloader class.
**
**      @file       Downloader/HtmlDownloader.h
**/

#if !defined( BASEBALLSCORE_DOWNLOADER_INCLUDED_HTML_DOWNLOADER_H )
#    define   BASEBALLSCORE_DOWNLOADER_INCLUDED_HTML_DOWNLOADER_H

#include    "BaseballScore/Common/Score4Types.h"


BASEBALLSCORE_NAMESPACE_BEGIN

//  クラスの前方宣言。  //
namespace  Common  {
class   ProgressCallback;
}   //  End of namespace  Common

namespace  Downloader  {

//========================================================================
//
//    HtmlDownloader  class.
//

class  HtmlDownloader
{

//========================================================================
//
//    Internal Type Definitions.
//
private:

    typedef     Common::ProgressCallback    Callback;

//========================================================================
//
//    Constructor(s) and Destructor.
//
public:

    //----------------------------------------------------------------
    /**   インスタンスを初期化する
    **  （デフォルトコンストラクタ）。
    **
    **/
    HtmlDownloader();

    //----------------------------------------------------------------
    /**   インスタンスを破棄する
    **  （デストラクタ）。
    **
    **/
    virtual  ~HtmlDownloader();

//========================================================================
//
//    Public Member Functions (Implement Pure Virtual).
//

//========================================================================
//
//    Public Member Functions (Overrides).
//

//========================================================================
//
//    Public Member Functions (Pure Virtual Functions).
//

//========================================================================
//
//    Public Member Functions (Virtual Functions).
//
public:

    //----------------------------------------------------------------
    /**   指定したリソースをダウンロードする。
    **
    **  @param [in] strURI    Uniform Resource Identifier.
    **  @param[out] outBuf    出力バッファ。
    **  @return     エラーコードを返す。
    **      -   異常終了の場合は、
    **          エラーの種類を示す非ゼロ値を返す。
    **      -   正常終了の場合は、ゼロを返す。
    **/
    virtual  ErrCode
    downloadResource(
            const  char  *  strURI,
            LpWriteBuf      outBuf)  const;

    //----------------------------------------------------------------
    /**   指定したリソースをダウンロードする。
    **
    **  @param [in] strURI    Uniform Resource Identifier.
    **  @param[out] outPath   内容を保存するファイル名。
    **  @return     エラーコードを返す。
    **      -   異常終了の場合は、
    **          エラーの種類を示す非ゼロ値を返す。
    **      -   正常終了の場合は、ゼロを返す。
    **/
    virtual  ErrCode
    downloadResource(
            const  char  *  strURI,
            const  char  *  outPath)  const;

//========================================================================
//
//    Public Member Functions.
//

//========================================================================
//
//    Accessors.
//
public:

    //----------------------------------------------------------------
    /**   コールバックを取得する。
    **
    **  @return     現在の設定値を返す。
    **/
    const  Callback  &
    getCallback()  const;

    //----------------------------------------------------------------
    /**   コールバックを設定する。
    **
    **  @param [in] callback    コールバック。
    **  @return     エラーコードを返す。
    **      -   異常終了の場合は、
    **          エラーの種類を示す非ゼロ値を返す。
    **      -   正常終了の場合は、ゼロを返す。
    **/
    ErrCode
    setCallback(
            Callback  & callback);

//========================================================================
//
//    Protected Member Functions.
//

//========================================================================
//
//    For Internal Use Only.
//

//========================================================================
//
//    Member Variables.
//
private:

    Callback  *     m_lpCallback;

//========================================================================
//
//    Other Features.
//
private:
    typedef     HtmlDownloader      This;
    HtmlDownloader      (const  This  &);
    This &  operator =  (const  This  &);
public:
    //  テストクラス。  //
    friend  class   HtmlDownloaderTest;
};

}   //  End of namespace  Downloader
BASEBALLSCORE_NAMESPACE_END

#endif
