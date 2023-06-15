#include <iostream>
using namespace std;

int main(){
    float sum = 0.0;
    int n = 0;
    cout << "Nhap N: ";
    cin >> n;

    for (int i = 0; i <= n; i+=2){
        sum+= 1/float(i);
        cout << n << " thi sum la: " << sum << endl;
    }
    return 0;
}
