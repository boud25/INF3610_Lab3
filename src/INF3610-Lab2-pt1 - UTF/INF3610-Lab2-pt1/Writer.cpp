#include "Writer.h"

Writer::Writer(sc_module_name name)
	:sc_channel(name)
{
	/*

	└ complÚter

	*/
}


Writer::~Writer()
{
}

void Writer::Write(unsigned int offset, unsigned int data)  {
	dataPortRAM->Write(offset, data);
}