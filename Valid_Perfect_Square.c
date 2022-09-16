#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        int flag=0;
        for(int j=1;j<=a;j++){
            if(j*j==a){
                flag=1;
                cout<<"True"<<endl;
                break;
            }
        }
        if(flag==0){
            
                cout<<"False"<<endl;
        }    
    }
}