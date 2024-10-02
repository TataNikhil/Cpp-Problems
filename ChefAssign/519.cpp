//Exams
//519
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXAMCHEF


#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int X,Y,Z;
    cin>>X;
    cin>>Y;
    cin>>Z;
    int s =(X*Y)/2;
    if(Z>s){
        cout<<"Yes"<<endl;
    }
    else if(Z<=s){
         cout<<"No"<<endl;
    }
    }
}