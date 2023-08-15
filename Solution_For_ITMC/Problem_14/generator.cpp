#include "rndlib.h"
#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    auto n = (1,1000000);
    auto str = Random::String(n,"ab?");
    cout<<n<<endl;
    cout<<str<<endl;
    
}