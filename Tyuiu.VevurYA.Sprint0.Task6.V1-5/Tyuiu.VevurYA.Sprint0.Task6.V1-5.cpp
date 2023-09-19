// Tyuiu.VevurYA.Sprint0.Task6.V1-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.VevurYA.Sprint0.Task6.V1-5.Lib/Tyuiu.VevurYA.Sprint0.Task6.V1-5.Lib.cpp"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        system("CLS");
        cout << "Vevur\t" << "Yan\t" << "Andreevich\n";
        char qst = ' ';
        cout << "Введите номер варианта: "; cin >> qst;
        system("CLS");
        int x = 0, y = 0;


        switch (qst)
        {
        default: {
            cout << "[ОШИБКА ВВОДА]\n";
            system("pause");
            break;
        }
        case '1':
        {
            ISprint0Task6* service = new ServiceV1();
            cout << "===Task6.V" << qst << "===\n";
            cout << "Введите значение 'x': "; cin >> x;
            cout << "Введите значение 'y': "; cin >> y;
            cout << x << " / 3 / " << y << " + 6 = " << service->Calculate(x, y) << endl;
            system("pause");
            break;
        }
        
        case '2':
        {
            ISprint0Task6* service = new ServiceV2();
            cout << "===Task6.V" << qst << "===\n";
            cout << "Введите значение 'x': "; cin >> x;
            cout << "Введите значение 'y': "; cin >> y;
            cout << x << " * " << y << " / ( 5 + " << x << " ) + 6 = " << service->Calculate(x, y) << endl;
            system("pause");
            break;
        }
        
        case '3':
        {
            ISprint0Task6* service = new ServiceV3();
            cout << "===Task6.V" << qst << "===\n";
            cout << "Введите значение 'x': "; cin >> x;
            cout << "Введите значение 'y': "; cin >> y;
            cout << "( 5 + ( " << x << " * " << y << " / 3 )) = " << service->Calculate(x, y) << endl;
            system("pause");
            break;
        }
        
        case '4':
        {
            ISprint0Task6* service = new ServiceV4();
            cout << "===Task6.V" << qst << "===\n";
            cout << "Введите значение 'x': "; cin >> x;
            cout << "Введите значение 'y': "; cin >> y;
            cout << "( 5 * " << x << " ) / ( 7 + " << y << " ) = " << service->Calculate(x, y) << endl;
            system("pause");
            break;
        }
        
        case '5':
        {
            ISprint0Task6* service = new ServiceV5();
            cout << "===Task6.V" << qst << "===\n";
            cout << "Введите значение 'x': "; cin >> x;
            cout << "Введите значение 'y': "; cin >> y;
            cout << "( " << x << " * 8 ) / " << y << " * 2  = " << service->Calculate(x, y) << endl;
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
