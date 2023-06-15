#include<iostream>
#include<math.h>
using namespace std;

int PrimeNumber[100];


bool FirstWay(int n){ // Programiz.com
    // 0 and 1 are not Prime numbers
    if (n == 0 || n == 1){
        return false;
    }

    // Check Prime Numbers
    for (int i = 2; i <= n/2; i++){
        if (n % i == 0){
            return false;
            break;
        }
    }
    return true;
}

bool SecondWay(int n){ // My Knowledge #1
    // 0 and 1 are not Prime Numbers
    if (n == 0 || n == 1){
        return false;
    }

    // Check the Prime Numbers
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

//Output
//     if (is_prime == true){
//         cout << "N is a prime number"<<endl;
//     }
//     else{
//         cout << "N is not a prime number"<<endl;
//     }

int main(){
    int n = 0;
    cout << "Input: ";
    cin >> n;
    

    for (int i = 0; i < n; i++){
        if (SecondWay(i) == true){
            PrimeNumber[i] = i;
        }
    }

    for (int i = 0; i < n; i++){
        cout << PrimeNumber[i] << endl;
    }
    //FirstWay(n);
    return 0;
}