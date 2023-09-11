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
    if (num%2 == 0)
    {
        cout<<"Given number is Even !";
    }else{
        cout<<"Given number is Odd !";
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