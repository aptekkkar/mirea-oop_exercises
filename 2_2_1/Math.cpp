#include "Math.h"

Math::Math(int value)
{
	available = value;
	hidden = value * 2;
}

void Math::change_state()
{
	available += 1;
	hidden += 4;
}

void Math::call_private()
{
	private_action();
}

void Math::read_state()
{
	std::cout << "Value of the available property " << available << "; ";
	std::cout << "Value of a hidden property " << hidden;
}

void Math::private_action()
{
	available += 5;
	hidden += 7;
}
