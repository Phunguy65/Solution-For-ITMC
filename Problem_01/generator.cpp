#include "rndlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    int n = Random::integer(1,100000);
    cout<<n<<endl;
    auto arr = Random::array(n,-20,1800000);
    for(auto i = 0 ; i<n;++i){
        cout<<arr[i]<<" ";
    }
}