#include <iostream>
#include "crc16.h"


int main()
{
	std::cout << crc16("test", 4) << std::endl;
	return 0;
}
