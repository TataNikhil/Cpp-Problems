//Monopoly
//578
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MONOPOLY2
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p,q,r,s;
        cin>>p>>q>>r>>s;
        if(p>q+r+s || q>p+r+s || r>p+q+s || s>p+q+r){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}