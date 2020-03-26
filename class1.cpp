#include <iostream>
using namespace std;

class Test {
public:
Test() {
  cout<<"\n Test .... ";
}

void fun();

};

void Test::fun() {
  cout<<"\n Function ";
}
int main() {

Test Obj;

Obj.fun();


return 0;
}
