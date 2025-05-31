#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
  int num = 0;
  int max = 0;
  cin >> num;
  cin.ignore();
  cin >> max;
  int peeps[num];
  int i = 0;
  int count = 0;
  int maxValue = 0;
  
  while(i < num) {
    cin.ignore();
    int y = 0;
    cin >> y;
    peeps[i] = y;
    if(i == max - 1 ) {
      maxValue = y;
    }
    i++;
  }
 
  for(int i = 0; i < num; i++) {
    if(peeps[i] >= maxValue && peeps[i] > 0) {
      count++;
    }
  }
  cout << count;
 
}
