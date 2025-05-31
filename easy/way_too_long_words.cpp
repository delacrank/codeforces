#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
 
  int num;
  int num2;
  int size = 0;
  cin >> num;
  num2 = num;
  string x[num];
  int i = 0;
 
  while(num > 0) {
    num--;
    string y;
    cin >> y;
    if(y.size() > 10) {
      y.replace(1, y.size() - 2, to_string(y.size() -2));
    }
    x[i++] = y;
  }
 
  for(int i = 0; i < num2; i++) {
    cout << x[i] << endl;
  } 
}
