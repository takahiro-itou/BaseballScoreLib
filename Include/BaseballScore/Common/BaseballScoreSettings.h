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
**      @file       Common/BaseballScoreSettings.h
**/

#if !defined( BASEBALLSCORE_COMMON_INCLUDED_BASEBALL_SCORE_SETTINGS_H )
#    define   BASEBALLSCORE_COMMON_INCLUDED_BASEBALL_SCORE_SETTINGS_H

//  スクリプトによる設定値が書き込まれたヘッダを読み込む。  //
#if defined( BASEBALLSCORE_USE_PRE_CONFIGURED_MSVC )
#    include    "BaseballScore/.Config/PreConfigBaseballScore.msvc.h"
#else
#    include    "BaseballScore/.Config/ConfiguredBaseballScore.h"
#endif

BASEBALLSCORE_NAMESPACE_BEGIN

BASEBALLSCORE_NAMESPACE_END

#endif
