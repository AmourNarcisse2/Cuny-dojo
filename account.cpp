//Amour Narcisse
#include <iostream>
using namespace std;
int main() {
string input;
  float account;
  float interestRate= 0.05;
  float amount;
float accountBalance;
  accountBalance=0;
  float newBalance;
  float cost;
  

 cout << "Would you like to make a deposit or withdraw" << endl<< "Type w for withdrawal or type d for deposit"<< endl;
  
cin>>input;
  if (input=="w"){
  cout << "How much would you like to withdraw ? " << endl; 
  cin>>amount;
    accountBalance= accountBalance-amount;
    cout<<"Your account balance is now: " << "$" <<accountBalance; 
  }
  if (input=="d"){
    cout << "How much would you like to deposit ? " << endl; 
    cin>>amount;
    accountBalance= accountBalance + amount;
    cout<<"Your account balance is now: " << "$" << accountBalance<<endl;
  
  }

    cout << "Would you like to make another deposit or withdraw" << endl<< "Type yes or no "<< endl;
   cin>>input;
  if (input=="yes"){
  cout << "This is your last withdraw or deposit this account only allows a limit of two withdraws and deposits would you like to make a deposit or withdraw" << endl<< "Type w for withdrawal or type d for deposit"<< endl;
 cin>>input;
  if (input=="w"){
  cout << "How much would you like to withdraw ? " << endl; 
  cin>>amount;
    accountBalance= accountBalance-amount;
    if(accountBalance<0){
     newBalance= accountBalance + (amount * interestRate);

    cout<< "This is your balance because the withdrawal amount was greater than the amount already inside the account"<<" This means that we will charge you an extra 5% interest loan which needs to be paid off" << endl;
    }
    cost=interestRate * amount;
    cout<<"Your account balance is now: " << "$ " << accountBalance<<" plus an extra $"<<cost<<endl;
    
  } 
  if (input=="d"){
    cout << "How much would you like to deposit ? " << endl; 
    cin>>amount;
    accountBalance= accountBalance + amount;
    cout<<"Your account balance is now: " << "$" << accountBalance<<endl;
    
  }   

  
  }
   
  
 
 
  
 return 0; 
}