#include <iostream>
#include <cmath>
using namespace std;

int main()

// Function 1
void F1_CountingUp()
{
    int counter = 0;

    cout << "F1_CountingUp" << endl;
    cout << "WHILE LOOP" << endl;
    while(counter < 10){
            cout << counter << "\t";
            counter++;
    }
    cout << "FOR LOOP" << endl;
    for(int counter = 0; couner < 10; counter++){
        cout << counter << "\t";
        }
}

// Function 2
void F2_MultiplyUp()
{
    int counter = 1;

    cout << "F2_MultiplyUp" << endl;
    cout << "WHILE LOOP" << endl;
    while(counter<200){
        cout << counter << "t\";
        counter* = 2;
    }
    cout << "FOR LOOP" << endl;
    for(int counter = 1; counter < 200; counter* =2){
        cout << counter << "t\";
    }


}

// Function 3
void F3_NumberGuesser()
{
    int secretNumber = 7;
    int playerGuess

    cout << "F3_NumberGuesser" << endl;
    do{
        cout << "Enter your guess:";
        cin >> playerGuess;
        if(playerGuess < secrerNumber){
                cout << "too low!" << endl;
            }
        else(playerGuess > secretNumber){
            cout << "too high!" << endl;
        }
    }
    while(playerGuess != secretNumber);
    cout << "You win!" << endl;

}

// Function 4
void F4_InputValidator()
{
    int choice = user's input
    cout << "F4_InputValidator" << endl;
    cout << "Please enter a number between 0 and 5:";
    cin >> user's input;
    while(choice<0 || choice>5){
        cout << "invalid entry. Try again." << endl;
        cin >> user's input;
    }
    cout << "Thank you." << endl;
}

// Function 5
void F5_GettingARaise()
{
     float startingWage;
     float percentRaisePerYear;
     float adjustedWage;
     int yearsWorked;
    cout << "F5_GettingARaise" << endl;
    adjustedWage = startingWage;
    for(int yearsWorked=1; years<yearsWorked; yearsWorked++ ){
        cout << "Emter your startingWage:" << endl;
        cin >> startingWage;
        cout << "Enter the percent raise you get per year:" << endl;
        cin >> percentRaisePerYear;
        cout << "How many years have you worked here?" << endl;
        cin >> yearworked;
        adjustedWage = (adjustedWage *percentRaisePerYear) + adjustedWage

    }
}

// Function 6
void F6_Summation()
{
    float sum = 0;
    cout << "F6_Summation" << endl;

    for( float sum=0; number<=10; number++){
            sum = sum + number
        cout << "Calculate a sum...";
        cout << "sum:" ;
        cin >> sum;
        cout << ..........<< endl;
        cout << (program excited with code: 0) << endl;
    }
}

/* Don't modify the code below! ****************************************/

int main()
{
    F1_CountingUp();
    cout << endl << endl;

    F2_MultiplyUp();
    cout << endl << endl;

    F3_NumberGuesser();
    cout << endl << endl;

    F4_InputValidator();
    cout << endl << endl;

    F5_GettingARaise();
    cout << endl << endl;

    F6_Summation();
    cout << endl << endl;


    cout << endl << endl;
    while ( true );
    return 0;
}
    cout << "Hello world!" << endl;
    return 0;
}
