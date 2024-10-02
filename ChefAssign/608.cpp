//Minimum Cars required
//608
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCARS
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mincar = 0;
        if(n%4 == 0){
            mincar = n/4;
             cout<<mincar<<endl;
        }
            else if(n%4 != 0){
                mincar = (n/4)+1;
                 cout<<mincar<<endl;
            }
        }
       
        return 0;
    }