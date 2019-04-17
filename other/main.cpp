#include "core.h"
using namespace std;

int main() {
	Stack s = initStack();
	
	
	int a = 3;
	push(s,a);

	int b = 5;
	push(s,b);	
	
	int r = 0;
	//pop(s,r);
	//pop(s,r);
	
	cout<<r<<endl;
	return 0;
}
