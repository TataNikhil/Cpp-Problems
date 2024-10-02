//water Mixing
//694
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WTRMIXING?tab=statement
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int c = a+x;
        int d = a-y;
        if(d<=b && b<=c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}