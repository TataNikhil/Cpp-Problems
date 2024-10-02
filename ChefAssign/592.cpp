//Sasta Shark Tank
//592
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SST
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
        int x = 10;
        int y = 20;
        int p = (a*100)/x;
        int q = (b*100)/y;
        if(p>q){
            cout<<"First"<<endl;
        }
        else if(p<q){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"Any"<<endl;
        }
    }
    return 0;
}