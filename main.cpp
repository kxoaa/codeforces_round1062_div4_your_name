// codeforces round 1062 (div.4) problem B your name

#include <bits/stdc++.h>

using namespace std;

bool check(string a, string b);

int main() {

  for(int i=1; i <=100; i++){
    string a, b;
  
    cin>> a >> b;
    if(check(a, b))
    cout << "YES" <<endl;
    else 
    cout << "NO" <<endl;
  }
}

bool check(string a, string b){
  
  map<char, int> occur1;
  for(int x = 0; x<a.length(); x++){
    occur1[a[x]]++;
  }
  map<char, int> occur2;
  for(int x = 0; x<b.length();x++){
    occur2[b[x]]++;
  }
  if (occur1 == occur2)
  return true;
  else
  return false;
}

// bruh i found the exact solution by accident and i dont understand it



// started at nov 16 3:30 pm
// done at nov 16 3:50 pm

// time taken: 20 min

// sources: https://www.codespeedy.com/c-program-to-check-whether-two-strings-have-same-character-or-not/

// no ai