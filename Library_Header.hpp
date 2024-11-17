#ifndef library_class
#define library_class 
#include <iostream>  
#include <string>  

using namespace std;  
// Library is the base class  
class Library {  
public:  
    Library(string t, int y, string g) : title(t), year(y), genre(g) {}  
    virtual void displayInfo() const {  
    cout << "Title: " << title << endl;  
    cout << "Year: " << year << endl; 
    cout << "Genre: " << genre << endl;  
    }  

protected:  
    string title;  
    int year;  
    string genre;  

};  


// Books is derived from Library  
class Books : public Library {  
public:  
Books(string t, int y, string g, string a, int p, int ch) : Library(t, y, g), author(a), pages(p), chapters(ch) {}  

  

void displayInfo() const override {  
        Library::displayInfo();  
        cout << "Author: " << author << endl;  
        cout << "Pages: " << pages << endl;  
        cout << "Chapters: " << chapters << endl;  
    }  


private:  
    string author;  
    int pages;  
    int chapters;  
};  

  

// Movies is derived from Library  

class Movies : public Library {  
  public:  
    Movies(string t, int y, string g, string dr, string rt, string ac) : Library(t, y, g) {
      director = dr;
      runtime = rt;
      actors = ac;
    }

  
void displayInfo() const override {  
        Library::displayInfo();  
        cout << "Director: " << director << endl;  
        cout << "Runtime: " << runtime << endl;  
        cout << "Actors: " << actors << endl;  
    }  


private:  
    string director;  
    string runtime;  
    string actors;  
};  

   

// Plays is derived from Library  
class Plays : public Library {  
  public:  
  Plays(string t, int y, string g, string at, string pw) : Library(t, y, g) {
    acts = at;
    playwright = pw;
  }

void displayInfo() const override {  
        Library::displayInfo();  
        cout << "Acts: " << acts << endl;  
        cout << "Playwright: " << playwright << endl;  
    }  


private:  
    string acts;  
    string playwright;  
};  

#endif 
