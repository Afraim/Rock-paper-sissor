#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int lives = 10;
int score = 0;

int game_over(){
    cout<<" Your Score is = "<< score<<endl;
    cout<<"!!!! Game Over !!!!"<<endl;
    system("pause");
    exit(0);
}
int game(int computer, int player){

    if(player==computer){
        cout<< "Draw!!!!"<<endl;
        }
    else{
        if(player==1 && computer==3){

            cout<< "You win"<<endl;
            score+=10;
            }
        else{
            if(player==2 && computer==1){
            cout<< "You win"<<endl;
            score+=10;
                }
            else{
            if(player==3 && computer==2){
            cout<< "You win"<<endl;
            score+=10;
                }
                else{

    if(player==0){
        game_over();
    }
    else{

        cout<< "Computer wins"<<endl;
        lives--;
    }        }
            }
        }
    }}
int main()
{
    int computer,player;
    srand(time(NULL));
    while(1){
            if(lives==0){
                game_over();
            }
    cout<< "1) Rock\t\t\t\t\t\t"<< lives <<"\n2)Paper\n3)Scissors\n\t : ";
    cin>>player;
    computer=(rand()%3)+1;
    game(computer,player);
    system("pause");
    system("cls");
    }
    return 0;
}
