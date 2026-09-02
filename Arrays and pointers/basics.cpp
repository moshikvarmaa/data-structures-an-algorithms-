#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    //input
    for ( int i = 0; i <= n; i++){
        cin>>arr[i];
    }
    //output
    for ( int i = 0; i <= n; i++){
        cout<<arr[i];
    }
    //sum
    int ttl = 0;
    for ( int i = 0; i <= n; i++){
        ttl += arr[i];
    }
    cout<<ttl;
    //first max
    int max = arr[0];
    for ( int i = 0; i <= n; i++){
        if( max < arr[i]){
            max = arr[i];
        }
    }
    cout<<max;
    //first min
    int min = arr[0];
    for ( int i = 0; i <= n; i++){
        if( min > arr[i]){
            min = arr[i];
        }
    }
    cout<<min;
}

