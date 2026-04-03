#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> arr = {100, 80, 60, 70, 60, 75, 85};
  vector<int> ss(arr.size());

  for (int i = 0; i < arr.size(); i++) {
    int s = 0;

    // calculate the ss
    for (int j = i; j >= 0; j--) {
        // cout << i << " -> " << " j = " << j << endl;
      if (arr[j] <= arr[i]) {
        s++;
      } else {
        break;
      }
    }

    
    ss[i] = s;
  }

  for (int x : ss) {
    cout << x << " ";
  }

  cout << endl;

  // result = [1,1,1,2,1,4,6]

  return 0;
}