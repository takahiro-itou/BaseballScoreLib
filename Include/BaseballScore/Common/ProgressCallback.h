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
**      An Interface of ProgressCallback class.
**
**      @file       Common/ProgressCallback.h
**/

#if !defined( BASEBALLSCORE_COMMON_INCLUDED_PROGRESS_CALLBACK_H )
#    define   BASEBALLSCORE_COMMON_INCLUDED_PROGRESS_CALLBACK_H

#if !defined( BASEBALLSCORE_PCH_INCLUDED_PRE_COMPILE_H )
#    include    "BaseballScore/Pch/PreCompile.h"
#endif


BASEBALLSCORE_NAMESPACE_BEGIN
namespace  Common  {

//========================================================================
//
//    ProgressCallback  class.
//

class  ProgressCallback
{

//========================================================================
//
//    Internal Type Definitions.
//
public:

    /**
    **    コールバック関数のパラメータ型。
    **/
    struct  ProgParams
    {
        const  char  *  titleText;      /**<  タイトル文字列。  **/
        void  *         extParams;      /**<  追加パラメータ。  **/
    };

    /**
    **    コールバック関数型。
    **
    **  @param [in] curVal    現在の値。
    **  @param [in] minVal    初期値。
    **  @param [in] maxVal    最大値。
    **  @param [in] extArgs   追加の引数。
    **  @retval     BOOL_TRUE  : 処理を継続する。
    **  @retval     BOOL_FALSE : 処理をキャンセルする。
    **/
    typedef     Boolean
    (* FnCallback)(
            const  int  curVal,
            const  int  minVal,
            const  int  maxVal,
            ProgParams  extArgs);

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
    ProgressCallback();

    //----------------------------------------------------------------
    /**   インスタンスを初期化する
    **  （コンストラクタ）。
    **
    **  @param [in] fnCallback    コールバック関数。
    **  @param [in] extParams     追加のパラメータ。

    **/
    ProgressCallback(
            FnCallback  fnCallback,
            void  *     extParams);

    //----------------------------------------------------------------
    /**   インスタンスを破棄する
    **  （デストラクタ）。
    **
    **/
    virtual  ~ProgressCallback();

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

//========================================================================
//
//    Public Member Functions.
//
public:

    //----------------------------------------------------------------
    /**   コールバック関数を呼び出す。
    **
    **  @param [in] curVal    現在の値。
    **  @param [in] minVal    初期値。
    **  @param [in] maxVal    最大値。
    **  @param [in] extArgs   追加の引数。
    **  @retval     BOOL_TRUE  : 処理を継続する。
    **  @retval     BOOL_FALSE : 処理をキャンセルする。
    **/
    inline  Boolean
    operator ()(
            const  int  curVal,
            const  int  minVal,
            const  int  maxVal,
            ProgParams  extArgs)  const
    {
        if ( FnCallback fn = (this->m_fnCallback) ) {
            extArgs.extParams   = (this->m_extParams);
            return (* fn)(curVal, minVal, maxVal, extArgs);
        }
        return ( BOOL_TRUE );
    }

//========================================================================
//
//    Accessors.
//
public:

    //----------------------------------------------------------------
    /**   現在のコールバック関数を取得する。
    **
    **  @return     コールバック関数を返す。
    **/
    FnCallback
    getCallbackFunction()  const;

    //----------------------------------------------------------------
    /**   コールバック関数を設定する。
    **
    **  @param [in] fnCallback    コールバック関数。
    **  @return     エラーコードを返す。
    **      -   異常終了の場合は、
    **          エラーの種類を示す非ゼロ値を返す。
    **      -   正常終了の場合は、ゼロを返す。
    **/
    ErrCode
    setCallbackFunction(
            FnCallback  fnCallback);

    //----------------------------------------------------------------
    /**   コールバック関数に渡す追加パラメータを取得する。
    **
    **  @return     現在の設定値を返す。
    **/
    void  *
    getCallbackParameter()  const;

    //----------------------------------------------------------------
    /**   コールバック関数に渡す追加パラメータを設定する。
    **
    **  @param [in] extParams   追加パラメータ。
    **  @return     エラーコードを返す。
    **      -   異常終了の場合は、
    **          エラーの種類を示す非ゼロ値を返す。
    **      -   正常終了の場合は、ゼロを返す。
    **/
    ErrCode
    setCallbackParameter(
            void  *     extParams);

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

    FnCallback      m_fnCallback;       /**<  コールバック。    **/

    void  *         m_extParams;        /**<  追加パラメータ。  **/

//========================================================================
//
//    Other Features.
//
private:
    typedef     ProgressCallback    This;
    ProgressCallback    (const  This  &);
    This &  operator =  (const  This  &);
public:
    //  テストクラス。  //
    friend  class   ProgressCallbackTest;
};

}   //  End of namespace  Common
BASEBALLSCORE_NAMESPACE_END

#endif
