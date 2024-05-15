#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registerUser() {
    string username, password;
    ofstream outFile("users.txt", ios::app); // Append mode

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    outFile << username << " " << password << endl;
    outFile.close();

    cout << "User registered successfully!" << endl;
}

bool authenticateUser() {
    string username, password;
    string fileUsername, filePassword;
    bool isAuthenticated = false;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    ifstream inFile("users.txt");

    while (inFile >> fileUsername >> filePassword) {
        if (fileUsername == username && filePassword == password) {
            isAuthenticated = true;
            break;
        }
    }

    inFile.close();
    return isAuthenticated;
}


int main() {
    int choice;
    cout << "1. Register\n2. Login\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
        registerUser();
    } else if (choice == 2) {
        if (authenticateUser()) {
            cout << "Authentication successful!" << endl;
        } else {
            cout << "Authentication failed!" << endl;
        }
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
