#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int i = 0;
	for (;;)
	{
		cout << "num: " << i << "  Hello World" << endl;
		_sleep(100);
		if (i++ > 100)
			break;
	}
	return 0;
}