#include <iostream>
#include <string>
using namespace std;

namespace isNamed {
	enum example { BOOHOO ,HI, BYE, GOODDAY };
}

void enumPrint(isNamed::example var)
{
	cout << var << endl;
}
int main()
{

	isNamed::example demo = isNamed::HI;

	if (demo == isNamed::HI )
	{
		cout << "HI" << endl;
	}

	enumPrint(isNamed::BYE);
	return 0;
}
