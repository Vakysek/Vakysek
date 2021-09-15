#include <iostream>
#include <cmath>
#include <windows.h>
#include <iomanip>

using namespace std;

int main()
{
    int balance = 100, cash = 0, pin = 0, max = 0, user_pin = 123, volba = 0;
    bool run = true, menu = false;

    while (run == true)
    {
        do{
            cout << "Enter pin: ";
            cin >> pin;
            max++;
            system("cls");
        } while (max < 3 && pin != user_pin);

        if (pin == user_pin)
        {
            max = 0;
            pin = 0;
            menu = true;
        }
        while (menu == true)
        {
            cout << endl;
            cout << "Plese choose one of the options: \n";
            cout << "1) Check balance\n";
            cout << "2) Deposit balance\n";
            cout << "3) Withdraw balance\n";
            cout << "4) Exit to loggin screen\n";
            cout << "5) Exit\n";
            cout << endl;
            cin >> volba;
            system("cls");
            if (volba == 5)
            {
                cout << "Turning off the program...\n";
                Sleep(1000);
                cout << endl;
                system("PAUSE");
                exit(0);
            }
            else if (volba == 4)
            {
                cout << "Logging off...\n";
                Sleep(1000);
                cout << endl;
                system("PAUSE");
                system("cls");
                menu = false;
            }
            else if (volba == 3)
            {
                cout << "Please enter how much you want to withdraw: ";
                cin >> volba;
                system("cls");
                if (volba <= balance)
                {
                    cash += volba;
                    balance -= volba;
                    cout << "Your money was succesfully withdrawn\n";
                    Sleep(1500);
                    cout << endl;
                    system("PAUSE");
                    system("cls");
                }
                else {
                    cout << "Error\n";
                    Sleep(1500);
                    cout << endl;
                    system("PAUSE");
                    system("cls");
                }
            }
            else if (volba == 2)
            {
                cout << "Please enter how much you want to deposit: ";
                cin >> volba;
                system("cls");
                if (volba <= cash)
                {
                    balance += volba;
                    cash -= volba;
                    cout << "Your money was succesfully deposited\n";
                    Sleep(1500);
                    cout << endl;
                    system("PAUSE");
                    system("cls");
                }
                else {
                    cout << "Error\n";
                    Sleep(1500);
                    cout << endl;
                    system("PAUSE");
                    system("cls");
                }
            }
            else if (volba == 1)
            {
                cout << "Balance: " << balance << endl;
                cout << "Cash: " << cash << endl;
                Sleep(1500);
                cout << endl;
                system("PAUSE");
                system("cls");
            }
        }
        if (max >= 3)
        {
            cout << "You have entered incorrect pin for 3 times";
            Sleep(1500);
            run = false;
        }
    }

    return 0;
}
