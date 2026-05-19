#include<iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},
                    {'4','5','6'},
                    {'7','8','9'}};

void display(){

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int pos;
    char player = 'X';

    for(int turn=0;turn<9;turn++){

        display();

        cout<<"Player "<<player<<" choose position: ";
        cin>>pos;

        int row = (pos-1)/3;
        int col = (pos-1)%3;

        board[row][col] = player;

        if(player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    display();

    return 0;
}