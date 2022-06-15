//Amour Narcisse Thompson
//This code asks the reader for the genre of the movie they want to watch and then gives them the available movies under that genre. Then it asks them to select the movie . After that it provides the menu of movies available for the comedy. horror, and action genres
#include <iostream>
using namespace std;
class Car {
private: 
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
  
// instantitated examples printed towards the end after the user has //selected a movie, each will be printed to show the setter and getter this //is just an example of the instantiation being done properly, these printed below can also be known as the movie menu available
  Car *one= new Car("CHEVY","2002", 5, "three", 3);
one->getYear();

}