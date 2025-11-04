#include<iostream>
using namespace std;
int main()
{
    int units,bill;
    const int fixed=150;

    cout<<"enter the units:";
    cin>>units;
    if(units<=100)
    {
        bill=(units*11)+150;
    }
    else if(units>=100&&units<=200)
       {

          bill=(100*11)+((units-100)*17)+fixed;
       }
       else
       {

           bill=(100*11)+(100*17)+((units-200)*30)+fixed;
     }
     cout<<"the total bill is:"<<bill<<endl;
}
