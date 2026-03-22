#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int>::iterator it;
    for(it = lst.begin(); it != lst.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){

    list<int> list2(3);  // list with 3 elements

    list<int>::iterator it = list2.begin();

    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;

    display(list2);

    return 0;
}