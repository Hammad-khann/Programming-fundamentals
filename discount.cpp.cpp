#include<iostream>
using namespace std;
int main()
{
    int price , discount;
    float discount_amt , final ;


    cout<<"Enter price : ";
    cin>>price;
    cout<<"Enter discount %: " ;
    cin>>discount;
    discount_amt = price*discount/100.0;

    cout<<" you saved Rs. "<<discount_amt<<endl;

    final = price - discount_amt;
    cout<<"price after discount : " <<final;

    return 0;

}
