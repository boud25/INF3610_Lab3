///////////////////////////////////////////////////////////////////////////////
//
//	Reader.cpp
//
///////////////////////////////////////////////////////////////////////////////
#include "Reader.h"

///////////////////////////////////////////////////////////////////////////////
//
//	Constructor
//
///////////////////////////////////////////////////////////////////////////////
Reader::Reader(sc_module_name name)
	:sc_channel(name)
{
	/*

	└ complÚter

	*/
}

///////////////////////////////////////////////////////////////////////////////
//
//	Destructor
//
///////////////////////////////////////////////////////////////////////////////
Reader::~Reader()
{
	/*

	└ complÚter

	*/
}

unsigned int Reader::Read(unsigned int offset)  {
	return dataPortRAM->Read(offset);
}

