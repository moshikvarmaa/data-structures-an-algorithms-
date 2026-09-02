#include <iostream>
using namespace std;
//frequency of the number in the list
int main(){
    int n;
    int c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tar = 0;
    cout<<"Enter the target:\n";
    cin>>tar;
    for(int i=0;i<n;i++){
        if(tar == arr[i]){
            c+=1;
        }
    }
    cout<<"freaquency of the target "<<tar<<" is "<<c;
}
