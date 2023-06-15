#include <iostream>
#include <cmath>
using namespace std;


int lcm(int num1, int num2){
    int k = num1 * num2;
    for (int i = 1; i < k; i++){
        if (i % num1 == 0 && i % num2 == 0){
            return i;
            break;
        }
    }
}

int main(){
    int a, b, c = 0;
    int x = 1;
    cin >> a >> b >> c;

    while(x^2 % lcm(lcm(a,b),c) == 0){
        x++;
    }
    // lcm(lcm(a, b), c);
    cout << x;
    return 0;
}