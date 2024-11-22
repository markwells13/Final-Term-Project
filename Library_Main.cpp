#include "Library_Header.hpp"
//The line above includes the header file where the Books, Movies, and Plays classes are.

int main() {  
    char repeat; //Variable to store user input for whether to repeat the menu.
    do {  
        int choice; //Variable to store the category choice from the user, the choice variable is an integer.
        cout << "Menu: " << endl;  
        cout << "1) Books" << endl;  
        cout << "2) Movies" << endl;  
        cout << "3) Plays" << endl;  
        cout << "Enter your choice (1, 2, or 3): ";  
        cin >> choice; // Receives the user's input for the category.
        cin.ignore();  

        if (choice == 1) { // Check if the user selected the "Books" category.
            int bookChoice; // Variable to store the book choice.
            cout << "Select a book: " << endl;  
            cout << "1) Harry Potter and the Sorcerer's Stone" << endl;  
            cout << "2) To Kill a Mockingbird" << endl;  
            cout << "3) Fahrenheit 451" << endl;  
            cout << "Enter your choice (1, 2, or 3): ";  
            cin >> bookChoice; //For the user's book choice.
            cin.ignore();  

            switch (bookChoice) {  
                case 1: {  
                    //Creates a Books object and displays the information.
                    Books book("Harry Potter and the Sorcerer's Stone", 1997, "Fantasy", "J.K. Rowling", 309, 17);  
                    book.displayInfo();  
                    break;  
                }  

                case 2: {  
                    //Creates a Books object and displays the information.
                    Books book("To Kill a Mockingbird", 1960, "Fiction", "Harper Lee", 281, 31);  
                    book.displayInfo();  
                    break;  
                }  

                case 3: {  
                    //Creates a Books object and displays the information.
                    Books book("Fahrenheit 451", 1953, "Dystopian", "Ray Bradbury", 256, 3);  
                    book.displayInfo();  
                    break;  
                }  

                default:  
                    cout << "Invalid choice! Try again!" << endl;  
                    break;  
            }  

        } else if (choice == 2) {  // Check if the user selected the "Movies" category.
            int movieChoice;  
            cout << "Select a movie: " << endl;  
            cout << "1) Inside Out 2" << endl;  
            cout << "2) Deadpool & Wolverine" << endl;  
            cout << "3) Twisters" << endl;  
            cout << "Enter your choice (1, 2, or 3): ";  
            cin >> movieChoice; // Get the user's movie choice.
            cin.ignore();  

            switch (movieChoice) {  
                case 1: {  
                    //Object for the Movies menu and displays the information to the user.
                    Movies movie("Inside Out 2", 2024, "Family/Comedy", "Kelsey Mann", "1h 36m", "Maya Hawke, Amy Poehler, Phyllis Smith");  
                    movie.displayInfo();  
                    break;  
                }  

                case 2: {  
                    //Object for the Movies menu and displays the information to the user.
                    Movies movie("Deadpool & Wolverine", 2024, "Action/Comedy", "Shawn Levy", "2h 07m", "Ryan Reynolds, Hugh Jackman, Chris Evans");  
                    movie.displayInfo();  
                    break;  
                }  

                case 3: {
                    //Object for the Movies menu and displays the information to the user.
                    Movies movie("Twisters", 2024, "Action/Disaster", "Steven Spielberg", "2h 12m", "Helen Hunt, Bill Paxton, Brandon Perea");  
                    movie.displayInfo();  
                    break;  
                }  

                default:  
                    cout << "Invalid choice! Try again!" << endl;  
                    break;  
            }  

        } else if (choice == 3) {  //If the user chooses the number "3", the Play menu opens up.
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
                    //Creates a Plays object then displays the information to the user.
                    Plays play("Wicked", 2003, "Musical", "2", "Winnie Holzman");  
                    play.displayInfo();  
                    break;  
                }  

                case 2: {  
                    //Creates a Plays object then displays the information to the user.
                    Plays play("A Raisin in the Sun", 1959, "Drama", "3", "Lorraine Hansberry");  
                    play.displayInfo();  
                    break;  
                }  

                case 3: {
                    //Creates a Plays object then displays the information to the user.
                    Plays play("Hamlet", 1600, "Tragedy", "5", "William Shakespeare");  
                    play.displayInfo();  
                    break;  
                }  

                default:  
                    cout << "Invalid choice! Try again!" << endl;  
                    break;  
            }  

        } else {  //Message to show if invalid choice is chosen by the user.
            cout << "Invalid category choice! Please try again!" << endl;  
        }  
        cout << "Would you like to choose another category? (y/n)"; //Ask the user if they want to repeat the code.
        cin >> repeat;  
        cin.ignore();  
    } while (repeat == 'y' || repeat == 'Y');  
    //The line above checks to see if the user inputs "Y" or "y" to repeat the code.
    cout << "Thank you for using the library system! Have a nice day!" << endl; // Shows the goodbye message.
    return 0;  
}
