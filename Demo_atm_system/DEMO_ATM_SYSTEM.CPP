/* Welcome Devoloper to the DEMO_ATM_SYSTEM.cpp
    This is a simple demonstration of an ATM system in C++23
    Author: Arnab Pal
    Date created: 12th December 2025    
*/

// Including necessary libraries
#include<iostream>
// Using standard namespace
using namespace std;

// The main function
int main() {
    // Displaying a welcome message
    cout<<"Welcome to the DEMO_ATM_SYSTEM!"<<endl;
    cout<<"This is a simple demonstration of an ATM system in C++23."<<endl;
    cin.get(); // Pause for user input
    cin.clear(); // Clear the input buffer
    int Balance = 1000; // Initial balance
    int Choice; // Variable to store user choice
    int Amount; // Variable to store amount for transactions

    // Displaying menu options
    cout<<"------------------DEMO_ATM_SYSTEM------------------"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit Money"<<endl;
    cout<<"3. Withdraw Money"<<endl;
    cout<<"4. Exit"<<endl;

    // Prompting user for choice
    cout<<"Please enter your choice (1-4): ";
    cin>>Choice;
    switch(Choice) {
        case 1:
            // Displaying current balance
            cout<<"Your current balance is: $"<<Balance<<endl;
            break;
        case 2:
            // Prompting user for deposit amount
            cout<<"Enter amount to deposit: $";
            cin>>Amount;
            Balance += Amount; // Updating balance
            cout<<"Successfully deposited $"<<Amount<<". New balance is: $"<<Balance<<endl;
            break;
        case 3:
            // Prompting user for withdrawal amount
            cout<<"Enter amount to withdraw: $";
            cin>>Amount;
            if(Amount > Balance) {
                // Insufficient funds
                cout<<"Insufficient funds! Your current balance is: $"<<Balance<<endl;
            } else {
                Balance -= Amount; // Updating balance
                cout<<"Successfully withdrew $"<<Amount<<". New balance is: $"<<Balance<<endl;
            }
            break;
        default:
            // Invalid choice handling
            cout<<"Invalid choice! Please select a valid option (1-4)."<<endl;
    }
    cin.ignore();// Clear the input buffer

    cin.get(); // Pause before exiting
    cin.clear(); // Clear the input buffer
    cout<<"Thank you for using the DEMO_ATM_SYSTEM. Goodbye!"<<endl;   
    cout<<"Press Enter to exit... ";
    cin.get(); // Wait for user to press Enter
    // returning 0 to indicate successful execution
    return 0;
}