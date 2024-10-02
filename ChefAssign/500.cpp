//Greater Average
//500
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    float d = (a+b)/2.0;
    if(d>c){
        cout<<"Yes"<<endl;
        }
        else if(d<=c){
            cout<<"No"<<endl;
        }
    }
    return 0;
}