#include "rndlib.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(NULL));
    auto a = Random::integer(2, 100);
    auto b = Random::integer(1,a);
    cout << a <<endl;
    cout<<b<<endl;
    return 0;
}