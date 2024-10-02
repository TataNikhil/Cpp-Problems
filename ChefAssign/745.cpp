//Chef and Races
//745
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFRACES
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        int medals = 0;
        if(!(a == x || a == y)){
           medals++;
        }
        if(!(b == x || b == y)){
           medals++;
        }
        cout<<medals<<endl;
    }
    return 0;
}
