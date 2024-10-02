//Reverse a number
//588
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW007
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       int revNum = 0;
       int rem;
       while(n>0){
         rem = n%10;
         revNum = (revNum*10) + rem;
         n = n/10;
    } 
    cout<<revNum<<endl;
        }
    }