// Tyuiu.VevurYA.Sprint0.Task4.V1-5.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function

class ServiceV1 : public ISprint0Task4
{
	virtual int Calculate(int a, int b, int c, int d) override
	{
		return (a / b * c) / d;
	}
};

class ServiceV2 : public ISprint0Task4
{
	virtual int Calculate(int a, int b, int c, int d) override
	{
		return a * (b + c) + d;
	}
};

class ServiceV3 : public ISprint0Task4
{
	virtual int Calculate(int a, int b, int c, int d) override
	{
		return (a / b / c) + d;
	}
};

class ServiceV4 : public ISprint0Task4
{
	virtual int Calculate(int a, int b, int c, int d) override
	{
		return a * b + c * d;
	}
};

class ServiceV5 : public ISprint0Task4
{
	virtual int Calculate(int a, int b, int c, int d) override
	{
		return a - b / c * d;
	}
};