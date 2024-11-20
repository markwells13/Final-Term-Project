#ifndef Library_Main
#define Library_Main 
#include <iostream>  
#include <string>  

using namespace std;  

// Base class `Library` is inherited by the derived classes.
class Library {  
public:  
    // Constructor to initialize common properties of library items
    Library(string t, int y, string g) : title(t), year(y), genre(g) {}  

    // Virtual function to display item details into the console/terminal.
    // This allows derived classes to override the function for assigning values
    virtual void displayInfo() const {  
        cout << "Title: " << title << endl;  
        cout << "Year: " << year << endl; 
        cout << "Genre: " << genre << endl;  
    }  

protected:  
    // Shared properties of all classes, hence these attributes are protected.
    string title;  // The title of the items.
    int year;      // The year the items were published.
    string genre;  // The genre or category of the item.

};  

// Derived class `Books` represents a specific type of library item: books
class Books : public Library {  
public:  
    // Constructor to initialize the Books class attributes. Attributes from Library class are inherited.
    Books(string t, int y, string g, string a, int p, int ch) : Library(t, y, g)) {
        author = a;
        pages = p;
        chapters = ch;
    }  

    // Override the `displayInfo` function to include the Book class attributes.This will let book information to be shown to the user.
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

// Derived class `Movies`, the Library class works as a base class.
class Movies : public Library {  
public:  
    // Constructor to initialize the Movie class attributes. 
    Movies(string t, int y, string g, string dr, string rt, string ac) : Library(t, y, g) {
        director = dr;
        runtime = rt;
        actors = ac;
    }

    // Override the `displayInfo` function to include information about the Movie item.
    void displayInfo() const override {  
        Library::displayInfo();  // Call the base class function to display the information on screen.
        cout << "Director: " << director << endl; 
        cout << "Runtime: " << runtime << endl;  
        cout << "Actors: " << actors << endl;     
    }  

private:  
    // The attributes for the Movies class.
    string director;  
    string runtime;
    string actors;
};  

// Derived class `Plays` is inherited from the Library class.
class Plays : public Library {  
public:  
    // Constructor to initialize a play, inheriting the Library class attributes
    Plays(string t, int y, string g, string at, string pw) : Library(t, y, g) {
        acts = at;
        playwright = pw;
    }

    // Override the `displayInfo` function to include play-specific details
    void displayInfo() const override {  
        Library::displayInfo(); 
        cout << "Acts: " << acts << endl; 
        cout << "Playwright: " << playwright << endl; 
    }  

private:  
    string acts;        // The number of acts in the play
    string playwright;  // The playwright of the play
};  

#endif
