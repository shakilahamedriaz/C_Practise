#include<iostream>
using namespace std;


int LinearSearch(int arr[],int n,int key){

 cout<<"Enter the target element that you want";
  for(int i=0; i<n; i++){

    if(arr[i]==key){
        return i;
    }
  }
  return -1;

}

int main(){

cout<<"Enter the size of array = ";
int n;
cin>>n;

int arr[n];

cout<<"Enter the elements of arrays : ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}


int key;
cin>>key;


cout<<"Position = "<<LinearSearch(arr,n,key)<<endl;

return 0;
}



