// 1️⃣ Count Digits
#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;

    cout<<"Enter number = ";
    cin>>n;

    while(n > 0){
        n = n / 10;
        count++;
    }

    cout<<"Digits = "<<count;

    return 0;
}
// 2️⃣ Sum of Digits
#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;

    cout<<"Enter number = ";
    cin>>n;

    while(n > 0){
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    cout<<"Sum of digits = "<<sum;

    return 0;
}
// 3️⃣ Reverse a Number
#include<iostream>
using namespace std;

int main(){
    int n;
    int rev = 0;

    cout<<"Enter number = ";
    cin>>n;

    while(n > 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    cout<<"Reverse = "<<rev;

    return 0;
}
// 4️⃣ Palindrome Number
#include<iostream>
using namespace std;

int main(){
    int n;
    int rev = 0;

    cout<<"Enter number = ";
    cin>>n;

    int original = n;

    while(n > 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if(rev == original){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }

    return 0;
}
// 5️⃣ Largest Digit
#include<iostream>
using namespace std;

int main(){
    int n;
    int max = 0;

    cout<<"Enter number = ";
    cin>>n;

    while(n > 0){
        int digit = n % 10;

        if(digit > max){
            max = digit;
        }

        n = n / 10;
    }

    cout<<"Largest digit = "<<max;

    return 0;
}
// 6️⃣ Count Even Digits
#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;

    cout<<"Enter number = ";
    cin>>n;

    while(n > 0){
        int digit = n % 10;

        if(digit % 2 == 0){
            count++;
        }

        n = n / 10;
    }

    cout<<"Even digits = "<<count;

    return 0;
}



// 1️⃣ Smallest Digit in a Number
#include<iostream>
using namespace std;

int main(){
    int n;
    int min = 9;

    cout<<"Enter number = ";
    cin>>n;

    while(n > 0){
        int digit = n % 10;

        if(digit < min){
            min = digit;
        }

        n = n / 10;
    }

    cout<<"Smallest digit = "<<min;

    return 0;
}
// 2️⃣ Count Odd Digits
#include<iostream>
using namespace std;

int main(){
    int n;
    int count = 0;

    cout<<"Enter number = ";
    cin>>n;

    while(n > 0){
        int digit = n % 10;

        if(digit % 2 != 0){
            count++;
        }

        n = n / 10;
    }

    cout<<"Odd digits = "<<count;

    return 0;
}
// 3️⃣ Check if Number Contains Digit 7
#include<iostream>
using namespace std;

int main(){
    int n;
    bool found = false;

    cout<<"Enter number = ";
    cin>>n;

    while(n > 0){
        int digit = n % 10;

        if(digit == 7){
            found = true;
        }

        n = n / 10;
    }

    if(found){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}
// 4️⃣ Sum of Even Digits
#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;

    cout<<"Enter number = ";
    cin>>n;

    while(n > 0){
        int digit = n % 10;

        if(digit % 2 == 0){
            sum = sum + digit;
        }

        n = n / 10;
    }

    cout<<"Sum of even digits = "<<sum;

    return 0;

}