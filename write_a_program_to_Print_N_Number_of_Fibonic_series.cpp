#include<iostream>
using namespace std;
class home{
    public:
    int num,n1=0,n2=1,sum=0;

    void inputNumber(){
        cout<<"Enter a number : ";
        cin>>num;

        
    }
    void outPutData(){

        for (int i = 0; i < num; i++)
        {
            sum=n1+n2;
            n1=n2;
            n2=sum;
            cout<<sum<<"  ";
        }
        
    }
};


int main()
{
home h;
h.inputNumber();
h.outPutData();

return 0;
}//@rajendra_chimala