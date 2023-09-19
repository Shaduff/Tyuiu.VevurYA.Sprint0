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
		cout << "Ââåäèòå íîìåð âàðèàíòà: "; cin >> qst;
		switch (qst)
		{
		default: 
		{
			cout << "[ÎØÈÁÊÀ ÂÂÎÄÀ]\n";
			system("pause");
			break;
		}
		case '1':
		{
			ISprint0Task7* service = new ServiceV1();

			cout << "===Task6.V" << qst << "===\n";
			cout << "Ââåäèòå 3-¸õçíà÷íîå ÷èñëî: "; cin >> Num;
			bool n1 = service->Rezalt(Num);
			if (n1)
			{
				cout << "Ââåäèòå  öèôðó : "; cin >> dig;
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
				cout << "Â ÷èñëå " << Num << (n2 ? " ÑÎÄÅÐÆÈÒÑß" : " ÍÅ ÑÎÄÅÐÆÈÒÑß") << " öèôðà " << dig << ".\n";
				system("pause");
				break;
			}
			else
			{
				cout << "ÎØÈÁÊÀ : Ââåäåíî íå 3-¸õçíà÷íîå ÷èñëî.\n";
				system("pause");
				break;
			}
		}
		case '2':
		{
			ISprint0Task7* service = new ServiceV2();

			cout << "===Task6.V" << qst << "===\n";
			cout << "Ââåäèòå 4-¸õçíà÷íîå ÷èñëî: "; cin >> Num;
			bool n1 = service->Rezalt(Num);
			if (n1)
			{
				cout << "Ââåäèòå  öèôðó : "; cin >> dig;
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
				cout << "Â ÷èñëå " << Num << (n2 ? " ÑÎÄÅÐÆÈÒÑß" : " ÍÅ ÑÎÄÅÐÆÈÒÑß") << " öèôðà " << dig << ".\n";
				system("pause");
				break;
			}
			else
			{
				cout << "ÎØÈÁÊÀ : Ââåäåíî íå 4-¸õçíà÷íîå ÷èñëî.\n";
				system("pause");
				break;
			}
		}
		case '3':
		{
			ISprint0Task7* service = new ServiceV3();

			cout << "===Task6.V" << qst << "===\n";
			cout << "Ââåäèòå 5-òèçíà÷íîå ÷èñëî: "; cin >> Num;
			bool n1 = service->Rezalt(Num);
			if (n1)
			{
				cout << "Ââåäèòå  öèôðó : "; cin >> dig;
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
				cout << "Â ÷èñëå " << Num << (n2 ? " ÑÎÄÅÐÆÈÒÑß" : " ÍÅ ÑÎÄÅÐÆÈÒÑß") << " öèôðà " << dig << ".\n";
				system("pause");
				break;
			}
			else
			{
				cout << "ÎØÈÁÊÀ : Ââåäåíî íå 5-òèçíà÷íîå ÷èñëî.\n";
				system("pause");
				break;
			}
		}
		case '4':
		{
			ISprint0Task7* service = new ServiceV4();

			cout << "===Task6.V" << qst << "===\n";
			cout << "Ââåäèòå 6-òèçíà÷íîå ÷èñëî: "; cin >> Num;
			bool n1 = service->Rezalt(Num);
			if (n1)
			{
				cout << "Ââåäèòå  öèôðó : "; cin >> dig;
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
				cout << "Â ÷èñëå " << Num << (n2 ? " ÑÎÄÅÐÆÈÒÑß" : " ÍÅ ÑÎÄÅÐÆÈÒÑß") << " öèôðà " << dig << ".\n";
				system("pause");
				break;
			}
			else
			{
				cout << "ÎØÈÁÊÀ : Ââåäåíî íå 6-òèçíà÷íîå ÷èñëî.\n";
				system("pause");
				break;
			}
		}
		case '5':
		{
			ISprint0Task7* service = new ServiceV5();

			cout << "===Task6.V" << qst << "===\n";
			cout << "Ââåäèòå 7-ìèçíà÷íîå ÷èñëî: "; cin >> Num;
			bool n1 = service->Rezalt(Num);
			if (n1)
			{
				cout << "Ââåäèòå  öèôðó : "; cin >> dig;
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
				cout << "Â ÷èñëå " << Num << (n2 ? " ÑÎÄÅÐÆÈÒÑß" : " ÍÅ ÑÎÄÅÐÆÈÒÑß") << " öèôðà " << dig << ".\n";
				system("pause");
				break;
			}
			else
			{
				cout << "ÎØÈÁÊÀ : Ââåäåíî íå 7-ìèçíà÷íîå ÷èñëî.\n";
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
