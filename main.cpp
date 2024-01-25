//Intro to AI
//Assignment #2
#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdlib.h> 
using namespace std;
class Board{
  private:
    int num1, num2; //Row & Columns
    char board[3][3] = {{'?', '?', '?'}, {'?', '?', '?'}, {'?', '?' , '?'}}; //Holds info 
    int string;

  public:
    void displayBoard() //Displays game board
      {
        cout<<"-------------"<<endl;
        cout<<"| "<< board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " | "<<endl;
        cout<<"-------------"<<endl;
        cout<<"| "<< board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " | "<<endl;
        cout<<"-------------"<<endl;
        cout<<"| "<< board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " | "<<endl;
        cout<<"-------------"<<endl;
      }

    void runGame() //Runs the game board
      {
        //Display game board
          displayBoard();

        //User input 
          cout<<""<<endl;
          cout<<"----------------------------------------"<<endl;
          cout<<"| X - User || O - Computer             |"<<endl; 
          cout<<"| Enter a spot [0][1] to place your X: |"<<endl;
          cout<<"----------------------------------------"<<endl;
          cin>>num1>>num2;

        //Displays updated board after X was placed
          if(board[num1][num2] == 'X') //Checks to see if space is already taken
            {
              cout<<""<<endl;
              cout<<"| INVALID SPACE! Space is already taken. Please try again. |"<<endl;
              cout<<""<<endl;
              displayBoard();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(board[num1][num2] == 'O')
          {
              cout<<""<<endl;
              cout<<"| INVALID SPACE! Space is already taken. Please try again. |"<<endl;
              cout<<""<<endl;
              displayBoard();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
          }
          else if(num1 == 0 && num2 == 0)
            {
              board[num1][num2] = 'X';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 0 && num2 == 0)
            {
              board[num1][num2] = 'O';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 0 && num2 == 1)
            {
              board[num1][num2] = 'X';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 0 && num2 == 1)
            {
              board[num1][num2] = 'O';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 0 && num2 == 2)
            {
              board[num1][num2] = 'X';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 0 && num2 == 2)
            {
              board[num1][num2] = 'O';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 1 && num2 == 0)
            {
              board[num1][num2] = 'X';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 1 && num2 == 0)
            {
              board[num1][num2] = 'O';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 1 && num2 == 1)
            {
              board[num1][num2] = 'X';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 1 && num2 == 1)
            {
              board[num1][num2] = 'O';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 1 && num2 == 2)
            {
              board[num1][num2] = 'X';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 1 && num2 == 2)
            {
              board[num1][num2] = 'O';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 2 && num2 == 0)
            {
              board[num1][num2] = 'X';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 2 && num2 == 0)
            {
              board[num1][num2] = 'O';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 2 && num2 == 1)
            {
              board[num1][num2] = 'X';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 2 && num2 == 1)
            {
              board[num1][num2] = 'O';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 2 && num2 == 2)
            {
              board[num1][num2] = 'X';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else if(num1 == 2 && num2 == 2)
            {
              board[num1][num2] = 'O';
              displayBoard();
              checkWinner();
              bestMove();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
          else
            {
              cout<<""<<endl;
              cout<<"| ERROR! Please enter a valid [row][column]! |"<<endl;
              cout<<""<<endl;
              displayBoard();
              cout<<""<<endl;
              cout<<"| Next Turn |"<<endl;
              cout<<""<<endl;
              runGame();
            }
      }

  int checkWinner() //Checks to see who is the winner
    {
      if(board[num1][0] == 'X' && board[num1][1] == 'X' && board[num1][2] == 'X') //Used for all rows starting left to right
        { 
          cout<<""<<endl;
          cout<<"| Congrats X has won the game! |"<<endl;
          exit(0);
        }
      else if(board[num1][0] == 'O' && board[num1][1] == 'O' && board[num1][2] == 'O')
        {
          cout<<""<<endl;
          cout<<"Sorry! O has won the game!"<<endl;
          exit(0);
        }
      else if(board[0][num2] == 'X' && board[1][num2] == 'X' && board[2][num2] == 'X') //Used for all rows going horizontal from column 1 to 3
         {
            cout<<""<<endl;
            cout<<"| Congrats X has won the game! |"<<endl;
            exit(0);
         }
      else if(board[0][num2] == 'O' && board[1][num2] == 'O' && board[2][num2] == 'O')
        {
          cout<<""<<endl;
          cout<<"Sorry! O has won the game!"<<endl;
          exit(0);
        }
      else if((board[0][0] == 'X' || board[0][2] == 'X') && board[1][1] == 'X' && (board[2][2] == 'X' || board[2][0] == 'X')) //Used for all diagonal moves
        {
          cout<<""<<endl;
          cout<<"| Congrats X has won the game! |"<<endl;
          exit(0);
        }
      else if((board[0][0] == 'O' || board[0][2] == 'O') && board[1][1] == 'O' && (board[2][2] == 'O' || board[2][0] == 'O'))
        {
          cout<<""<<endl;
          cout<<"Sorry! O has won the game!"<<endl;
          exit(0);
        }
      /*else
        {
          cout<<""<<endl;
          cout<<"| The Game has ended in a Tie. |"<<endl;
          cout<<""<<endl;
        }
      */
      return 0;
    }

  int miniMaxSearchAlg(char board[3][3], int dep, bool isMax) //Runs the AI that the user is going to be playing against (miniMax search algorithm)
    {
      //Variable that holdes the checkWinner() function
        int result = checkWinner();
        
      //1st if statment for terminal state then returns the board
        if(result != 0)
          {
            return result;
          }

      //2nd if statement that checks moves on the board 
    if(isMax)
          {
            int best = -INFINITY;
            for(int i = 0 ; i < 3; i++)
              {
                for(int j = 0; j < 3; j++)
                  {
                    if(board[i][j] == ' ')
                      {
                        board[i][j] = 'X';
                        best = max(best, miniMaxSearchAlg(board, 0, isMax)); //Max
                      }
                  }
              }
            return best;
          }
        else
          {
            int best = INFINITY;
            for(int i = 0; i < 3; i++)
              {
                for(int j = 0; j < 3; j++)
                  {
                    if(board[i][j] == 'O')
                      {
                        board[i][j] = 'O';
                        best = min(best, miniMaxSearchAlg(board, 0, isMax)); //Min
                      }
                  }
              }
            return best;
          }
    }

int bestMove() //Checks to see whose turn is next
    { 
      //Makes turn
        int bestScore = -INFINITY;
        //int bestMove[] = {0, 0};
        int row = 0;
        int col = 1;
        int bestMove[] = {row, col};
        for(int i = 0; i < 3; i++)
          {
            for(int j = 0 ; j < 3; j++)
              {
                //Checks to see if spot is open
                  if(board[i][j] == '?')
                    {
                      board[i][j] = 'O';
                      break;
                      /*
                      int score = miniMaxSearchAlg(board, 0, false); 
                      if(score > bestScore)
                        {
                          bestScore = score;
                          bestMove[0] = i;
                          bestMove[1] = j; //DID NOT WORK - GAVE ME A SEGMENTATION FAULT
                        }
                      */
                    }
              }
          }
      return board[bestMove[0]][bestMove[1]] = 'O'; //Outputs the O
  }
};

int main() {
  //Displays title
    cout<<"--------------------"<<endl;
    cout<<"| TIC - TAC - TOE  |"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"| X - Player #1 | O - Computer |"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<""<<endl;
  
  //Variables
    Board b; //Calls the class
  
  //Displays and Runs game 
    b.runGame();
}
