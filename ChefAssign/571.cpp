//Car or Bike
//571
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRAVELFAST
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int x,y;
    cin>>x;
    cin>>y;
    if(x>y){
        cout<<"car"<<endl;
    }
    else if(x<y){
        cout<<"Bike"<<endl;
    }
    else{
        cout<<"Same"<<endl;
    }
    }
}