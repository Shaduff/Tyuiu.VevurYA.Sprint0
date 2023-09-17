// Tyuiu.VevurYA.Sprint0.Task4.V1-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.VevurYA.Sprint0.Task4.V1-5.Lib/Tyuiu.VevurYA.Sprint0.Task4.V1-5.Lib.cpp"
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	while (true)
	{
		system("CLS");
		char qst = ' ';
		cout << "Ââåäèòå íîìåð âàðèàíòà: "; cin >> qst;
		system("CLS");
		
		switch (qst) {

		default: {
			cout << "[ÎØÈÁÊÀ ÂÂÎÄÀ]" << endl;
			system("pause");
			break;
		}
		case '1': {
			cout << "===Task4.V1===\n";
			ISprint0Task4* service = new ServiceV1();
			int a = 6, b = 2, c = 3, d = 9;
			cout << " ( " << a << " / " << b << " * " << c << " ) / " << d << " = " << service->Calculate(a, b, c, d) << endl;
			system("pause");
			break;
		}

		case '2': {
			cout << "===Task4.V2===\n";
			ISprint0Task4* service = new ServiceV2();
			int a = 3, b = 4, c = 1, d = 2;
			cout << " " << a << " * ( " << b << " + " << c << " ) + " << d << " = " << service->Calculate(a, b, c, d) << endl;
			system("pause");
			break;
		}
		
		case '3': {
			cout << "===Task4.V3===\n";
			ISprint0Task4* service = new ServiceV3();
			int a = 15, b = 2, c = 4, d = 8;
			cout << " ( " << a << " / " << b << " / " << c << " ) + " << d << " = " << service->Calculate(a, b, c, d) << endl;
			system("pause");
			break;
		}

		case '4': {
			cout << "===Task4.V4===\n";
			ISprint0Task4* service = new ServiceV4();
			int a = 2, b = 3, c = 7, d = 4;
			cout << " " << a << " * " << b << " + " << c << " * " << d << " = " << service->Calculate(a, b, c, d) << endl;
			system("pause");
			break;
		}
		
		case '5': {
			cout << "===Task4.V5===\n";
			ISprint0Task4* service = new ServiceV2();
			int a = 25, b = 8, c = 4, d = 9;
			cout << " " << a << " - " << b << " / " << c << " * " << d << " = " << service->Calculate(a, b, c, d) << endl;
			system("pause");
			break;
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
