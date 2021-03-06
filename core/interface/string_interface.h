/*©mit**************************************************************************
*                                                                              *
* This file is part of FRIEND UNIFYING PLATFORM.                               *
* Copyright 2014-2017 Friend Software Labs AS                                  *
*                                                                              *
* Permission is hereby granted, free of charge, to any person obtaining a copy *
* of this software and associated documentation files (the "Software"), to     *
* deal in the Software without restriction, including without limitation the   *
* rights to use, copy, modify, merge, publish, distribute, sublicense, and/or  *
* sell copies of the Software, and to permit persons to whom the Software is   *
* furnished to do so, subject to the following conditions:                     *
*                                                                              *
* The above copyright notice and this permission notice shall be included in   *
* all copies or substantial portions of the Software.                          *
*                                                                              *
* This program is distributed in the hope that it will be useful,              *
* but WITHOUT ANY WARRANTY; without even the implied warranty of               *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                 *
* MIT License for more details.                                                *
*                                                                              *
*****************************************************************************©*/
/** @file
 * 
 *  String Interface definition
 *
 *  @author PS (Pawel Stefanski)
 *  @date pushed 29/12/2016
 */
#ifndef __INTERFACE_STRING_INTERFACE_H__
#define __INTERFACE_STRING_INTERFACE_H__

#include <util/string.h>

typedef struct StringInterface
{
	char				*(*MakeString)( int length );
	int 				(*SubStrCmp)( char* str, char* compare );
	int					(*PStrlen)( char* str );
	int					(*SafeString)( char* *string, int length );
	int					(*SafeStrlen)( char* *string, int maxlen );
	char				*(*StringDuplicate)( const char* str );
	char				*(*StringDuplicateN)( char* str, int len );
	int					(*StrLenSafeSpaces)( char* str );
	void				(*AddEscapeChars)( char* str );
	FULONG				(*UrlDecode)( char* dst, const char* src );
	char 				*(*UrlDecodeToMem)( const char* src );
	char				** (*StringSplit)( char* str, char delimiter, unsigned int* length ); // Length of returned char array is placed in length
	char 				*(*StringAppend)( const char *src, const char *add );
	unsigned int		(*StringParseUInt)( char* str );
	FBOOL				(*CharIsDigit)( char c );
	FBOOL				(*CharIsUpAlpha)( char c );
	FBOOL				(*CharIsLoAlpha)( char c );
	FBOOL				(*CharIsAlpha)( char c );
	FBOOL				(*CharIsAlphanumeric)( char c );
	char				(*CharAlphaToLow)( char c );
	FBOOL				(*CharIsCTL)( char c );
	void				(*StringToLowercase)( char* str );
	void				(*StringToUppercase)( char* str );
	int					(*StringCheckExtension)( char* str, char* ext );
	void				(*StringSecureFree)( char* str );
	char				*(*StringShellEscape)( const char* str );
	char				*(*StringShellEscapeSize)( const char* str, int *len );
	char				*(*FindInBinary)(char *x, int m, char *y, int n) ;
	FLONG				(*FindInBinaryPOS)(char *x, int m, char *y, FULONG n);
	FLONG				(*FindInBinarySimple)( char *x, int m, char *y, FULONG n );
	void				(*HashedString)( char **str );
	char				*(*StringDuplicateEOL)( const char* str );
	int					(*StringNToInt)( char *s, int len );
}StringInterface;

//
// init function
//

static inline void StringInterfaceInit( StringInterface *si )
{
	si->MakeString = MakeString;
	si->SubStrCmp = SubStrCmp;
	si->PStrlen = PStrlen;
	si->SafeString = SafeString;
	si->SafeStrlen = SafeStrlen;
	si->StringDuplicate = StringDuplicate;
	si->StringDuplicateN = StringDuplicateN;
	si->StrLenSafeSpaces = StrLenSafeSpaces;
	si->StringNToInt = StringNToInt;
	si->AddEscapeChars = AddEscapeChars;
	si->UrlDecode = UrlDecode;
	si->UrlDecodeToMem = UrlDecodeToMem;
	si->StringSplit = StringSplit;
	si->StringAppend = StringAppend;
	si->StringParseUInt = StringParseUInt;
	si->CharIsDigit = CharIsDigit;
	si->CharIsUpAlpha = CharIsUpAlpha;
	si->CharIsLoAlpha = CharIsLoAlpha;
	si->CharIsAlpha = CharIsAlpha;
	si->CharIsAlphanumeric = CharIsAlphanumeric;
	si->CharAlphaToLow = CharAlphaToLow;
	si->CharIsCTL = CharIsCTL;
	si->StringToLowercase = StringToLowercase;
	si->StringToUppercase = StringToUppercase;
	si->StringCheckExtension = StringCheckExtension;
	si->StringSecureFree = StringSecureFree;
	si->StringShellEscape = StringShellEscape;
	si->StringShellEscapeSize = StringShellEscapeSize;
	si->FindInBinary = FindInBinary;
	si->FindInBinaryPOS = FindInBinaryPOS;
	si->FindInBinarySimple = FindInBinarySimple;
	si->HashedString = HashedString;
	si->StringDuplicateEOL = StringDuplicateEOL;
}

#endif
