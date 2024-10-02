//The Three Topics
//573
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/THREETOPICS
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x;
        cin>>x;
        if(a == x || b == x || c == x){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
      }
      return 0;
    }