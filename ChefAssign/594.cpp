//Qualify the round
//594
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/QUALIFY
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a;
        int b;
        cin>>a>>b;
       if((a*1) + (b*2) >= x){
           cout<<"Qualify"<<endl;
       }
       else if(a*1 + b*2 <= x){
           cout<<"NotQualify"<<endl;
       }
    }
    return 0;
}