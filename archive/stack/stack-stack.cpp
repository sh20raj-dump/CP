#include <iostream>
#include <stack>
using namespace std;


int main() {
  stack<int> s;

  s.push(1);
  s.push(12);
  s.pop();
  s.push(13);

  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl; // 1 13 

  return 0;
}