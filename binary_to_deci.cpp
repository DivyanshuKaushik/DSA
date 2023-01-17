#include<bits/stdc++.h>

using namespace std;

int binary_to_decimal(int bn){
    int i=0,ans=0;
    while(bn!=0){
        int bit = bn&1;
        if(bit==1){}
        ans += pow(2,i) * bit;
        cout<<ans<<endl;
        bn = bn>>1;
        i++;
    }
    return ans;
}

int main(){
    int n =5,ans=0,i=0;
    while(n!=0){
        int bit = n&1;
        ans = pow(10,i) * bit + ans;
        n = n>>1;
        i++;
    }
    cout<<ans<<endl;

    cout<<binary_to_decimal(100)<<endl;

    return 0;
}