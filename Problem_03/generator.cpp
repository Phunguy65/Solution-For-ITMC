#include "rndlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    auto n = Random::integer(1,1000);
    cout<<n<<endl;
    auto x = Random::array(n, -10000,10000);
    for(auto i = 0; i<n;++i){
        cout<<x[i]<<" ";
    }
}