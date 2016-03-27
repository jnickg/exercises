#include "file_1.h"

double foo(int bar)
{
	return (double)bar;
}

float boo(float far)
{
	float rtn = far + (float)foo(far);
	return rtn;
}