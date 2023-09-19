// Tyuiu.VevurYA.Sprint0.Task6.V1-5.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class ServiceV1 : public ISprint0Task6
{
	virtual int Calculate(float a, int b) override
	{
		return a / 3 / b + 6;
	}
};

class ServiceV2 : public ISprint0Task6
{
	virtual int Calculate(float a, int b) override
	{
		return a * b / (5 + a) + 6;
	}
};

class ServiceV3 : public ISprint0Task6
{
	virtual int Calculate(float a, int b) override
	{
		return 5 + (a * b / 3);
	}
};

class ServiceV4 : public ISprint0Task6
{
	virtual int Calculate(float a, int b) override
	{
		return (5 * a) / (7 + b);
	}
};

class ServiceV5 : public ISprint0Task6
{
	virtual int Calculate(float a, int b) override
	{
		return (a * 8) / b * 2;
	}
};