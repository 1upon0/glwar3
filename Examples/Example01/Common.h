#pragma once

//+-----------------------------------------------------------------------------
//| Included files
//+-----------------------------------------------------------------------------
#include "Error.h"


//+-----------------------------------------------------------------------------
//| Common class
//+-----------------------------------------------------------------------------
class COMMON
{
public:
	CONSTRUCTOR COMMON();
	DESTRUCTOR ~COMMON();


	std::string LowerCase(CONST std::string& String) CONST;
	std::string GetExtention(CONST std::string& FileName) CONST;
};


//+-----------------------------------------------------------------------------
//| Global objects
//+-----------------------------------------------------------------------------
extern COMMON Common;