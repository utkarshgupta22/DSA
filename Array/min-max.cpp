// Program to find maximum and minimum of an array.

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element: "<<endl;
        cin>>arr[i];
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]>maxNo){
            maxNo=arr[i];
        }
        if(arr[i]<minNo){
            minNo=arr[i];
        }
    }
    cout<<"Maximum value is: "<<maxNo<<endl;
    cout<<"Minimum value is: "<<minNo<<endl;

    return 0;
}

//******************** OR **************************

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the size of an array: ";
//     cin>>n;

//     int arr[n];

//     for(int i=0;i<n;i++){
//         cout<<"Enter the "<<i+1<<" element: "<<endl;
//         cin>>arr[i];
//     }

//     int maxNo=INT_MIN;
//     int minNo=INT_MAX;

//     for(int i=0;i<n;i++){
//         maxNo=max(maxNo,arr[i]);
//         minNo=min(minNo,arr[i]);
//     }
//     cout<<"Maximum value is: "<<maxNo<<endl;
//     cout<<"Minimum value is: "<<minNo<<endl;

//     return 0;
// }