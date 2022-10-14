#include<bits/stdc++.h>
using namespace std;
int main(){
    double A,B;
    cin>>A>>B;
    if(A >= 0 && A <= 10 && B >= 0 && B <= 10){
        double a = (A*3.5 + B*7.5)/(3.5+7.5);
        cout<<"MEDIA = "<<fixed<<setprecision(5)<<a<<endl;
    }
    return 0;

}