#include<iostream>
using namespace std;

class Animal
{
    private:
          int legs,ears,eyes;
    
    public:
          int sound,speed;

    void setData(int a1,int b1,int c1);
    void getData(){
        
    cout<<"No of legs = "<<legs<<endl;
    cout<<"No of ears = "<<ears<<endl;
    cout<<"No of eyes = "<<eyes<<endl;
    cout<<"Sound = "<<sound<<endl;
    cout<<"Speed = "<<speed<<endl;

    }
};

void Animal :: setData(int a1,int b1,int c1){
    legs = a1;
    ears = b1;
    eyes = c1;

}

int main(){
    Animal Dog;

    Dog.sound  = 56;
    Dog.speed  = 79;

    Dog.setData(3,4,5);

    Dog.getData();


    return 0;
}