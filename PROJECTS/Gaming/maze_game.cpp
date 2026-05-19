#include<iostream>
using namespace std;

int main(){

    int x = 0, y = 0;
    char move;

    cout<<"Reach position (2,2) to win\n";

    while(x != 2 || y != 2){

        cout<<"Current position: ("<<x<<","<<y<<")\n";
        cout<<"Move (W/A/S/D): ";
        cin>>move;

        if(move=='W') y++;
        if(move=='S') y--;
        if(move=='D') x++;
        if(move=='A') x--;
    }

    cout<<"You escaped the maze!\n";

    return 0;
}