//Morio and transformation
//649
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRANSFORM?tab=statement
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         if(n%3 == 0){
             cout<<"Normal"<<endl;
         }
         else if(n%3 == 1){
             cout<<"Huge"<<endl;
         }
         else{
             cout<<"Small"<<endl;
         }
    }
    return 0;
}
   