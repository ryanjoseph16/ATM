

#include <iostream>
#include <string>
#include "main.h"
using namespace std;


int main()
{
    ATM accounts;
    int answer;
    char option;




    do {
            accounts.intro();
            cin >> answer;

        switch(answer)
            {

                case 1:
                    accounts.openAccount();
                    break;
                case 2:
                    accounts.printInfo();
                    break;
                case 3:
                    accounts.deposit();
                    break;
                case 4:
                    accounts.displayBalance();
                    break;
                case 5:
                    accounts.withdrawAccount();
                    break;
                case 6:
                    exit(1);
                    break;


                default:
                    cout << "\n\t\t\t\t\tThis operation does not exist so try again!" << endl;
            }

            accounts.prompt();
            cin >> option;

        }while('y'==option||'Y'==option);
                    cout << "\n\t\t\t\tThe program has ended" << endl;

}





