#include "stdafx.h"
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
	tuple<int> data1(1);
	tuple<int, double> data2(1, 2.3);
	tuple<int, double, char> data3(1, 2.3, 'a');

	cout << sizeof(data1) << endl;
	cout << sizeof(data2) << endl;
	cout << sizeof(data3) << endl;
	
	return 0;
}