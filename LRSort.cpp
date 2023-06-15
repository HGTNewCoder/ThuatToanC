#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void arrangeArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        for (int k = 0; k < i; k++){
            if (arr[i] % 2 == 1){
                int temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
        }
    }
}

void sortArray(int arr[], int size){

}
int main(){
    int arr[] = {6, 5, 8, 12, 17, 8, 4, 3, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    arrangeArray(arr, n);
    sortArray(arr, n);

    printArray(arr, n);
    return 0;
}