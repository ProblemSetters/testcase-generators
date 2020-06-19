/*
Below is the code of an undirected tree generator that takes two parameters — the number of vertices and the 'elongation' of the tree. For example:

For n = 10, t = 1000, a path graph (degree of all vertices are at most 2) is likely to be generated
For n = 10, t =  - 1000, a star graph (there's only one non-leaf vertex in the tree) is likely to be generated.
*/
#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 10;
    int t = 0;

    vector<int> p(n);
    for(int i = 0; i < n; i++)
        if (i > 0)
            p[i] = rnd.wnext(i, t);

    cout<<n<<endl;
    vector<int> perm(n);
    for(int i = 0; i < n; i++)
        perm[i] = i;
    shuffle(perm.begin() + 1, perm.end());

    vector<int> pp(n);
    for (int i = 1; i < n; i++)
        pp[perm[i]] = perm[p[i]];

    vector<pair<int, int>> edges;

    for (int i = 1; i < n; i++)
    {
        if(rnd.next(2))
            edges.push_back(make_pair(i + 1, pp[i] + 1));
        else
            edges.push_back(make_pair(pp[i] + 1, i + 1));
    }
    shuffle(edges.begin(), edges.end());
    for(auto i:edges)
        cout<<i.first<<" "<<i.second<<endl;
}