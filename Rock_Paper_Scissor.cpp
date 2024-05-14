#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    start:
    //Random Number Generator
    srand(time(0)); 
    int computer = rand() % 3; 
    
    int userInput;
    string states[] = {"ROCK","PAPER","SCISSOR"};
    
    
    cout<<" \n\n===== ROCK PAPER SCISSOR =====\n\n";
    cout<<"Press\n1. for ROCK\n2. for PAPER\n3. for Scissor\n\n";
    while(true){
        cin>>userInput;
        if(userInput >= 1 && userInput <= 3){
            break;
        }
        else{
            cout<<"Invalid input\n";
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    userInput--;
    cout<<"You ==> "<<states[userInput]<<" || "<<states[computer]<<" <== Computer \n";
    
    if(userInput==computer){
        cout<<"Its a tie\n";
    }
    else if(userInput == 0 && computer == 2 ||
            userInput == 1 && computer == 0 ||
            userInput == 2 && computer == 1){
                cout<<"You WIN\n";
            }
    else{
        cout<<"Computer WINS\n";
    }
    
    cout<<"\nDo you want to play again? (Y/N)\n";
    char oncemore;
    cin>>oncemore;
    if(oncemore == 'y' || oncemore == 'Y'){
        goto start;
    }
    
    
    
    return 0;
}
