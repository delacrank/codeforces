#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void swap(char &from, char &to);
 
int main() {
 
  string row[5];
  int MAX_LENGTH = 5;
  for(int i = 0; i < 5; i++) {
    getline(cin, row[i]);
    row[i].erase(remove_if(row[i].begin(), row[i].end(), ::isspace), row[i].end());
  }
 
  int count = 0;
 
  while (row[2][2] != '1') {
    for(int i = 0; i < MAX_LENGTH; i++) {
      for(int j = 0; j < row[i].length(); j++) {
        if(i == 2 && j == 2 && row[i][j] == 1) {
        break;
        }
        if((j+1 < MAX_LENGTH) && row[i][j] == '1' && row[i][j + 1] == '0' && j < 2) {
          swap(row[i][j], row[i][j + 1]);
          count++;
        }
 
        if((j-1 > 0) && row[i][j] == '1' && row[i][j - 1] == '0' && j > 2 ) {
          swap(row[i][j], row[i][j - 1]);
          count++;
        }
 
        if((i+1 < MAX_LENGTH) && row[i][j] == '1' && row[i + 1][j] == '0' && i < 2 ) {
          swap(row[i][j], row[i + 1][j]);
          count++;
        }
 
        if((i-1 > 0) && row[i][j] == '1' && row[i - 1][j] == '0' && i > 2 ) {
          swap(row[i][j], row[i - 1][j]);
          count++;
        }
      }
    }
  }
 
  cout << count << endl;
  
}
 
void swap(char &from, char &to) {
  char temp = to;
  to = from;
  from = temp;
}
