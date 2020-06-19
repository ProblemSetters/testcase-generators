/*
  Outputs random number between 1 and 10^6, inclusive.
*/

#include "testlib.h"
#include <iostream>

using namespace std;

int main()
{
	int n = 1000000;
    cout << rnd.next(1, n) << endl;
    return 0;
}
