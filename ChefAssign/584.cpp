//Air Conditioner Temperature
//584
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ACTEMP
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int b;
        cin>>b;
        int c;
        cin>>c;
        if(a<=b && c<=b){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}