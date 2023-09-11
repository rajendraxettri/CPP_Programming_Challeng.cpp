#include<iostream>
using namespace std;
class val{
public:
int num;
void inputData(){
cout<<"Enter a number : ";
cin>>num;
}
void checkNum(){
    if (num>0)
    {
        cout<<"Given number is Positive !";
    }
    else if(num=0){
        cout<<"Given number is nither negative nor posative !";
    }else{
        cout<<"Given number is Negative !";
    }
    
}

};


int main()
{
   val v;
   v.inputData();
   v.checkNum(); 

return 0;
}//@rajendra_chimala