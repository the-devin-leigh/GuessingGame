/*Author: Devin Leigh
  Date: 9/23/2019 (added header comment today)
  Project: Guessing Game (randomly chooses number from 1-100, matches with user guesses, counts guesses)
  Connor told me to do this - I don't see any requirements for a header
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(void){
  srand(time(NULL));
  //game run boolean, switches on and off with end decision
  bool gameRun = true;
  cout << "Welcome to Guessing Game" << endl;
  cout << "All guesses must be a number between 1 and 100." << endl;
  cout << endl;
  
  while(gameRun == true){
    //mathbits.com (random integer generation)
    //variable declaration (guess counter, decision boolean)
    int random = 1 + rand() % 100;
    int guessNum = 0;
    int input = 0;
    char decide;
    
    // cout << random << endl;

    //loop for processing input guesses
    for(guessNum = 0; input != random; guessNum++){
      cout << "Guess a number: ";
      cin >> input;
      if(input > random){
	cout << "Guess lower" << endl;
      }else if(input < random){
	cout << "Guess higher" << endl;
      }  
    }

    //print outs of guess number and win condition
    cout << "You guessed the right number!" << endl;
    cout << "Number of guesses: " << guessNum << endl;
    cout << "Would you like to play again? (y/n)" << endl;
    cin >> decide;

    //game run if statement, loops back to top of while loop
    if(decide == 'y'){
      gameRun = true;
    }else if(decide == 'n'){
      gameRun = false;
    }else{
      cout << "Please type y or n." << endl;
      cin >> decide;
    }  
  }  
}
