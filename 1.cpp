#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ttl = 0;
    for(int i = 0;i <= n;i++){
        ttl+=i;
    }
    cout<<"Total:"<<ttl;
}