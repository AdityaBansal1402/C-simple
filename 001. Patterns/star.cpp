#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
int i;
for(i=0;i<=n;i=i+1){
    int a;
    for(a=0;a<=i;a=a+1){
        cout<<n-a<<' ';
    }
    int x;
    for(x=1;x<=2*(n-i)-1;x=x+1){
        cout<<' '<<' ';
    }
if(i<n){
        int u;
        for(u=n-i;u<=n;u=u+1){
            cout<<u<<' ';
        }
}
if(i==n){
    int y;
    for(y=1;y<=n;y=y+1){
        cout<<y<<' ';
    }
}
    cout<<endl;
}
int q;
for(q=1;q<=n;q=q+1){
    int r;
    for(r=n;r>=q;r=r-1){
        cout<<r<<' ';
    }
    int v;
    for(v=1;v<=2*q-1;v=v+1){
        cout<<' '<<' ';
    }
    int m;
    for(m=q;m<=n;m=m+1){
        cout<<m<<' ';
    }
    cout<<endl;
}




return 0;
}
