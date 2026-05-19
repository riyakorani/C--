#include<iostream>
using namespace std;

class Train{
    int seats = 5;

public:

    void bookTicket(){

        if(seats > 0){
            seats--;
            cout<<"Ticket booked successfully"<<endl;
            cout<<"Seats left: "<<seats<<endl;
        }
        else{
            cout<<"No seats available"<<endl;
        }
    }

    void showSeats(){
        cout<<"Available seats: "<<seats<<endl;
    }
};

int main(){

    Train t;
    int choice;

    do{

        cout<<"\n1. Book Ticket"<<endl;
        cout<<"2. Check Seats"<<endl;
        cout<<"3. Exit"<<endl;

        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                t.bookTicket();
                break;

            case 2:
                t.showSeats();
                break;
        }

    }while(choice != 3);

    return 0;
}