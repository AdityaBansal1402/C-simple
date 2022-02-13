#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
int i;
for(i=1;i<=n;i=i+1){
    int a;
    for(a=1;a<=i;a=a+1){
        cout<<a<<' ';
    }
    int q;
    for(q=1;q<=(n-i)*2-1;q=q+1){
        cout<<' '<<' ';
    }
    if(i!=n){
    int e;
    for(e=i;e>=1;e=e-1){
        cout<<e<<' ';
    }
    }
    else if(i==n){
        int z;
        for(z=i-1;z>=1;z=z-1){
            cout<<z<<' ';
        }
    }
    cout<<endl;
}



return 0;
}
