#include<iostream>
using namespace std;
int main(){
    int l;
    int n;
    cin>>l>>n;
    // cout<<l<<endl;
    for(int i=1;i<=n;i++){
        int w,h;
        cin>>w>>h;
        if ((w==h) && (w>=l && h>=l))
        {
            cout<<"ACCEPTED"<<endl;//" "<<i<<" "<<w<<" "<< h<<endl;
        }
        else if(w<l || h<l)
        {
            cout<<"UPLOAD ANOTHER"<<endl;//" "<<i<<" "<<w<<" "<< h<<endl;
        }
        else{
            cout<<"CROP IT"<<endl;//" "<<i<<" "<<w<<" "<< h<<endl;
        }
    }
}