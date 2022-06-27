#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool check = false;
    int value, temp;
    cout << "Enter Element You Want To Find: ";
    cin >> value;

    for (int i = 0; i < size; i++){
        if (arr[i] == value){
            check = true;
            temp = i;
        }
    }
    if (check == true){
        cout << "Element is in Index: " << arr[temp] << endl;
    }
    else{cout << "Element not in array" << endl;}

    return 0;
}