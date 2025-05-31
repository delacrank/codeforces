
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
  int num = 0;
  cin >> num;
  int i = 0;
  int count = 0;
  while(i < num) {
    string y;
    cin >> y;
    if(y.find("+") != string::npos) {
      count++;
    }
 
    if(y.find("-") != string::npos) {
      count--;
    }
    i++;
  }
 
  cout << count;
 
}
