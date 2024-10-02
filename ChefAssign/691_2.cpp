//It is my serve
//691
//https://www.codechef.com/practice/logical-problems
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int p,q;
    cin>>p>>q;
    int d = (p+q)/2;
    if(d%2 == 1){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;
    }
    }
    return 0;
}