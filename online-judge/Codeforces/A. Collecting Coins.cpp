#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
long long int a,b,c,n,sum=0;
while(t--){
    cin>>a>>b>>c>>n;
    sum=a+b+c+n;
if(sum%3!=0||sum/3<a||sum/3<b||sum/3<c){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}
