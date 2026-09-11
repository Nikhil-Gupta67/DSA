#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void SwapAlter(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i], arr[i + 1]);
        }
        
    }
}

int main(){
    int even[8]={9,8,7,6,5,4,3,2};
    int odd[8] = {1, 3, 5, 7, 9, 11, 13, 15};
    SwapAlter(even, 8);
    printArray(even, 8);
}