#include<iostream>

using namespace std;
int main ()
{

string accountnumber="0000001000";
string pin="2233";
double balance=1000;

string inputAcc;
string inputpin;
int choice;
double amount;

cout << "=================================================" << endl;
cout << "\t" << endl;
cout << "\t\tATM MACHINE\t\t" << endl;
cout << "\t" << endl;
cout << "=================================================" << endl;

cout << "\t" << endl;


cout << "Enter Account Number:\t";
cin >> inputAcc;
cout << "Enter Account Pin:\t";
cin >> inputpin;


if(inputAcc!=accountnumber || inputpin!=pin){
cout << "Invalid Account Number or Pin Please Enter Correct Account.No And Pin:" << endl;
return 0;
}


cout << "\t" << endl;


while(true){
cout << "1. For Balance Inquiry:" << endl;
cout << "2. For Cash Withdrawal:" << endl;
cout << "3. For Cash Deposit:" << endl;
cout << "4. For Exit:" << endl;
cout << "Enter Your Choice:" ;
cin >> choice;


switch(choice){
case 1: 
cout << "Total Balance:\t" <<balance<<endl;
break;


case 2:
cout << "Enter Amount to Withdrawal:" << endl;
cin >> amount;
if(amount>balance){
cout << "Insufficient Balance:" << endl;
}else if(amount<=0){
cout << "Invalid Amount:" << endl;
}else balance-=amount;{
cout << "Withdrawal Successfully: Remaining Balance =" <<balance<< endl;
}
break;


case 3:
cout << "Enter Amount to Deposit" << endl;
cin >> amount;
if(amount<=0){
cout << "Invalid Amount" << endl;
}else amount+=balance;{
cout << "Amount After Deposit =\t" <<balance<< endl;
}
break;


case 4:
cout << "Thank you for choosing our ATM:" << endl;
break;


default:
cout << "invalid your choice please try again" << endl;
}
}


return 0;
}
