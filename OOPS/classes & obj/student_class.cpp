#include<iostream>
#include<cstring>
using namespace std;

class Student
{
private:
    int rollNO;

public:
    char name[50];
    int age;

    void setData(int r);
    void getData();
};

void Student :: setData(int r){
    rollNO = r;
}

void Student :: getData(){
    cout<<"Name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;
    cout<<"Roll No = "<<rollNO<<endl;
}

int main(){
    Student riya;

    strcpy(riya.name,"Riya");
    riya.age = 19;

    riya.setData(263);
    riya.getData();

    return 0;
}
