#include<iostream>
using namespace std;
int main(){
string arr1,arr2;
cin>>arr1>>arr2;
for(int i=0;i<arr1.length();i++){
    if(arr1[i]==arr2[i]){
        cout<<"0";
    }
    else{
        cout<<"1";
    }
}
cout<<endl;
return 0;
}
