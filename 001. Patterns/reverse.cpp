#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
int r;
for(r=1;r<=n;r=r+1){
    int i;
    for(i=0;i<=n-r;i=i+1){
        cout<<' ';
    }
    int a;
    for(a=2;a<2*r-1;a=a+1){
        cout<<'*';
    }
    if(r==1){
    int t;
    for(t=1;t<n;t=t+1){
        cout<<' ';
    }
    }
    else if(r>1){
    int b;
    for(b=0;b<=n-r;b=b+1){
        cout<<' ';
    }
    }

    cout<<endl;
}
int c;
for(c=1;c<n;c=c+1){
    int o;
    for(o=1;o<=c+1;o=o+1){
        cout<<' ';
    }
    int y;
    for(y=1;y<=2*n-2*c-3;y=y+1){
        cout<<'*';
    }
    if(c<n-1){
    int u;
    for(u=1;u<=c+1;u=u+1){
        cout<<' ';
    }
    }
    if(c==n-1){
        int z;
        for(z=1;z<n;z=z+1){
            cout<<' ';
        }
    }

    cout<<endl;
}





return 0;
}

