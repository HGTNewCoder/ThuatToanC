#include <iostream>
using namespace std;


int recursion(int a, int b){
	if (a == b){
		return a;
	}
	else if (a > b){
		return recursion(a - 1, b);
	}
	else{
		return recursion(a, b - 1);
	}
}
	
int main(){
	cout<<recursion(0, 0)<<endl;
	return 0;
}