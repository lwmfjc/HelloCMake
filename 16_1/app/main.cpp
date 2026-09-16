#include "motor.hpp"
#include "sensor.hpp"

int main()
{
	Motor motor;
	motor.move();

	Sensor sensor;
	int value=sensor.read();
	
	return 0;
}
