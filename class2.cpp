

#include <iostream>
using namespace std;

class A {

	static int t ;
     public:
	A() {
		cout <<"\n Constructor";
	}

	void fun() {

		cout <<"static Value : " << t;
		t++;
		cout<<"\n After increment" <<t;
	}
};

int A::t = 10;

int main() {

	A obj;
	obj.fun();
	return 0;
}
