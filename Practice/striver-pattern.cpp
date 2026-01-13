#include<iostream>
using namespace std;

 void print1(int n){
  for (int i =0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<"*";
    }
    cout<<endl;
  }
 }

 void print2(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }

 }
 



int main(){
  int t;
  cin>>t;
  //print1(7);
  for(int i=0;i<t;i++){
    int n;
    cin>>n;
     print2(5);
  }


  


   return 0;
}