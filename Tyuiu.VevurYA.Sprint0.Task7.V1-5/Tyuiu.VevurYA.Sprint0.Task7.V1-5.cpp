// Tyuiu.VevurYA.Sprint0.Task7.V1-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.VevurYA.Sprint0.Task7.V1-5.Lib/Tyuiu.VevurYA.Sprint0.Task7.V1-5.Lib.cpp"
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Russian");
	while (true)
	{
		system("CLS");
		int Num = 0, dig = 0;
		char qst = ' ';
		cout << "Vevur\t" << "Yan\t" << "Andreevich\n";
		cout << "������� ����� ��������: "; cin >> qst;
		switch (qst)
		{
		default: 
		{
			cout << "[������ �����]\n";
			system("pause");
			break;
		}
		case '1':
		{
			ISprint0Task7* service = new ServiceV1();

			cout << "===Task6.V" << qst << "===\n";
			cout << "������� 3-��������� �����: "; cin >> Num;
			bool n1 = service->Rezalt(Num);
			if (n1)
			{
				cout << "�������  ����� : "; cin >> dig;
				int numK = Num, currDig = 0;
				bool n2 = false;
				while (numK > 0)
				{
					currDig = numK % 10;
					if (currDig == dig)
					{
						n2 = true;
						break;
					}
					numK = numK / 10;
				}
				cout << "� ����� " << Num << (n2 ? " ����������" : " �� ����������") << " ����� " << dig << ".\n";
				system("pause");
				break;
			}
			else
			{
				cout << "������ : ������� �� 3-��������� �����.\n";
				system("pause");
				break;
			}
		}
		case '2':
		{
			ISprint0Task7* service = new ServiceV2();

			cout << "===Task6.V" << qst << "===\n";
			cout << "������� 4-��������� �����: "; cin >> Num;
			bool n1 = service->Rezalt(Num);
			if (n1)
			{
				cout << "�������  ����� : "; cin >> dig;
				int numK = Num, currDig = 0;
				bool n2 = false;
				while (numK > 0)
				{
					currDig = numK % 10;
					if (currDig == dig)
					{
						n2 = true;
						break;
					}
					numK = numK / 10;
				}
				cout << "� ����� " << Num << (n2 ? " ����������" : " �� ����������") << " ����� " << dig << ".\n";
				system("pause");
				break;
			}
			else
			{
				cout << "������ : ������� �� 4-��������� �����.\n";
				system("pause");
				break;
			}
		}
		case '3':
		{
			ISprint0Task7* service = new ServiceV3();

			cout << "===Task6.V" << qst << "===\n";
			cout << "������� 5-��������� �����: "; cin >> Num;
			bool n1 = service->Rezalt(Num);
			if (n1)
			{
				cout << "�������  ����� : "; cin >> dig;
				int numK = Num, currDig = 0;
				bool n2 = false;
				while (numK > 0)
				{
					currDig = numK % 10;
					if (currDig == dig)
					{
						n2 = true;
						break;
					}
					numK = numK / 10;
				}
				cout << "� ����� " << Num << (n2 ? " ����������" : " �� ����������") << " ����� " << dig << ".\n";
				system("pause");
				break;
			}
			else
			{
				cout << "������ : ������� �� 5-��������� �����.\n";
				system("pause");
				break;
			}
		}
		case '4':
		{
			ISprint0Task7* service = new ServiceV4();

			cout << "===Task6.V" << qst << "===\n";
			cout << "������� 6-��������� �����: "; cin >> Num;
			bool n1 = service->Rezalt(Num);
			if (n1)
			{
				cout << "�������  ����� : "; cin >> dig;
				int numK = Num, currDig = 0;
				bool n2 = false;
				while (numK > 0)
				{
					currDig = numK % 10;
					if (currDig == dig)
					{
						n2 = true;
						break;
					}
					numK = numK / 10;
				}
				cout << "� ����� " << Num << (n2 ? " ����������" : " �� ����������") << " ����� " << dig << ".\n";
				system("pause");
				break;
			}
			else
			{
				cout << "������ : ������� �� 6-��������� �����.\n";
				system("pause");
				break;
			}
		}
		case '5':
		{
			ISprint0Task7* service = new ServiceV5();

			cout << "===Task6.V" << qst << "===\n";
			cout << "������� 7-��������� �����: "; cin >> Num;
			bool n1 = service->Rezalt(Num);
			if (n1)
			{
				cout << "�������  ����� : "; cin >> dig;
				int numK = Num, currDig = 0;
				bool n2 = false;
				while (numK > 0)
				{
					currDig = numK % 10;
					if (currDig == dig)
					{
						n2 = true;
						break;
					}
					numK = numK / 10;
				}
				cout << "� ����� " << Num << (n2 ? " ����������" : " �� ����������") << " ����� " << dig << ".\n";
				system("pause");
				break;
			}
			else
			{
				cout << "������ : ������� �� 7-��������� �����.\n";
				system("pause");
				break;
			}
		}
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
