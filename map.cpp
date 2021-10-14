#include<iostream>
//#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
  cout<<"start codeing";
  map<int,string>m;
  m[1]="pushkar";
  m[2]="kumar";
  m[3]="rahul";
  m.insert({4,"raj"});

  map<int,string>:: iterator it;
  for(it=m.begin();it!=m.end();++it){
      cout<< (*it).first <<" "<<(*it).second<<endl;
  }

    return 0;
}