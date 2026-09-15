#include <iostream>


int main()
{
	int a;
    std::cout<<"Hello CMake"<<std::endl;
#ifdef DEBUG_MODE

	std::cout
		<< "debug mode\n";
#endif

    return 0;
}
