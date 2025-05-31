#include <iostream>
#include <string>
 
using namespace std;
 
int solution(string x);
 
int main() {
  int num;
  cin >> num;
  string attempts[num];
  int i =0;
  int correct = 0;
  cin.ignore();
  
  while(i < num) {
    string y;
    getline(cin, y);
    attempts[i] = y;
    i++;
  }
 
  for(int i = 0; i < num; i++) {
     correct += solution(attempts[i]);
  }
 
  cout << correct; 
}
 
int solution(string x) {
 
  int correct = 0;
  for(auto ch : x) {
    if(ch - '0' == 1) {
      ++correct;
    }
  }
  if(correct > 1) {
    correct = 1;
  } else {
    correct = 0;
  } 
  return correct;
}
