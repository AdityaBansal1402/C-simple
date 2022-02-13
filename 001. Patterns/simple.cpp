#include<iostream>
using namespace std;
void array1(int n,int i){
if(i==n){
    return;
}
else{
for(int e=0; e<=i;e++){
    cout<<'*'<<' ';
}
cout<<endl;
}
array1(n,i+1);
}
int main(){
int n;
cin>>n;
array1(n,0);
return 0;
}
