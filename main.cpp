///Banking system that enables customers to withdraw and deposit
//Programer: Joseph Sakala
//email: sakalajoseph111999@gmail.com
//contact number: +260978416506
//sch: CBU


#include<iostream>

using namespace std;

float balance_after_withdraw(float m, float balance)
                      {
                          float difference=balance-m;
                          return difference;
                      }
float balance_after_deposit(float balance, float deposit){
                      float deposit_balance=balance+deposit;
                      return deposit_balance;
}



int main()

{
    int a;//user option
    float m;//money to be withdrawn
    float deposit;
    float balance;//users current balance

    cout<< "Welcome to eBanking\n";
    cout<< "1.WITHDRAW\n";
    cout<< "2.DEPOSIT\n";
    cin>>a;//user enter their option choice


if(a==1)
{
    cout<< "You have opted to withdraw, please enter your current balance: ZMK";
    cin>>balance;
    cout<< "Kindly enter the amount to withdrawn ZMK";
    cin>>m;//user enter the amount to be withdrawn

    if(balance>m){
    cout<< "Thank you for banking with us, your withdraw was successful and your current account balance is ZMK "<<balance_after_withdraw(m,balance);
    }

    else
    {
        cout << "You have insufficient balance";
    }
}

else if(a==2)
{
    cout<< "You have opted to deposit, kindly enter your current account balance and the deposit amount\n";
    cout<< "1.Current Account Balance ZMK";
    cin>>balance;
    cout<<"2.Deposit amount ZMK";
    cin>>deposit;
    cout<< "Thank you so much for banking with us, your deposit has been initiated successfully and your current account balance is: ZMK"<<balance_after_deposit(balance,deposit);


}

else{cout<< "You have selected an invalid option\n";}

cout<< "Press 1 to continue and any other key to exit\n";
cin>>a;
if(a==1)
{
    cout<<main();
}

else{system("cls");}







}

