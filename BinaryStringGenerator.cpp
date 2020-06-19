/*
The code generates a random binary string of length 100 with probability of zeros being 0.75.
*/

#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int n = 100;
    cout<<rnd.next("[0001]{%d}", n);
    return 0;
}
