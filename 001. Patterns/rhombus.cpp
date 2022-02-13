#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
int r;
int m;
for(r=1;r<=n;r=r+1){
    int c;
    for(c=1;c<=n-r;c=c+1){
        cout<<' ';
    }
    if(c==n-r+1){
        cout<<'*';
    }

    if(r==1){
            int z;
        for(z=1;z<=n-1;z=z+1){
            cout<<'*';
        }
    }


        else if(r==n){
            int y;
            for(y=1;y<=n-2;y=y+1){
                cout<<'*';
            }
        }
        if(r>1 && r<n){

    for(m=1;m<n-1;m=m+1){
        cout<<' ';
    }
    }
    if(m==n-1){
        cout<<'*';
    }



    cout<<endl;
}





return 0;
}
