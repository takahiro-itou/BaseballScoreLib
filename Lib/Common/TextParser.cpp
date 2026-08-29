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
**      An Implementation of TextParser class.
**
**      @file       Common/TextParser.cpp
**/

#include    "BaseballScore/Pch/PreCompile.h"

#include    "BaseballScore/Common/TextParser.h"

#include    <stdlib.h>
#include    <string.h>


BASEBALLSCORE_NAMESPACE_BEGIN
namespace  Common  {

//========================================================================
//
//    TextParser  class.
//

//========================================================================
//
//    Constructor(s) and Destructor.
//

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

//----------------------------------------------------------------
//    文字列を日付（年月日）に分解する。
//

ErrCode
TextParser::parseDateString(
        const  std::string  &dtText,
        int  *  const       dtYear,
        int  *  const       dtMonth,
        int  *  const       dtDay)
{
    TextBuffer  bufText;
    TokenArray  vTokens;

    int     wdYear  = 0;
    int     wdMonth = 0;
    int     wdDay   = 0;

    vTokens.reserve(4);
    vTokens.clear();

    splitText(dtText, "/", bufText, vTokens);
    if ( vTokens.size() == 3 ) {
        wdYear  = atoi(vTokens[0]);
        wdMonth = atoi(vTokens[1]);
        wdDay   = atoi(vTokens[2]);
    } else if ( vTokens.size() == 2 ) {
        wdYear  = 0;
        wdMonth = atoi(vTokens[1]);
        wdDay   = atoi(vTokens[2]);
    }
    if ( wdMonth != 0 ) {
        if ( dtYear != nullptr ) {
            (* dtYear ) = wdYear;
        }
        if ( dtMonth != nullptr ) {
            (* dtMonth) = wdMonth;
        }
        if ( dtDay != nullptr ) {
            (* dtDay  ) = wdDay;
        }
        return ( ERR_SUCCESS );
    }

    return ( ERR_FAILURE );
}

//----------------------------------------------------------------
//    文字列を指定した文字で分割する。
//

ErrCode
TextParser::splitText(
        const  std::string  &inText,
        const  char  *      sepChrs,
        TextBuffer          &bufText,
        TokenArray          &vTokens)
{
    const   size_t  szText  = inText.size();
    bufText.clear();
    bufText.resize(szText + 1);
    char  *  const  ptrBuf  = &(bufText[0]);

    ::memcpy(ptrBuf, inText.c_str(), szText);
    ptrBuf[szText]  = '\0';

    char  *         pSaved  = nullptr;
    const  char  *  pToken  = nullptr;

#if defined( _WIN32 )
    pToken  = strtok_s(ptrBuf, sepChrs, &pSaved);
#else
    pToken  = strtok_r(ptrBuf, sepChrs, &pSaved);
#endif

    while ( pToken != nullptr ) {
        vTokens.push_back(pToken);
#if defined( _WIN32 )
        pToken  = strtok_s(nullptr, sepChrs, &pSaved);
#else
        pToken  = strtok_r(nullptr, sepChrs, &pSaved);
#endif
    }

    return ( ERR_SUCCESS );
}

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

}   //  End of namespace  Common
BASEBALLSCORE_NAMESPACE_END
