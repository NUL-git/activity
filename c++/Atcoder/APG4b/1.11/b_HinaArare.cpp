#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<char> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
  }
  sort(S.begin(), S.end());
  reverse(S.begin(), S.end());
  
  if (S.at(0) == 'Y') {
    cout << "Four" << endl;
  } 
    
  else {
    cout << "Three" << endl;
  }
}
