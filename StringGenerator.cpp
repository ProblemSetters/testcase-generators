/*
Generates a random string of alpha numeric characters of length 1000.
*/

#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 1000;
    cout << rnd.next("[a-zA-Z0-9]{1,%d}", n) << endl;
    return 0;
}
