#include <iostream>
using namespace std;
int main() {
string input;
  float account;
  float amount;
float currentBalance;
  
  cout << "Would you like to make a deposit or withdraw" << endl<< "Type w for withdrawal or type d for deposit"<< endl;
  
cin>>input;
 // if (input=="w"){
 //  cout << "How much would you like to  withdraw ? " << endl; 
  //  cin>>amount;
   // currentBalance= currentBalance + amount;
 // }
  if (input=="d"){
    cout << "How much would you like to deposit ? " << endl; 
    cin>>amount;
    currentBalance= currentBalance + amount;
  }

  
}