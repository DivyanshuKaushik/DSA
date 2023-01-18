#include<bits/stdc++.h>

using namespace std;

/** left pyramid 
 *
 * *
 * * *
 * * * *
 * * * * * 
*/
void left_pyramid(int n){
    int i = 0;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
/** 
 * number pyramid
 1
 2 3
 3 4 5
 4 5 6 7
*/
void num_pyramid(int n){
    int i = 1;
    int num = 1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<num<<" ";
            num++;
            j++;
        }
        cout<<endl;
        i++;
        num=i;
    }
}
/** 
 * num_vertical_alternating reverser  pyramid
 1
 2 7
 3 6 8
 4 5 9 10
*/
void num_vertical_alter_reverser_pyramid(int n){
    int i = 1;
    while(i<=n){
        int j = 1,dist;
        // if(n-i==0){
        //     dist = n + i;

        // }{
        //     dist = (n-i) * 2;
        // }

        while(j<=i){
            if(j==1){
                cout<<i<<" ";
                j++;
                continue;
            }
            if(j&1){
            cout<< i + pow(2,n-j+1) - 1<<" ";
            }else{
                cout<< i + 2*(n-i) +1 <<" ";

            }
            j++;
            dist = dist *2;

        }
        cout<<endl;
        i++;
    }
}


int main(){
    
    // left_pyramid(5);
    // num_pyramid(5);
    num_vertical_alter_reverser_pyramid(5);
    return 0;
}