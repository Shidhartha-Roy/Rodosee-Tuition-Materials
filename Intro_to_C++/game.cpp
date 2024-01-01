#include <iostream>
#include <ctime>

using namespace std;

//Main function
int main(){

  srand(time(0)); //Allocates different time to the rand() function

  int guessNumber = rand() % 90 + 10; //Generates a two digit random number

  int guesses = 0;

  int userGuess;

  while(guesses<5){

   cout << "Enter Any Two Digit Number: " << endl;
   cin >> userGuess;

   if(userGuess > guessNumber){
      cout << "Hint: Your Guess is greater than the number." << endl;
   }
   else if(userGuess < guessNumber){
      cout << "Hint: Your Guess is smaller than the number." << endl;
   }
   else{
      cout << "Yayy!! You have guessed Correct";
      break;

   }


   guesses++; //Updation Statement
  }






}
