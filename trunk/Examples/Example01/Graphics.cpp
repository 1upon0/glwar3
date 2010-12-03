//+-----------------------------------------------------------------------------
//| Included files
//+-----------------------------------------------------------------------------
#include "Graphics.h"


//+-----------------------------------------------------------------------------
//| Global objects
//+-----------------------------------------------------------------------------
GRAPHICS Graphics;


//+-----------------------------------------------------------------------------
//| Constructor
//+-----------------------------------------------------------------------------
GRAPHICS::GRAPHICS()
{

}


//+-----------------------------------------------------------------------------
//| Destructor
//+-----------------------------------------------------------------------------
GRAPHICS::~GRAPHICS()
{

}


//+-----------------------------------------------------------------------------
//| Sets a new world matrix
//+-----------------------------------------------------------------------------
VOID GRAPHICS::SetWorldMatrix(CONST MATRIX4& NewWorldMatrix)
{
	WorldMatrix = NewWorldMatrix;
	//Direct3DDevice->SetTransform(D3DTS_WORLD, &WorldMatrix);
}


//+-----------------------------------------------------------------------------
//|
//+-----------------------------------------------------------------------------
BOOL GRAPHICS::SetShader()
{
	ProgramObject = esLoadProgramFromFile("Simple.vert", "Simple.frag");
	PositionSlot = glGetAttribLocation(ProgramObject, "a_position");

	return TRUE;
}

//+-----------------------------------------------------------------------------
//| 
//+-----------------------------------------------------------------------------
GLuint GRAPHICS::Program() CONST
{
	return ProgramObject;
}


//+-----------------------------------------------------------------------------
//| 
//+-----------------------------------------------------------------------------
GLuint GRAPHICS::Position() CONST
{
	return PositionSlot;
}