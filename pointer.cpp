#include <iostream>
using namespace std;

void add_one(int *x){
 *x += 1;
}
int main(){
  int a = 42;
  int *p = &a;
  cout << a;  //42
  cout << *p; //42
  add_one(p);
  cout << a;  //43
  cout << *p; //43
//main continued ... add_one(&a);
  cout << a; //44 cout << *p; //44 int *p2 = p; add_one(p2);
  cout << a;   //45
  cout << *p;  //45
  return 0;
}