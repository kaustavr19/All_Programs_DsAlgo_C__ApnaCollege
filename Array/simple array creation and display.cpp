#include<iostream>
using namespace std;

main(){
    int n,i;
    cin>>n;
    
    int arr[n];
    
    for(i=1;i<=n;i++){
        cin>>i;
    }
    
    cout<<"The array elements are:"<<endl;
    for(i=1;i<=n;i++){
        cout<<i<<" ";
    }
}