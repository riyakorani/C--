#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class ChatApp{

public:

    void sendMessage(){
        ofstream file;
        string message;

        file.open("chat.txt", ios::app);

        cout<<"Enter message: ";
        cin.ignore();
        getline(cin, message);

        file<<message<<endl;

        file.close();

        cout<<"Message sent successfully"<<endl;
    }

    void viewMessages(){
        ifstream file;
        string message;

        file.open("chat.txt");

        cout<<"\n--- Chat History ---\n";

        while(getline(file, message)){
            cout<<message<<endl;
        }

        file.close();
    }
};

int main(){

    ChatApp chat;
    int choice;

    do{

        cout<<"\n--- CHAT APPLICATION ---"<<endl;
        cout<<"1. Send Message"<<endl;
        cout<<"2. View Messages"<<endl;
        cout<<"3. Exit"<<endl;

        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                chat.sendMessage();
                break;

            case 2:
                chat.viewMessages();
                break;

        }

    }while(choice != 3);

    return 0;
}