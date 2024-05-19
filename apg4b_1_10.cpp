#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  // ここにプログラムを追記
  int i = 0;
  string point_a = "";
  while (i < A){
    point_a += "]";
    i++;
  }
  int j = 0;
  string point_b = "";
  while (j < B){
    point_b += "]";
    j++;
  }
  
  cout << "A:" << point_a << endl;
  cout << "B:" << point_b << endl;
  

}
