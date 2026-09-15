#include <iostream>
#include <motor.h>
#include <config.h>

int  main()
{
	motorRun();
	std::cout << "speed: " << MOTOR_SPEED << std::endl;
	return 0;
}
