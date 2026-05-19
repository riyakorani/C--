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
    cout<<"Enter number = ";
    cin>>n;

    n = abs(n);   

    int max = -1; 
    if(n == 0){
        max = 0;
    }

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
















#include<iostream>
using namespace std;

// Helper function
int getAbs(int n){
    return (n < 0) ? -n : n;
}

// 1️⃣ Count digits
int countDigits(int n){
    n = getAbs(n);
    if(n == 0) return 1;

    int count = 0;
    while(n > 0){
        count++;
        n /= 10;
    }
    return count;
}

// 2️⃣ Sum of digits
int sumDigits(int n){
    n = getAbs(n);
    int sum = 0;

    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// 3️⃣ Reverse number
int reverseNumber(int n){
    int temp = getAbs(n);
    int rev = 0;

    while(temp > 0){
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    return (n < 0) ? -rev : rev;
}

// 4️⃣ Palindrome
bool isPalindrome(int n){
    return n == reverseNumber(n);
}

// 5️⃣ Largest digit
int largestDigit(int n){
    n = getAbs(n);
    if(n == 0) return 0;

    int maxDigit = 0;

    while(n > 0){
        int digit = n % 10;
        if(digit > maxDigit){
            maxDigit = digit;
        }
        n /= 10;
    }
    return maxDigit;
}

// 6️⃣ Smallest digit
int smallestDigit(int n){
    n = getAbs(n);
    if(n == 0) return 0;

    int minDigit = 9;

    while(n > 0){
        int digit = n % 10;
        if(digit < minDigit){
            minDigit = digit;
        }
        n /= 10;
    }
    return minDigit;
}

// 7️⃣ Count even digits
int countEven(int n){
    n = getAbs(n);
    int count = 0;

    while(n > 0){
        if((n % 10) % 2 == 0){
            count++;
        }
        n /= 10;
    }
    return count;
}

// 8️⃣ Count odd digits
int countOdd(int n){
    n = getAbs(n);
    int count = 0;

    while(n > 0){
        if((n % 10) % 2 != 0){
            count++;
        }
        n /= 10;
    }
    return count;
}

// 9️⃣ Contains digit 7
bool contains7(int n){
    n = getAbs(n);

    while(n > 0){
        if(n % 10 == 7){
            return true;
        }
        n /= 10;
    }
    return false;
}

// 🔟 Sum of even digits
int sumEvenDigits(int n){
    n = getAbs(n);
    int sum = 0;

    while(n > 0){
        int digit = n % 10;
        if(digit % 2 == 0){
            sum += digit;
        }
        n /= 10;
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Digits = " << countDigits(n) << endl;
    cout << "Sum = " << sumDigits(n) << endl;
    cout << "Reverse = " << reverseNumber(n) << endl;
    cout << "Palindrome = " << (isPalindrome(n) ? "Yes" : "No") << endl;
    cout << "Largest digit = " << largestDigit(n) << endl;
    cout << "Smallest digit = " << smallestDigit(n) << endl;
    cout << "Even digits = " << countEven(n) << endl;
    cout << "Odd digits = " << countOdd(n) << endl;
    cout << "Contains 7 = " << (contains7(n) ? "Yes" : "No") << endl;
    cout << "Sum of even digits = " << sumEvenDigits(n) << endl;

    return 0;
}