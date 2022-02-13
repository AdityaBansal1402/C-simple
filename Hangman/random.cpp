#include <iostream>
#include <time.h>
#include <string>
#include <stdlib.h>
using namespace std;
void figure(int e){
if(e==0){
    char u[13][5]={'_','_','_','_','_',
               ' ',' ','|',' ',' ',
               ' ',' ','|',' ',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' '};
               for(int e=0;e<13;e++){
                for(int Q=0;Q<5;Q++){
                    cout<<u[e][Q];
                }
                cout<<endl;
               }
               return;
}
if(e==1){
    char U[13][5]={'_','_','_','_','_',
               ' ',' ','|',' ',' ',
               ' ',' ','|',' ',' ',
               ' ','-','-','-',' ',
               '|',' ',' ',' ','|',
               '|',' ',' ',' ','|',
               ' ','-','-','-',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' '};
               for(int e=0;e<13;e++){
                for(int Q=0;Q<5;Q++){
                    cout<<U[e][Q];
                }
                cout<<endl;
               }
               return;
}
if(e==2){
    char Y[13][5]={'_','_','_','_','_',
               ' ',' ','|',' ',' ',
               ' ',' ','|',' ',' ',
               ' ','-','-','-',' ',
               '|',' ',' ',' ','|',
               '|',' ',' ',' ','|',
               ' ','-','-','-',' ',
               ' ',' ','|',' ',' ',
               ' ','/','|','\\',' ',
               '/',' ','|',' ','\\',
               ' ',' ','|',' ',' ',
               ' ',' ',' ',' ',' ',
               ' ',' ',' ',' ',' '};
               for(int e=0;e<13;e++){
                for(int Q=0;Q<5;Q++){
                    cout<<Y[e][Q];
                }
                cout<<endl;
               }
               return;
}
}
bool wordfind(string*w,int b,int n){
for(int i=0;i<b;i++){
    if((w[n])[i]!='#'){
            return false;
    }
}
return true;
}
void correct(int o,char c,char *w,string a[11],int n,int b,int e){
    system("CLS");
    w[o]=c;
    (a[n])[o]='#';
     o=a[n].find(c);
     if(wordfind(a,b,n)){
        }
        else{
    figure(e);
    cout<<"correct guess"<<endl<<"Guess The Word!!    "<<w;
        }
if(o<b&&o>=0){
    correct(o,c,w,a,n,b,e);
}
return;
}
void wrong(char*w,int e,int i){
    system("CLS");
    if(i!=1){
    figure(e);
    cout<<"WRONG GUESS!, keep trying"<<endl<<"Guess The Word!!    "<<w;
    }
    return;
}

int level(){
int q;
    cin>>q;
    if(q==1){
        q=0;
        return q;
    }
    else if(q==2){
        q=1;
        return q;
    }
    else if(q==3){
        q=3;
        return q;
    }
    else{
            cout<<"You inputed a false level , Please renter-";
        level();
    }
}
int main() {
    int q;
    cout<<"         Welcome To The HANGMAN Game"<<endl<<"please choose you level -"<<endl<<"Hardcore(zerolives)(press1)"<<endl<<"Normal(2 lives)(press2)"<<endl<<"easy(3 lives)(press3)"<<endl;
q=level();
    cout<<endl<<"Guess The Word!!    ";
 string a[11]={"pokemon","college","coding","garfield","plastic","outcast","boring","executioner","orange","yellow","neon"};
srand(time(NULL));
int n=(rand()%11);
int b=a[n].length();
 char word[b];
 string y=a[n];
for(int i=0;i<b;i++){
word[i]='#';
cout<<word[i];
}
cout<<endl;
int i;
int z=0;
figure(z);
for(i=q;i>0;){
        if(wordfind(a,b,n)){
    break;
}
char c;
cout<<endl<<"enter your guess-";
cin>>c;
c=tolower(c);
int o=y.find(c);
if(o<b&&o>=0){
    correct(o,c,word,a,n,b,z);
    continue;
}
else{
        z++;
        if(i!=0){
    wrong(word,z,i);
        }
i--;
}
}
if(i<=0){
    cout<<"you Lost , Better luck Next Time"<< "The word was "<<y<<endl;
char u[13][5]={'_','_','_','_','_',
               ' ',' ','|',' ',' ',
               ' ',' ','|',' ',' ',
               ' ','-','-','-',' ',
               '|',' ',' ',' ','|',
               '|',' ',' ',' ','|',
               ' ','-','-','-',' ',
               ' ',' ','|',' ',' ',
               ' ','/','|','\\',' ',
               '/',' ','|',' ','\\',
               ' ',' ','|',' ',' ',
               ' ','/',' ','\\',' ',
               '/',' ',' ',' ','\\'};
               for(int e=0;e<13;e++){
                for(int Q=0;Q<5;Q++){
                    cout<<u[e][Q];
                }
                cout<<endl;
               }
}
else{
    cout<<"CONGRATULATIONS YOU WON!!!"<<endl;
    char m[13][5]={' ','-','-','-',' ',
                   '|',' ',' ',' ','|',
                   '|',' ',' ',' ','|',
                   ' ','-','-','-',' ',
                   ' ',' ','|',' ',' ',
                   '\\',' ','|',' ','/',
                   ' ','\\','|','/',' ',
                   ' ',' ','|',' ',' ',
                   ' ','/',' ','\\',' ',
                   '/',' ',' ',' ','\\',
                   ' ',' ',' ',' ',' ',
                   ' ',' ',' ',' ',' ',
                   ' ',' ',' ',' ',' '};
               for(int e=0;e<13;e++){
                for(int Q=0;Q<5;Q++){
                    cout<<m[e][Q];
                }
                cout<<endl;
               }
}

return 0;
}
