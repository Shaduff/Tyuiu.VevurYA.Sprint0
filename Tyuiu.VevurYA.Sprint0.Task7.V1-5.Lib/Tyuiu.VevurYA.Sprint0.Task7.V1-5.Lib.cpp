// Tyuiu.VevurYA.Sprint0.Task7.V1-5.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class ServiceV1 : public ISprint0Task7
{
	virtual float Rezalt(int a) override
	{
		
		int k = 0, num = a;

		while (num > 0)
		{
			if (num > 0)
			{
				k++;
				num = num / 10;
			}
			else break;
		}
		if (k == 3) return true;
		else return false;
	}
};

class ServiceV2 : public ISprint0Task7
{
	virtual float Rezalt(int a) override
	{

		int k = 0, num = a;

		while (num > 0)
		{
			if (num > 0)
			{
				k++;
				num = num / 10;
			}
			else break;
		}
		if (k == 4) return true;
		else return false;
	}
};

class ServiceV3 : public ISprint0Task7
{
	virtual float Rezalt(int a) override
	{

		int k = 0, num = a;

		while (num > 0)
		{
			if (num > 0)
			{
				k++;
				num = num / 10;
			}
			else break;
		}
		if (k == 5) return true;
		else return false;
	}
};

class ServiceV4 : public ISprint0Task7
{
	virtual float Rezalt(int a) override
	{

		int k = 0, num = a;

		while (num > 0)
		{
			if (num > 0)
			{
				k++;
				num = num / 10;
			}
			else break;
		}
		if (k == 6) return true;
		else return false;
	}
};

class ServiceV5 : public ISprint0Task7
{
	virtual float Rezalt(int a) override
	{

		int k = 0, num = a;

		while (num > 0)
		{
			if (num > 0)
			{
				k++;
				num = num / 10;
			}
			else break;
		}
		if (k == 7) return true;
		else return false;
	}
};