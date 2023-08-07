#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,f,t,te,ff,to,r;
    cin>>n;

    h = n / 100;
    r = n % 100;
    f = r / 50;
    r = r % 50;
    t = r /20;
    r = r % 20;
    te = r /10;
    r = r % 10;
    ff = r / 5;
    r = r % 5;
    to = r / 2; 
    r = r % 2;
    cout<<n<<endl;
    cout<<h<<" nota(s) de R$ 100,00"<<endl;
    cout<<f<<" nota(s) de R$ 50,00"<<endl;
    cout<<t<<" nota(s) de R$ 20,00"<<endl;
    cout<<te<<" nota(s) de R$ 10,00"<<endl;
    cout<<ff<<" nota(s) de R$ 5,00"<<endl;
    cout<<to<<" nota(s) de R$ 2,00"<<endl;
    cout<<r<<" nota(s) de R$ 1,00"<<endl;
    return 0;  
}