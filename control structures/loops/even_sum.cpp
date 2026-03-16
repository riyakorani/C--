#include<iostream>
using namespace std;

int main(){
    int n;
    int evenSum=0;
    cout<<"Enter n = ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2==0){
            evenSum += i;
        }
    }
    cout<<"Sum is = "<<evenSum;
    return 0;
}


// Even number:----
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter n = ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             cout<<i<<endl;
            
//         }
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     int i=1;
//     cout<<"enter n = ";
//     cin>>n;
//     while(i<=n){
//         if(i%2==0){
//             cout<<i<<endl;
            
//         }
//         i++;
//     }
//     return 0;
// }

// odd :----
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter n = ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%2 != 0){
//             cout<<i<<endl;
            
//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     int i=1;
//     cout<<"Enter n = ";
//     cin>>n;
//     while(i<=n){
//         if(i%2 != 0){
//             cout<<i<<endl;
//         }
//       i++;
//     }
    
//     return 0;
// }