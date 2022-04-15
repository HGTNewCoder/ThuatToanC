#include <iostream>
using namespace std;

void sort(int n, int arr[]){
    int temp = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 1; i < n; i++){
        cout<<arr[i];
    }
}
int main(){
    int n = 10;
    int array[n] = {1, 3, 5, 7, 9, 2, 4, 6, 8};

    sort(n, array);
    return 0;
}