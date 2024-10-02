//Expert Setter
//561
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXPERT
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((2*y)>=x){              //y>(x/2)
            cout<<"Yes"<<endl;
        }
        else if((2*y)<x){
            cout<<"NO"<<endl;
        }
    }
}