#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int pin;
    int password = 123;
    bool isTrue = true;
    int count = 0;
    int entry;
    double deposit = 0.0;
    double withdraw = 0.0;
    double balance = 0.0;
    
    system("Color 4E");
    do
    {
        cout << "***Welcome to Danilo bank***\n";
        cout << "Enter your pin: \n";
        cin >> pin;

        if(pin == password){
            do
            {
                cout << "***Welcome to Danilo bank***\n";
                cout << "1. Deposit \n";
                cout << "2. Withdraw \n";
                cout << "3. Balance \n";
                cout << "4. Exit \n";
            cout << "Choose an option:\n";
            cin >> entry; 
            
            switch (entry)
            {
            case 1:
                cout << "Deposit amount: \n";
                cin >> deposit;
                balance = balance + deposit;
                break;

            case 2:
                if (balance<=0){
                    cout << "Please deposit some funds. \n";
                }
                else
                {
                cout << "Withdraw amount: \n";
                cin >> withdraw;
                balance = balance - withdraw;
                }
                break;

            case 3:
                cout << "Current Balance: \n" << balance << endl;
                break;

            case 4:
                cout << "Have a nice day! \n";
                isTrue = false;
                break;
            
            }  
            } while (isTrue != false);

        }
        else
        {
            count++;
            if(count ==3)
                isTrue=false;
            else
                cout << "Wrong pin! \n";
        }

    } while (isTrue != false);
    
}