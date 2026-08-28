#include<iostream>
using namespace std;
int main(){
    int arr[] = {6, 5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The original array" << endl;
    for (int i = 0; i < size;i++){
        cout << arr[i] << "  ";

    }
    for (int pass = 1; pass < size;pass++){
        for (int i = 0; i < size - pass;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i + 1]);
            }
        }
    }
    cout << endl;
    cout << "The sorted array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
        return 0;
}