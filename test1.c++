#include <iostream>
using namespace std;
int Linearsearch(int arr[],int size,int key){
     for(int i=0;i<size;i++){
        if (arr[i]==key)
         return i;
         else
         return -1;
        
     }
    } 
int main(){
    cout <<"welcome to my first program\n";
    cout <<"my name is mojtaba\n";
    cout<<"enter one number for search:";
    float a;
    cin >>a;
    int arr[]={1,3,4,6,78,23,50};
    int result=Linearsearch(arr,sizeof(arr),a);
    if (result==-1)
    {
        cout<<"the element " <<a<<"not founded";
    }
    else
    {
        cout<<"the element "<<a<<" founded"; 
    }
    

}