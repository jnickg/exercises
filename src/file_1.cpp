#include "file_1.h"

float foo(int bar)
{
	return (float)bar;
}

float boo(float far)
{
	float rtn = far + foo(far);
	return rtn;
}

float boofoo37(int har)
{
	float rtn = 37.0f + boo(har);
	return rtn;
}
