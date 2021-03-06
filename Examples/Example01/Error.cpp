//+-----------------------------------------------------------------------------
//| Included files
//+-----------------------------------------------------------------------------
#include "Error.h"


//+-----------------------------------------------------------------------------
//| Global objects
//+-----------------------------------------------------------------------------
ERROR_HANDLER Error;


//+-----------------------------------------------------------------------------
//| Constructor
//+-----------------------------------------------------------------------------
ERROR_HANDLER::ERROR_HANDLER()
{
	ClearMessage();
}


//+-----------------------------------------------------------------------------
//| Destructor
//+-----------------------------------------------------------------------------
ERROR_HANDLER::~ERROR_HANDLER()
{
	ClearMessage();
}


//+-----------------------------------------------------------------------------
//| Clears the message
//+-----------------------------------------------------------------------------
VOID ERROR_HANDLER::ClearMessage()
{
	MessageSet = FALSE;
	Message = "";
}


//+-----------------------------------------------------------------------------
//| Sets a new message
//+-----------------------------------------------------------------------------
VOID ERROR_HANDLER::SetMessage(const std::string &NewMessage)
{
	MessageSet = TRUE;
	Message = NewMessage;
}


//+-----------------------------------------------------------------------------
//| Returns the message
//+-----------------------------------------------------------------------------
std::string ERROR_HANDLER::GetMessage() CONST
{
	return Message;
}