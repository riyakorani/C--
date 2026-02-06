// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     int a=0,b=1;

//     cout<<"Enter number of terms = ";
//     cin>>n;

//     cout<<a<< " " <<b<< " ";

//     for(int i=3;i<=n;i++){
//         int c=a+b;
//         cout<<c<< " ";
//         a=b;
//         b=c;
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    int a=0,b=1,i=3;

    cout<<"Enter number of terms = ";
    cin>>n;

    cout<<a<< " "<<b<< " ";
    
    while(i<=n){
        int c = a+b;
        cout<<c<< " ";
        a=b;
        b=c;
        i++;

    }
    
    return 0;
}