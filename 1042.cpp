#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int ar[3];
    ar[0] = a;
    ar[1] = b;
    ar[2] = c;
    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j++){
            if(ar[i] > ar[j]){
                swap(ar[i],ar[j]);
            }
        }
    }
    for(int i = 0; i < 3; i++){
        cout<<ar[i]<<endl;
    }
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}