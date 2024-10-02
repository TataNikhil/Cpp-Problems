//Water Filling
//541
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERFILLING
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int x,y,z;
     cin>>x;
     cin>>y;
     cin>>z;
     if(x+y+z<=1){
        cout<<"Water filling time"<<endl;
     }
     else{
        cout<<"Not now"<<endl;
     }
    }
}