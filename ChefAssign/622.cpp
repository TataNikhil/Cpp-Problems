//Discus throe
//622
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DISCUS
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<max(a,max(b,c))<<endl;
    }
    return 0;
}