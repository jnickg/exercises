#include "file_1.h"

int truly(bool good)
{
	return good ? 1 : -1;
}

float foo(int bar)
{
	return (float)bar;
}

float boo(float far)
{
	float rtn = far + foo(far);
	return rtn;
}

int truly(int bad)
{
	return true;
}
