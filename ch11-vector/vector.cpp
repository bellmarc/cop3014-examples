#include <iostream>
#include <vector>

using namespace std;

void testVec() {
  // vector v1; invalid, vector is not a type, vector<int> is

  // initialization, constructor call
  vector<int> v1{1,2,3,4,5};
  vector<int> v2 = {1,2,3,4,5};
  vector<int> v3(5); // 5 zeros
  vector<int> v4(5, 10); // 5 number 10s
  vector<int> v5(v1); // duplicate v1

  // at() vs []
  cout << v1.at(6) << endl;  // out of range error
  cout << v1[6] << endl;  // will run! Dangerous!

  // get size
  cout << v1.size() << endl;
  // cout << v1.length() << endl;  // error, length() not exist

  // push pop
  cout << v1.size() << endl;  // 5
  v1.push_back(6);
  cout << v1.size() << endl;  // 6
  v1.pop_back();  // the last 6 is removed
  cout << v1.size() << endl;  // 5
  cout << v1.back() << endl; // give the 5, will not remove the last element
  // cout << v1.pop_back() << endl; // error, pop_back() is a void method
}

double avg(const vector<int> &v) {
  int sum;
  for (int i = 0; i < v.size(); i++)
    sum += v.at(0);
  return static_cast<double>(sum) / v.size();
}

void absolute(vector<int> &v) {
  for (int i = 0; i < v.size(); i++)
    if (v.at(i) < 0)
      v.at(i) *= -1;  // v.at(i) = -v.at(i);
}

int testElementalwiseFunctions() {
  vector<int> v1;
  vector<int> v2;

  v1 = {1, 3, 5};
  v2 = v1;
  v1.at(0) = 0;

  cout << avg(v1);

  return 0;
}int main() {

  // testVec();
  testElementalwiseFunctions();

  return EXIT_SUCCESS;
}