//Amour Narcisse Thompson
#include <iostream>
using namespace std;
class movie {
private: 
string genre;
string rating;
string title;
public: 
movie();
//add set of attributes within constructors
//make constrructor sets the attributes
//rename parameters in contructors different than attributes
//to save confusion
movie(string g, string rating, string title ){
  genre=g;
  
 cout<<"The genre is "+ genre <<endl;
  cout<<"The rating is "+ rating << endl;
    cout<<"The title is "+ title << endl;
}
 //add set functions settors
//setting the three attributes 

 void getGenre() {
   cout<< genre<< endl;
 }
void getRating(){
  cout<< rating << endl;
}
void getTitle() {
   cout<< title<< endl;
 }


};

int main() {
  string g;
  string r;
  string t;
  movie *one= new movie("horror", "R", "the boy");
one->getGenre();
//cout<<"Please input the genre of the movie "<<endl;
 // cin>>g ;
//cout<<"Please input the rating of the movie "<<endl;  
//  cin>>r;
 // cout<<"Please input the title of the movie "<<endl;
 // cin>>t;
// movie *two=new movie();
}