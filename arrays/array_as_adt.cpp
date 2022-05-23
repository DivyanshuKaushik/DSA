#include<bits/stdc++.h>

using namespace std;

class Array{
    int tsize,usize,*ptr;
    public:
        Array(int n){
            tsize = n;
            ptr = new int[n];
        }
        int size(){
            return tsize;
        }

};

int main(){
    Array arr(3);
    cout<<arr.size()<<endl;
    return 0;
}