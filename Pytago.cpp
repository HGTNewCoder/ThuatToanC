#include <iostream>
using namespace std;

int answer[3];

void enterArrayValue(int valueA, int valueB, int valueC){
	answer[0] = valueA;
	answer[1] = valueB;
	answer[2] = valueC;
	
	for (int i = 0; i < 3; i++){
		cout<<answer[i];
	}
}
void pytago(int number){
	for (int i = 1; i < number; i++){
		for (int j = 1; j < number; j++){
			for (int k = 1; k < number; k++){
				if (i + k + j == number){
					enterArrayValue(i, k, j);
				}
			}
		}
	}
}
int main(){
	int number;
	cout<<"Enter Number: ";
	cin>> number;
	pytago(number);
	// enterArrayValue(1, 2, 3);
	return 0;
}
