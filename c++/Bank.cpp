#include <iostream>
using namespace std;

class Account
{
 protected:
     int accountno;
     float balance;
 public:
 void getaccount()
 {
    cout<<"Enter the Account Number :"<<endl;
    cin>>accountno;
    cout<<"Enter the initial balance :"<<endl;
    cin>>balance;
 } 
 void deposit()
 {
  float amount;
  cout<< "enter the Deposit Amount"<<endl;
  cin>>amount;
  balance = balance + amount;
 }
 void displaybalance()
 {
    cout << "Account no :"<<accountno <<endl;
    cout << "Balance:" << balance <<endl;
 }
};

class SavingsAccount : public Account
{
public:
 void withdraw()
 {
    float amount;
    cout << "Enter trhe withdrawal amount:";
    cin>>amount;
    
    if(amount <= balance)
    {
        balance =balance - amount;
        cout<< "Withdrw sucessfully";
    }
    else
    {
        cout<< "Insufficient balance\n";
    }

 }
 void interest()
  {
    float interest;
    interest = balance * 5 / 100;
    balance =balance + interest;
    cout<< "interest added:"<<interest<<endl;
 }
};
int main()
{
 SavingsAccount  s;
 s.getaccount();
 s.deposit();
 s.withdraw();
 s.interest();
 s.displaybalance();
 return 0;
}
 

