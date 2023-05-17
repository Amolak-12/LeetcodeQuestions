#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> maximini{1, 2, 5, -16, 15, 27, 35, 28, 33, 59, 54, -54};
  int maxi = -99999;
  int mini = 9999999;

  for (int i = 0; i < maximini.size(); i++) {
    if (maximini[i] > maxi) {
      maxi = maximini[i];
    }
  }
  for (int i = 0; i < maximini.size(); i++) {
    if (maximini[i] < mini) {
      mini = maximini[i];
    }
  }
  cout << "Maxi number : " << maxi << endl << "Mini number : " << mini << endl;
}