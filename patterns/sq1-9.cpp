/**
 -> generate pattern
    1 2 3
    4 5 6
    7 8 9
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int i =1 ;
    while(i<10){
        cout<<i<<" ";
        if(i%3==0){
            cout<<endl;
        }
        i++;
    }

    return 0;
}