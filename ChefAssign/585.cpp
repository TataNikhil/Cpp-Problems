//Nearest Exit
//585
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NEARESTEXIT
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int x;
    cin>>x;
    if((100 - x)>=50){
        cout<<"Left"<<endl;
    }
    else if((100 - x)<50){
        cout<<"Right"<<endl;
    }
    }
     return 0;
}