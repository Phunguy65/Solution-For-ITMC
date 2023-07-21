#include "rndlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    auto T = Random::integer(1,50);
    cout<<T<<endl;
    for(auto i = 0 ; i<T;++i){
        auto size = Random::integer(3,100);
        cout<<size<<endl;
        for (size_t i = 0; i < size; i++)
        {
            auto x = Random::integer(-1000000,1000000);
            cout<<x<<" ";
        }
        cout<<endl;
    }
}