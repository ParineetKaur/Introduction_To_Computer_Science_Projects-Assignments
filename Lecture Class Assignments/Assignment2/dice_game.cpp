// Question: Create a simple dice game in C++ where a human player and a computer player take turns rolling a die and accumulating scores, with the first player to reach a certain score winning the game.

#include <iostream>
using namespace std;

int lastRoll;
int compLastroll;
int humanScore = 0;
int compScore = 0;

int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);
int diceRoll();

const int scoreMax = 100;

int main(){
  int computerTotalScore;
  int humanTotalScore;

  while (humanTotalScore < scoreMax && computerTotalScore < scoreMax){
    int humanScore = humanTurn(humanTotalScore);
    int compScore = computerTurn(computerTotalScore);
    }

  if (humanTotalScore >= scoreMax){
      cout << "Your total score is "<<humanTotalScore<<". You win!"<<endl;
    }
    if (computerTotalScore >= scoreMax){
      cout << "You lost. Your total score was "<<humanTotalScore<<" at the end of the game."<<endl;
    }
    return 0;
  }

  int humanTurn(int humanTotalScore){
    int computerTotalScore;
    char newTurn;
    do{
    cout << "Enter a number between 1 and 6 to roll the die: "<<endl;
    cin >> lastRoll;
  } while (lastRoll < 1 || lastRoll > 6);

    int dice = diceRoll();
    if (lastRoll == 1){
      cout << "You rolled a 1! Your turn has ended! It is the computer's turn now."<<endl;
      computerTurn(computerTotalScore);
    }

    if (lastRoll > 1){
      cout << "Do you want to roll again? If yes, enter 'r'. If no, enter 'h'.: "<<endl;
      cin >> newTurn;
      if (newTurn == 'r'){
        cout << "Please roll again. Enter a number between 1 and 6 to roll the die: "<<endl;
        cin >> lastRoll;
        int dice = diceRoll();
        cout << "You rolled "<<lastRoll<< " and the total score now is "<<humanScore<<endl;
      }
      else if (newTurn == 'h'){
        humanTotalScore += humanScore;
        cout<<"It is the computer's turn now."<<endl;
        computerTurn(computerTotalScore);
      }
    }
    return humanTotalScore;
  }

  int diceRoll(){
    humanScore = lastRoll % 6 + 1;
    return humanScore;
  }

  int computerTurn(int computerTotalScore){
    int humanTotalScore;
    while(compLastroll++){
      compScore = compLastroll % 6 + 1;
      if (compLastroll == 1){
        cout << "The computer's turn has ended." << endl;
      }
      else{
        compScore += compLastroll;
        cout << "The computer rolled a "<< compLastroll<< ". Computer's score is: " <<compScore<<endl;
      }

      if(compScore >= 20){
        computerTotalScore += compScore;
        cout << "After this turn, computer has gained " << compLastroll << " points." << endl;
        humanTurn(humanTotalScore);
      }
    }
    return computerTotalScore;
  }
