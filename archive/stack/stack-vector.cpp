#include <iostream>
#include <vector>
using namespace std;

class Stack {
  vector<int> v;

public:
  void push(int val) { return v.push_back(val); };

  void pop() { v.pop_back(); };

  int top() { return v.at(v.size() - 1); };

  bool isEmpty() { return v.size() == 0; };
};

int main() {
  Stack s;

  s.push(1);
  s.push(12);
  s.push(13);

  while (!s.isEmpty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;

  return 0;
}