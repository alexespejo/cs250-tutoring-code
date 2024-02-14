#include "AnyList.h"

#include <iostream>
#include <vector>
using namespace std;

int cast(size_t s){
	return static_cast<int>(s);
}
int main()
{
	vector<Node> testResult;
	vector<Node> testExpected;

	AnyList listA({1,2,3,4,5,6,7});
	listA.print();

	AnyList listB({1,2,3,4,75,6,7,5,5,55, 5});
	listB.print();

	AnyList listC({4,5});
	listC.print();

	
	return 0;
}