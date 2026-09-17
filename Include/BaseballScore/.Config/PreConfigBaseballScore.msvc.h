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
**      スクリプトによる設定値が書き込まれるヘッダファイル。
**
**      @file       .Config/ConfiguredBaseballScore.h.in
**/

#if !defined( BASEBALLSCORE_CONFIG_INCLUDED_CONFIGURED_BASEBALL_SCORE_H )
#    define   BASEBALLSCORE_CONFIG_INCLUDED_CONFIGURED_BASEBALL_SCORE_H

//========================================================================
//
//    Name Space.
//

/**
**    スクリプトによって設定された名前空間。
**/

#define     BASEBALLSCORE_CNF_NS            BaseballScore

/**
**    名前空間。
**/

#define     BASEBALLSCORE_NAMESPACE         BASEBALLSCORE_LIB_CNF_NS

#define     BASEBALLSCORE_NAMESPACE_BEGIN   namespace  BASEBALLSCORE_CNF_NS  {

#define     BASEBALLSCORE_NAMESPACE_END     }


//========================================================================
//
//    Compiler Features.
//

//
//    キーワード constexpr  の検査。
//

#if ( 1 )
#    define     BASEBALLSCORE_ENABLE_CONSTEXPR      1
#else
#    undef      BASEBALLSCORE_ENABLE_CONSTEXPR
#endif

#if !defined( CONSTEXPR_VAR ) && !defined( CONSTEXPR_FUNC )
#    if ( BASEBALLSCORE_ENABLE_CONSTEXPR )
#        define     CONSTEXPR_VAR       constexpr
#        define     CONSTEXPR_FUNC      constexpr
#    else
#        define     CONSTEXPR_VAR       const
#        define     CONSTEXPR_FUNC
#    endif
#endif

//
//    キーワード nullptr  の検査。
//

#if ( 1 )
#    define     BASEBALLSCORE_ENABLE_NULLPTR        1
#else
#    if !defined( nullptr )
#        define     nullptr     NULL
#    endif
#    undef      BASEBALLSCORE_ENABLE_NULLPTR
#endif

//
//    キーワード override の検査。
//

#if ( 1 )
#    define     BASEBALLSCORE_ENABLE_OVERRIDE       1
#else
#    if !defined( override )
#        define     override
#    endif
#    undef      BASEBALLSCORE_ENABLE_OVERRIDE
#endif

#endif
