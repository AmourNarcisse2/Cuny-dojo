//Amour Narcisse Thompson
//This code asks the reader for the genre of the movie they want to watch and then gives them the available movies under that genre. Then it asks them to select the movie . After that it provides the menu of movies available for the comedy. horror, and action genres
#include <fstream>
#include <iostream>
using namespace std;
class Car {
private: 
//string 
string brand ;
string year;
int passcapacity;
string luggcapacity;
int stockamnt;


public: 
//add set of attributes within constructors
//make constrructor sets the attributes
//rename parameters in contructors different than attributes
//to save confusion
Car(string b, string y, int p, string l, int s){
 brand=b;//these are the setters
  year=y;
  passcapacity=p;
  luggcapacity=l;   
 stockamnt=s;
  
}
 void getBrand() {
   cout<< brand<< endl;  
 }
 void getYear() {
   cout<< year<< endl;
 }
void getLuggcapacity(){
  cout<<luggcapacity << endl;
}
void getPasscapacity(){
  cout<<passcapacity << endl;
}

void getStockamnt() {
   cout<< stockamnt<< endl;
 }


};

int main() {

  char buyletter;
  ofstream Myfile ("Carinventory.txt");
  Myfile<<"brand : ";
 Myfile<< "BMW, CHEVY, honda"<<endl;
    Myfile<<"year :";
   Myfile<<"2006, 2005, 2022"<<endl;
      Myfile<<"luggcapacity : ";
   Myfile<<"5, 5, 2 "<<endl;
   Myfile<<"passcapacity : ";
   Myfile<<"6, 6, 3 "<<endl;
   Myfile<<"stockamnt : ";
   Myfile<<"4, 3, 2"<<endl;

   cout<<"we have bmws, chevys, and hondas in our inverntory which would you like to buy type the first letter"<<endl;
  cin>>buyletter;

  if(buyletter=='b'){
    b-stockamnt -1 ;
    
  }
    if(buyletter=='c'){
    c-stockamnt -1 ;
    
  }
    if(buyletter=='h'){
    h-stockamnt -1 ;
    
  }
  
// instantitated examples printed towards the end after the user has //selected a movie, each will be printed to show the setter and getter this //is just an example of the instantiation being done properly, these printed below can also be known as the movie menu available
  Car *one= new Car("CHEVY","2002", 5, "three", 3);
one->getYear();
  

  //create a method that will reduce the stockamount when a car is bought or when get some more of the cars in stock  
  //get a unique id as an attribute 
  //use user input to search in your inventory of cars
  //see how u could keep the data stays on the disk so that we can run the program and it remebers the data
}