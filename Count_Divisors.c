#include<iostream>
using namespace std;
int main(){
    int l,r,k;
    cin>>l>>r>>k;
    int c=0;
    for(int i=l;i<=r;i++){
        if(i%k==0){
            c+=1;
        }
    }
    cout<<c<<endl;
}