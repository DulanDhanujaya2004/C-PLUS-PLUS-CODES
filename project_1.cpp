#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,3,3,5,4,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"print"<<" ";
    for (int i=0;i<n;i++){
      cout<<arr[i]<<" ";

    }
    cout<<endl;
    cout<<"repeat"<<" ";
    for(int i=0;i<n;i++){
        bool isrepeated=false;
        for(int j=0;j<i;j++){
        if(arr[i]==arr[j]){
            isrepeated=true;
          break;

        
      }
    }
    if(! isrepeated){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                break;
            }
        }
        }
    }
    
return 0;            
}
