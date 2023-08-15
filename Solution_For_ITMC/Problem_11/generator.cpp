#include "rndlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    auto x = Random::integer(1,100000);
    cout<<x<<endl;
}