#include <iostream> 
using namespace std;

void viewSection();
void bookSection();
void adminSection();
int main() {
    
    int option = 0;

    cout << "**************************\n* Welcome to Fly Malaya! *\n**************************" << endl;
    cout << "Please select option below:\n1. View available tickets\n2. Book Tickets" << endl;
    cout << "Option: "; cin >> option;

    if(option == 1) {

    } else if(option == 2) {

    } else if(option == 3) {

    } else {
        cout << "Invalid option, please try again..";
    }

}