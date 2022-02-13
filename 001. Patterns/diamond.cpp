#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
int i;
int d;
int m;
m=(n-1)/2;
d=(n+1)/2;
for(i=1;i<=d;i=i+1){
    int a;

        for(a=1;a<=n-i-m;a=a+1){
            cout<<' '<<' ';
        }
        int b;
        for(b=1;b<=2*i-1;b=b+1){
            cout<<'*'<<' ';
        }
    cout<<endl;
}
int y;
for(y=d+1;y<=n;y=y+1){
    int v;
    for(v=d+1;v<=y;v=v+1){
        cout<<' '<<' ';
    }
    int q;
    for(q=1;q<=2*n-2*y+1;q=q+1){
        cout<<'*'<<' ';
    }
    cout<<endl;
}

return 0;
}
