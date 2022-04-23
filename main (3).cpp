// this item will read in the quantity of a particular item
// it will then print out the total price
// the input will come from the key board and the output will go  to the screen
// Amour Narcisse Thompson

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
  
  string firstName;
  cout<<"Please enter your first name"<<endl;
  cin>>firstName;
  ofstream MyFile ("firstNameShoppingList.txt");
  MyFile<<"This file contains all of your shopping items as you have entered them "<<endl;
  cout<< "This program takes the amount of items bought. The name and price of each item in oder.This program puts them into a shopping list text file.After all the items and prices of those items have been entered please enter 0 for both the name and price to show that your items list is complete.Your shopping list will then be presented to you along with the total price "<< endl;
int quantity; //contains the amount of items purchased
  float itemPrice;//contains the price of each item
  float totalBill;//contains the total bill
  string name;
 int counter=1;
  cout << setprecision(3) << fixed << showpoint; // output format
  

  //notes to fix code:
  //create text file, with specific username.shoppinglist
  // at the begining propmt the user of their name 
  
//program doesn't need to have amount value to run 
  //should just run once the user puts in the first item and repeat that
  //dont have to count what number of items
  // could iplement the idea of what is the next item on //your list
  
  
    cout << endl<<"Please input the names of your items follwed. Then use commas to seperate each item.Enter 0 or press enter when done" << endl;
    cin>>name;
  cout<<"Please enter the prices corresponding to the items in the same order"<<endl;
  cin >> itemPrice;
  if(itemPrice==0){
   MyFile.close();
    return 0;
  }
  if(itemPrice<0){
    cout<<"error!"<<endl;
    cout<<"input value must be greater than 0"<< endl;
    return 0;
  }

   
  
    cout<<"This is the end of your shopping list here is your shopping file. "<< endl;
  

  
  
   
  return 0;
  
  
}
