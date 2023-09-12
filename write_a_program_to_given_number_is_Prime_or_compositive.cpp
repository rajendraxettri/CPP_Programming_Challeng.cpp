#include<iostream>
using namespace std;
class home{
    public:
int num,sum=0;

void calculate(){
    for (int i = 1; i <= num; i++)
    {
       if (num%i == 0)
       {
        sum++;
       }
       
    }
    
    if (sum==2)
    {
        cout<<"The given number is prime number !";
    }else{
        cout<<"Given number is not prime number ! ";
    }
    
}

};


int main()
{
int num;
cout<<"Enter a number : ";
cin>>num;
home h;
h.num=num;
h.calculate();



return 0;
}//@rajendra_chimala