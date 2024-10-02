//Is the sCORE cONSISTENT
//572
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRUESCORE
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((c>=a) && (d>=b)){
            cout<<"Possible"<<endl;
        }
        else{
            cout<<"Impossible"<<endl;
        }
    }
}