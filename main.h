#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <string>
using namespace std;

class ATM {
    public:
        void openAccount();
        void printInfo();
        void deposit ();
        void displayBalance();
        void withdrawAccount();
        void intro();
        void prompt();


    private:
        string name;
        int accountnumber;
        char type[12];
        int money;
        int totalMoney;





};

void ATM::openAccount(){


        cout << "\t\t\t\t\t\tEnter Your Full Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "\t\t\t\t\t\tEnter Your Account Number: ";
        cin  >> accountnumber;
        cout << "\t\t\t\t\t\tEnter Your Account Type: ";
        cin  >> type;
        cout << "\t\t\t\t\t\tEnter Balance: ";
        cin  >> totalMoney;

};
void ATM::printInfo(){

        cout << "\n\n\t\t\t\t\t\tFull Name: " << name << endl;
        cout << "\t\t\t\t\t\tAccount Number: " << accountnumber << endl;
        cout << "\t\t\t\t\t\tAccount Type: " << type << endl;
        cout << "\t\t\t\t\t\tTotal Balance: " << totalMoney << endl;
}
void ATM::deposit(){

        cout << "\n\t\t\t\t\t\tEnter the Amount you want to deposit:\n\t\t\t\t\t\t ";
        cin >> money ;
        totalMoney = totalMoney + money;
}
void ATM::displayBalance(){

        cout << "\n\t\t\t\t\tTotal Balance: " << totalMoney << endl;
}

void ATM::withdrawAccount(){

        double amount, balanceAfterWithdraw;
        cout << "\n\t\t\t\t\t\tEnter the amount You want Withdraw Money: ";
        cin >> amount ;
        balanceAfterWithdraw = totalMoney -  amount;
        cout << "\n\t\t\t\t\t\tRemaining Balance:" << balanceAfterWithdraw << endl;

}
void ATM::intro(){

        cout << "\n\n\t\t\t\t\t===================ATM==================" << endl << endl;
        cout << "\t\t\t\t\t1) Enter Full Name, Account Number and Account type" << endl << endl;
        cout << "\t\t\t\t\t2) Display Information" << endl << endl;
        cout << "\t\t\t\t\t3) Deposit " << endl << endl;
        cout << "\t\t\t\t\t4) ToTal Balance" << endl << endl;
        cout << "\t\t\t\t\t5) Withdraw" << endl << endl;
        cout << "\t\t\t\t\t6) Cancel Transaction" << endl << endl;
        cout << "\t\t\t\t\tSelect An Option from here 1/2/3/4/5/6: ";


}
void ATM::prompt(){
        cout << "\t\t\t\tPlease Enter Y if you wish to continue and N if [NO]";


}
#endif
