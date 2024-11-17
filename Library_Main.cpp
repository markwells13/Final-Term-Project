#include "library_class.h"

int main() {  
    char repeat;  
    do {  
        int choice;  
        cout << "Menu: " << endl;  
        cout << "1) Books" << endl;  
        cout << "2) Movies" << endl;  
        cout << "3) Plays" << endl;  
        cout << "Enter your choice (1, 2, or 3): ";  
        cin >> choice;  
        cin.ignore();  

        if (choice == 1) {  
            int bookChoice;  
            cout << "Select a book: " << endl;  
            cout << "1) Harry Potter and the Sorcerer's Stone" << endl;  
            cout << "2) To Kill a Mockingbird" << endl;  
            cout << "3) Fahrenheit 451" << endl;  
            cout << "Enter your choice (1, 2, or 3): ";  
            cin >> bookChoice;  
            cin.ignore();  

            switch (bookChoice) {  
                case 1: {  
                    Books book("Harry Potter and the Sorcerer's Stone", 1997, "Fantasy", "J.K. Rowling", 309, 17);  
                    book.displayInfo();  
                    break;  
                }  

                case 2: {  
                    Books book("To Kill a Mockingbird", 1960, "Fiction", "Harper Lee", 281, 31);  
                    book.displayInfo();  
                    break;  
                }  

                case 3: {  
                    Books book("Fahrenheit 451", 1953, "Dystopian", "Ray Bradbury", 256, 3);  
                    book.displayInfo();  
                    break;  
                }  

                default:  
                    cout << "Invalid choice! Try again!" << endl;  
                    break;  
            }  

        } else if (choice == 2) {  
            int movieChoice;  
            cout << "Select a movie: " << endl;  
            cout << "1) Inside Out 2" << endl;  
            cout << "2) Deadpool & Wolverine" << endl;  
            cout << "3) Twisters" << endl;  
            cout << "Enter your choice (1, 2, or 3): ";  
            cin >> movieChoice;  
            cin.ignore();  

            switch (movieChoice) {  
                case 1: {  
                    Movies movie("Inside Out 2", 2024, "Family/Comedy", "Kelsey Mann", "1h 36m", "Maya Hawke, Amy Poehler, Phyllis Smith");  
                    movie.displayInfo();  
                    break;  
                }  

                case 2: {  
                    Movies movie("Deadpool & Wolverine", 2024, "Action/Comedy", "Shawn Levy", "2h 07m", "Ryan Reynolds, Hugh Jackman, Chris Evans");  
                    movie.displayInfo();  
                    break;  
                }  

                case 3: {  
                    Movies movie("Twisters", 2024, "Action/Disaster", "Steven Spielberg", "2h 12m", "Helen Hunt, Bill Paxton, Brandon Perea");  
                    movie.displayInfo();  
                    break;  
                }  

                default:  
                    cout << "Invalid choice! Try again!" << endl;  
                    break;  
            }  

        } else if (choice == 3) {  
            int playChoice;  
            cout << "Select a play: " << endl;  
            cout << "1) Wicked" << endl;  
            cout << "2) A Raisin in the Sun" << endl;  
            cout << "3) Hamlet" << endl;  
            cout << "Enter your choice (1, 2, or 3): ";  
            cin >> playChoice;  
            cin.ignore();  

            switch (playChoice) {  
                case 1: {  
                    Plays play("Wicked", 2003, "Musical", "2", "Winnie Holzman");  
                    play.displayInfo();  
                    break;  
                }  

                case 2: {  
                    Plays play("A Raisin in the Sun", 1959, "Drama", "3", "Lorraine Hansberry");  
                    play.displayInfo();  
                    break;  
                }  

                case 3: {  
                    Plays play("Hamlet", 1600, "Tragedy", "5", "William Shakespeare");  
                    play.displayInfo();  
                    break;  
                }  

                default:  
                    cout << "Invalid choice! Try again!" << endl;  
                    break;  
            }  

        } else {  
            cout << "Invalid category choice! Please try again!" << endl;  
        }  
        cout << "Would you like to choose another category? (y/n)"; 
        cin >> repeat;  
        cin.ignore();  
    } while (repeat == 'y' || repeat == 'Y');  

    cout << "Thank you for using the library system!" << endl;  
    return 0;  
}
