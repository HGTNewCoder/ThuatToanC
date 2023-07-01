#include <bits/stdc++.h>
#include <string>

const int MAX_X = 10;
const int MAX_Y = 10;

int ans[MAX_X][MAX_Y];
using namespace std;
void findNumber(int x, int y, int num, bool state){
  while (x != MAX_X && y!= MAX_Y){
    if (x == 1 && y == 1){
      ans[x][y] = 1;
      return findNumber(x+=1, y, num+=1, true);
    }
    if (x > y){
      ans[x][y] = num;
      y+=1;
      return findNumber(x, y, num+=1, true);
    }
    if (x < y){
      ans[x][y] = num;
      x+=1;
      return findNumber(x, y, num+=1, false);
    }
    if (x == y && state == true){
      ans[x][y] = num;
      while (x!=1){
        x-=1;
        num+=1;
        ans[x][y] = num;
      }
      return findNumber(x, y+=1, num+=1, false);
    }
    if (x == y && state == false){
      ans[x][y] = num;
      while (y!=1){
        y-=1;
        num+=1;
        ans[x][y] = num;
      }
     
      return findNumber(x+=1, y, num+=1, true);
    }
  }
}

void printNumber(){
  cout << ans[1][1] <<endl;
  cout << ans[2][1] <<endl;
  cout << ans[2][2] <<endl;
  cout << ans[1][2] <<endl;
  cout << ans[1][3] <<endl;
  cout << ans[2][3] <<endl;
  cout << ans[3][3] <<endl;
  cout << ans[3][2] <<endl;
  cout << ans[3][1] <<endl;
  cout << ans[4][1] <<endl;
  cout << ans[4][2] <<endl;
  cout << ans[4][3] <<endl;
  cout << ans[4][4] <<endl;
  cout << ans[3][4] <<endl;
  cout << ans[2][4] <<endl;
  cout << ans[1][4] <<endl;
  cout << ans[1][5] <<endl;
  cout << ans[2][5] <<endl;
  cout << ans[3][5] <<endl;
  cout << ans[4][5] <<endl;
  cout << ans[5][5] <<endl;
}
int main(){
  findNumber(1, 1, 1, true);
  printNumber();
  return 0;
}
