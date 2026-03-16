 #include<iostream>
 using namespace std;
 
 int main(){
    int arr[] = {30,56,76,57,79,98,44,58,34,67};
    int largest = arr[0];

    for(int i=1; i<10;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
      cout<<"largest array = "<<largest;

    return 0;
    }

    