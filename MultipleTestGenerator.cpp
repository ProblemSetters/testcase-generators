/*
The generator helps generate different test files for test cases.
*/

#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

void writeTest(int test)
{
    startTest(test);
	/* Write your generator here */    
	cout << rnd.next(1, 100) << endl;
}

int main()
{
	int num_tests = 10;
    for (int i = 1; i <= num_tests; i++)
        writeTest(i);
    
    return 0;
}
