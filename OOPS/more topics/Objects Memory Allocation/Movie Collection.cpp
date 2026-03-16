#include<iostream>
using namespace std;

class Movie{

    string name[50];
    int rating[50];
    int counter;

public:
    void initMovie(){ counter = 0; }
    void setData(void);
    void displayData(void);
};

void Movie::setData(){

    cout<<"Enter movie name "<<counter+1<<": ";
    cin>>name[counter];

    cout<<"Enter rating: ";
    cin>>rating[counter];

    counter++;
}

void Movie::displayData(){

    for(int i=0;i<counter;i++){
        cout<<"Movie: "<<name[i]
            <<"  Rating: "<<rating[i]<<endl;
    }
}

int main(){

    Movie M;

    M.initMovie();

    M.setData();
    M.setData();
    M.setData();

    M.displayData();

}