#include<bits/stdc++.h>

using namespace std;

class Array{
    int tsize,usize,*ptr;
    public:
        Array(){
            tsize=0;
            usize=0;
            ptr=NULL;
        }
        Array(int n){
            tsize=n;
            usize=0;
            ptr=new int[tsize];
        }
        int size(){
            return tsize;
        }
        int& operator[](int i){
            return ptr[i];
        }
        void resize(int n){
            if(n<=tsize){
                tsize=n;
                return;
            }
            int *temp = new int(n);
            for(int i=0;i<tsize;i++){
                temp[i]=ptr[i];
            }
            delete[] ptr;
            ptr=temp;
            tsize=n;
        }
        void push_back(int n){
            if(usize==tsize){
                resize(2*tsize);
            }
            ptr[usize++]=n;
        }
        void pop_back(){
            if(usize==0){
                return;
            }
            usize--;
            if(usize<tsize/4){
                resize(tsize/2);
            }
        }
        void insert(int i,int n){
            if(usize==tsize){
                resize(2*tsize);
            }
            for(int j=usize;j>i;j--){
                ptr[j]=ptr[j-1];
            }
            ptr[i]=n;
            usize++;
        }
        void erase(int i){
            for(int j=i;j<usize-1;j++){
                ptr[j]=ptr[j+1];
            }
            usize--;
            if(usize<tsize/4){
                resize(tsize/2);
            }
        }
        void clear(){
            usize=0;
        }
        void print(){
            for(int i=0;i<usize;i++){
                cout<<ptr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    Array arr(3);
    arr.push_back(2);   
    arr.push_back(4);   
    arr.print();
    cout<<arr[1]<<endl; 
    return 0;
}