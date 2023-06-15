#include <iostream>
using namespace std;

int List[8] = {0, 1, 2, 3, 4, 5, 6, 7};

int Search(int target, int begin, int end){
	int middle = (begin + end) / 2;

	if (begin > end){
		cout<<"Value is not in array";
		return -1;
	}

	else if (target > List[middle]){
		return Search(target, begin, end - 1);
	}

	else if (target < List[middle]){
		return Search(target, begin + 1, end);
	}

	else if (target == List[middle]){
		cout<<"Value in Index " << middle;
		return middle;
	}
	else return 0;


}
int main(){
	Search(1, 0, 6);
	return 0;
}