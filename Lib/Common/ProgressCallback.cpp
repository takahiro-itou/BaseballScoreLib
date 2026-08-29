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
**      An Implementation of ProgressCallback class.
**
**      @file       Common/ProgressCallback.cpp
**/

#include    "BaseballScore/Pch/PreCompile.h"

#include    "BaseballScore/Common/ProgressCallback.h"


BASEBALLSCORE_NAMESPACE_BEGIN
namespace  Common  {

//========================================================================
//
//    ProgressCallback  class.
//

//========================================================================
//
//    Constructor(s) and Destructor.
//

//----------------------------------------------------------------
//    インスタンスを初期化する
//  （デフォルトコンストラクタ）。
//

ProgressCallback::ProgressCallback()
    : m_fnCallback(nullptr),
      m_extParams (nullptr)
{
}

//----------------------------------------------------------------
//    インスタンスを初期化する
//  （コンストラクタ）。
//

ProgressCallback::ProgressCallback(
        FnCallback  fnCallback,
        void  *     extParams)
    : m_fnCallback(fnCallback),
      m_extParams (extParams)
{
}

//----------------------------------------------------------------
//    インスタンスを破棄する
//  （デストラクタ）。
//

ProgressCallback::~ProgressCallback()
{
}

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

//========================================================================
//
//    Accessors.
//

//----------------------------------------------------------------
//    現在のコールバック関数を取得する。
//

ProgressCallback::FnCallback
ProgressCallback::getCallbackFunction()  const
{
    return ( this->m_fnCallback );
}

//----------------------------------------------------------------
//    コールバック関数を設定する。
//

ErrCode
ProgressCallback::setCallbackFunction(
        FnCallback  fnCallback)
{
    this->m_fnCallback  = fnCallback;
    return ( ERR_SUCCESS );
}

//----------------------------------------------------------------
//    コールバック関数に渡す追加パラメータを取得する。
//

void  *
ProgressCallback::getCallbackParameter()  const
{
    return ( this->m_extParams );
}

//----------------------------------------------------------------
//    コールバック関数に渡す追加パラメータを設定する。
//

ErrCode
ProgressCallback::setCallbackParameter(
        void  *     extParams)
{
    this->m_extParams   = extParams;
    return ( ERR_SUCCESS );
}

//========================================================================
//
//    Protected Member Functions.
//

//========================================================================
//
//    For Internal Use Only.
//

}   //  End of namespace  Common
BASEBALLSCORE_NAMESPACE_END
