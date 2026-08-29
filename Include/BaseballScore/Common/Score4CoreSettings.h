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
**      プロジェクトの設定。
**
**      @file       Common/Score4CoreSettings.h
**/

#if !defined( BASEBALLSCORE_COMMON_INCLUDED_SCORE4_CORE_SETTINGS_H )
#    define   BASEBALLSCORE_COMMON_INCLUDED_SCORE4_CORE_SETTINGS_H

//  スクリプトによる設定値が書き込まれたヘッダを読み込む。  //
#if defined( BASEBALLSCORE_USE_PRE_CONFIGURED_MSVC )
#    include    "BaseballScorer/.Config/PreConfigScore4Core.msvc.h"
#elif defined( SCORE4_USE_PRE_CONFIGURED_MSVC )
#    include    "BaseballScore/.Config/PreConfigScore4Core.msvc.h"
#else
#    include    "BaseballScore/.Config/ConfiguredScore4Core.h"
#endif

SCORE4_CORE_NAMESPACE_BEGIN

SCORE4_CORE_NAMESPACE_END

#endif
