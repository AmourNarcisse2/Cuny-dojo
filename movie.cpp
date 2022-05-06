//Amour Narcisse Thompson
//This code asks the reader for the genre of the movie they want to watch and then gives them the available movies under that genre. Then it asks them to select the movie . After that it provides the menu of movies available for the comedy. horror, and action genres
#include <iostream>
using namespace std;
class movie {
private: 
string genre;
string rating;
string title;
public: 
//add set of attributes within constructors
//make constrructor sets the attributes
//rename parameters in contructors different than attributes
//to save confusion
movie(string g, string r, string t ){
  genre=g;//these are the setters
  rating=r;
  title=t;
}
 
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

  string select;
  string g;
  string r;
  string t;
   cout<<"What genre movie would you like to watch? "<<endl;
  cin>>g;

  if(g=="horror"){
    cout<<"The movies we have with this genre are The boy, Halloween, and Freddy Kruger "<<endl; 
  }
  if(g=="comedy"){
   cout<<"The movies we have with this genre are Moana and Ride Along "<<endl;
  }
    if(g=="action"){
   cout<<"The movies we have with this genre are Wolverine and Avengers "<<endl;
  }
cout<<"Please select a movie by typing the first letter of its title "<<endl;
  cin>>select;
   if (select=="W"){
    cout<<"action movie it is "<<endl;
  }
   if (select=="A"){
    cout<<"action movie it is "<<endl;
  }
   if (select=="F"){
    cout<<"Don't get too scared now "<<endl;
  }
  if (select=="F"){
    cout<<"Don't get too scared now "<<endl;
  }
   if (select=="T"){
    cout<<"Don't get too scared now "<<endl;
  }
   if (select=="H"){
    cout<<"Don't get too scared now "<<endl;
  }
   if (select=="M"){
    cout<<"go laugh "<<endl;
  }
   if (select=="R"){
    cout<<"go laugh "<<endl;
  }
  cout<<endl<<endl<<endl<<endl;
  
// instantitated examples printed towards the end after the user has //selected a movie, each will be printed to show the setter and getter this //is just an example of the instantiation being done properly, these printed below can also be known as the movie menu available
  movie *one= new movie("horror", "R", "Freddy Kruger");
  movie *two= new movie("Horoor", "R", "The boy");
  movie *three= new movie("horror", "R", "Halloween");
  movie *four= new movie("comedy", "PG-13", "Ride Along ");
  movie *five= new movie("comedy", "PG-13", "Moana");
  movie *six= new movie("action", "PG", "Avengers");
  movie *seven= new movie("action", "PG", "Wolverine");
cout<<"This is the movie menu "<<endl;
one->getGenre();
  one->getTitle();
two->getGenre();
    two->getTitle();
three->getGenre();
    three->getTitle();
four->getGenre();
    four->getTitle();
five->getGenre();
    five->getTitle();
  six->getGenre();
    six->getTitle();
  seven->getGenre();
    seven->getTitle();

}