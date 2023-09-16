#include<iostream>
using namespace std;

class myClass{

    public:
    int temp=0;
    void myFunction(int arr[], int n){

for(int i=0; i<n; i++){
    for (int j = i+1; j < n; j++)
    {
        if(arr[i]>arr[j]){
temp = arr[i];
arr[i]=arr[j];
arr[j]=temp;

        }
    }
    
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<endl;
}

    }


};



int main()
{
int arr[]={1,12,11,3,9,8,5,6,4,7,2,10};
int n= sizeof(arr)/sizeof(arr[1]);

myClass mc;
mc.myFunction(arr,n);


return 0;
}//@rajendra_chimala