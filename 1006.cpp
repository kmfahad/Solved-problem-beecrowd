#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    double d = (2*a + 3*b + 5*c)/(2+3+5);
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<d<<endl;
    return 0;
}