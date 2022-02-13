#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a=(n+1)/2;
int b=(n-1)/2;
for(int i=0;i<a;i++){
        for(int e=1;e<=(a-i);e++){
    cout<<'*'<<' ';
        }
        if(i>0){
        for(int c=1;c<=((2*(i-1)+1));c++){
            cout<<' '<<' ';
        }
        }
        if(i==0){
        for(int r=1;r<=b;r++){
            cout<<'*'<<' ';
        }
}
else{
    for(int r=1;r<=(a-i);r++){
        cout<<'*'<<' ';
    }
}
cout<<endl;
}
for(int i=0;i<b;i++){
    for(int e=0;e<=i+1;e++){
        cout<<'*'<<' ';
    }
for(int r=1;r<=(2*(b-i-1)-1);r++){
    cout<<' '<<' ';
}
if(i!=b-1){
    for(int c=0;c<=i+1;c++){
        cout<<'*'<<' ';
    }
}
else{
for(int x=1;x<=b;x++){
    cout<<'*'<<' ';
}
}

cout<<endl;
}


return 0;
}
