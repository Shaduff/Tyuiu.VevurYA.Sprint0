// Tyuiu.VevurYA.Sprint0.Task5.V1-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.VevurYA.Sprint0.Task5.V1-5.Lib/Tyuiu.VevurYA.Sprint0.Task5.V1-5.Lib.cpp"

using namespace std;


void stdName()
{
    cout << "Vevur\t" << "Yan\t" << "Andreevich\n";
}

int main()
{   
    //setlocale(LC_ALL, "Russian");
    setlocale(0, "");
    

    while (true)
    {
        system("CLS");
        stdName();
        float a = 0, b = 0, c = 0;
        char qst = ' ';
        cout << "Введите номер задачи: "; cin >> qst;
        system("CLS");

        switch (qst)
        {
        default:
        {
            cout << "[ОШИБКА ВВОДА]" << endl;
            system("pause");
        }

        case '1':
        {
            // Task5.V1
            ISprint0Task5* serviceV1 = new ServiceV1();
            cout << "===Task5.V1===\n";
            cout << "Введите длину прямоуг. : "; cin >> a;
            cout << "Введите ширину прямоуг.: "; cin >> b;
            cout << "Введите высоту прямоуг.: "; cin >> c;
            cout << "Объем равен: " << serviceV1->Zadacha(a, b, c) << endl;
            system("pause");
            break;
        }

        case '2':
        {

            // Task5.V2
            ISprint0Task5* serviceV2 = new ServiceV2();
            cout << "===Task5.V2===\n";
            cout << "Введите цену тетради : "; cin >> a;
            cout << "Введите цену обложки : "; cin >> b;
            cout << "Введите колич. компл.: "; cin >> c;
            cout << "Стоим. покупки: " << serviceV2->Zadacha(a, b, c) << endl;
            system("pause");
            break;
        }

        case '3':
        {
            // Task5.V3
            ISprint0Task5* serviceV3 = new ServiceV3();
            cout << "===Task5.V3===\n";
            cout << "Введите цену конфет (Иван)    : "; cin >> a;
            cout << "Введите цену конфет (сесттра) : "; cin >> b;
            cout << "Введите цену печенья          : "; cin >> c;
            cout << "Стоим. покупки: " << serviceV3->Zadacha(a, b, c) << endl;
            system("pause");
            break;
        }

        case '4':
        {
            // Task5.V4
            ISprint0Task5* serviceV4 = new ServiceV4();
            cout << "===Task5.V4===\n";
            cout << "Введите расстояние до дачи       : "; cin >> a;
            cout << "Введите расход банзина (л/100км) : "; cin >> b;
            cout << "Введите цену за литр бензина     : "; cin >> c;
            cout << "Стоим. поездки на дачу : " << serviceV4->Zadacha(a, b, c) << endl;
            system("pause");
            break;
        }

        case '5':
        {
            // Task5.V5
            ISprint0Task5* serviceV5 = new ServiceV5();
            cout << "===Task5.V5===\n";
            cout << "Введите длину 1-го катета : "; cin >> a;
            cout << "Введите длину 2-го катета : "; cin >> b;
            cout << "Введите длину гипотенузы  : "; cin >> c;
            cout << "Сумма периметра и площади : " << serviceV5->Zadacha(a, b, c) << endl;
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
