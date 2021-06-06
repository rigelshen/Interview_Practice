#include <iostream>

using namespace std;


void reverseArray(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start + 1, end - 1);
}

int main(){
    int main_arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    //altering array
    cout << "Altered Array:" << endl;
    reverseArray(main_arr, 0, 9);

    //printing altered array
    for (int i = 0; i < 10; i++){
        cout << main_arr[i] << endl;
    }
}