// WAP to implement Linear Search

#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}
int main(){

    int arr[]={2,4,5,6,10,12,15,44,-1,-11};

    cout<<"Enter the element to search for: "<<endl;
    int key;
    cin>>key;

    bool found = search(arr,10,key);

    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"key is absent";
    }
    return 0;
}