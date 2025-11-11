#include <iostream>
using namespace std;

class BankAccount{
    public:
        int accountnumber;
        string name;
        int balance;\

        BankAccount(int a,string b,int c){
            accountnumber=a;
            name=b;
            balance=c;
        }
        void deposit(int ammount){
            if (ammount>0){
                balance+=ammount;
            } else{
                cout<<"Enter the amount gerater than 0\n";
            }
        }

        void withdraw(int ammount){
            if (balance>=ammount){
                balance-=ammount;
            }else{
                cout<<"Insufficent amount\n";
            }
        }
        void checkBalance(){
            cout<<"YOUR CURRENT BALANCE AMOUNT: "<<balance<<endl;
        }
};


int main(){
    int opration;
    int ammount;
    
    BankAccount myObj( 123 ,"Baby",2000000000);
    while(1){
    cout<<"ENTER 1 TO DEPOSIT AMMOUNT  \nENTER 2 TO WITHDRAW AMMOUNT\nENTER 3 TO CHECK BALANCE\n";
    cin>>opration;
    switch (opration){
        case 0:
            printf("Exiting program.\n");
                return 0;
        case 1:  
            cout<<"Enter the ammount:";
            cin>>ammount;
            myObj.deposit(ammount);
            break;
        case 2:  
            cout<<"Enter the ammount:";
            cin>>ammount;
            myObj.withdraw(ammount);
             break;
        case 3:  
            myObj.checkBalance();
            break;   
            default:
                printf("Enter a valid number (0, 1, or 2)\n");             

    }
}
return 0;
}