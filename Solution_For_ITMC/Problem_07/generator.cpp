#include "rndlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    auto n = Random::integer(1,100);
    cout<<n<<endl;
    for(auto i = 0 ; i < n ; ++i){
        auto lenght = Random::integer(2,1000000);
        auto x = Random::String(lenght,"115105101100114110114114118");
        cout<<x<<endl;
    }
}