#include "rndlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    int arr[] = {25,50,100};
    auto n = Random::integer(1,1000000);
    for(auto i = 0; i<n;++i){
        auto x = Random::integer(0,2);
        cout<<arr[x]<<" ";
    }
    
}