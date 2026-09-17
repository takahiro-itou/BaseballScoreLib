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
**      An Interface of ProcessManager class.
**
**      @file       Common/ProcessManager.h
**/

#if !defined( BASEBALLSCORE_COMMON_INCLUDED_PROCESS_MANAGER_H )
#    define   BASEBALLSCORE_COMMON_INCLUDED_PROCESS_MANAGER_H

#if !defined( BASEBALLSCORE_PCH_INCLUDED_PRE_COMPILE_H )
#    include    "BaseballScore/Pch/PreCompile.h"
#endif


BASEBALLSCORE_NAMESPACE_BEGIN
namespace  Common  {

//========================================================================
//
//    ProcessManager  class.
//

class  ProcessManager
{

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
    ProcessManager();

    //----------------------------------------------------------------
    /**   インスタンスを破棄する
    **  （デストラクタ）。
    **
    **/
    virtual  ~ProcessManager();

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

//========================================================================
//
//    Other Features.
//
public:
    //  テストクラス。  //
    friend  class   ProcessManagerTest;
};

}   //  End of namespace  Common
BASEBALLSCORE_NAMESPACE_END

#endif
