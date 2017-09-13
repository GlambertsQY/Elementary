#include<iostream>
using namespace std;
const float MILLION = 1.0e6;

int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float num = 10.0 / 3.0;
	cout << num << "  ,multiply million: " << MILLION*num << endl;
	return 0;
}
