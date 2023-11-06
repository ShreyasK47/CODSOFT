#include <iostream>
using namespace std;

char box[10] = {'0','1','2','3','4','5','6','7','8','9'};

void DrawBoard()
{
    system("cls");
    cout << "\nTIC-TAC-TOE GAME\n" << endl;
    cout << "Player 1-X & Player 2-O\n" << endl;

    cout << "    |     |    " << endl;
    cout << " " << box[1] << "  |  " << box[2] << "  |  "<< box[3] << endl;

    cout << "____|_____|____" << endl;
    cout << "    |     |    " << endl;

    cout << " " << box[4] << "  |  " << box[5] << "  |  " << box[6] << endl; 

    cout << "____|_____|____" << endl;
    cout << "    |     |    " << endl;

    cout << " " << box[7] << "  |  " << box[8] << "  |  " << box[9] << endl; 

    cout << "    |     |    " << endl;


}

int check()
{
    if (box[1] == box[2] && box[2] == box[3])
    {
      return 1;
    }
    else if (box[4] == box[5] && box[5] == box[6])
    {
      return 1;
    }
    else if (box[7] == box[8] && box[8] == box[9])
    {
      return 1;
    }
    else if (box[1] == box[4] && box[4] == box[7])
    {
      return 1;
    }
    else if (box[2] == box[5] && box[5] == box[8])
    {
      return 1;
    }
    else if (box[3] == box[6] && box[6] == box[9])
    {
      return 1;
    }
    else if (box[1] == box[5] && box[5] == box[9])
    {
      return 1;
    }
    else if (box[3] == box[5] && box[5] == box[7])
    {
      return 1;
    }
    else if(box[1] !='1' && box[2] !='2' && box[3] !='3' 
    && box[4] !='4' && box[5] !='5' && box[6] !='6' 
    && box[7] !='7' && box[8] !='8' && box[9] !='9')
    {
        return 0;
    }
    else return -1;

}



int main()
{
  int player = 1, i, choice;

  char symbol;

  do
  {
     DrawBoard();
     player = (player % 2) ? 1:2;

     cout << "Player " << player << ", enter the number(1-9): ";
     cin >> choice;

     symbol = (player == 1) ? 'X' : 'O';

     if(choice == 1 && box[1] == '1')
     {
      box[1] = symbol;
     } 
     else if(choice == 2 && box[2] == '2')
     {
      box[2] = symbol;
     } 
     else if(choice == 3 && box[3] == '3')
     {
      box[3] = symbol;
     } 
     else if(choice == 4 && box[4] == '4')
     {
      box[4] = symbol;
     } 
     else if(choice == 5 && box[5] == '5')
     {
      box[5] = symbol;
     } 
     else if(choice == 6 && box[6] == '6')
     {
      box[6] = symbol;
     } 
     else if(choice == 7 && box[7] == '7')
     {
      box[7] = symbol;
     } 
     else if(choice == 8 && box[8] == '8')
     {
      box[8] = symbol;
     } 
     else if(choice == 9 && box[9] == '9')
     {
      box[9] = symbol;
     } 
     else
     {
       cout << "INVALID MOVE!";

       player--;
       cin.ignore();
       cin.get();
     }
     
     i = check();
     player++;
     
  } while (i == -1);

  DrawBoard();
  if(i == 1)
  {
     cout << "\aCONGRATULATION! PLAYER  " << --player << " WINS!";
  }
  else
  {
    cout << "\aDRAW!";
  }
  cin.ignore();
  cin.get();
  return 0;

}

