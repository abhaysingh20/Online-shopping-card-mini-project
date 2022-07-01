#include<bits/stdc++.h>
using namespace std;
float totamt;

class item
{
    private:
    char name[25];
    int quantity;
    float rate,amount;

    public:
    void getdata(){
        cout<<"Enter the item name::-";
        cin>>name;
        cout<<"\n Enter the rate::-";
        cin>>rate;
        cout<<" Enter the quantity::-";
        cin>>quantity;

    } 

    void printdata(){

        cout<<setw(12)<<name;
        cout<<setw(9)<<quantity;
        cout<<setw(9)<<rate;
        amount=rate*quantity;
        totamt=amount+totamt;
        cout<<setw(8)<<amount<<endl;

    }
};

  int main(){

    item shop[10];
    char ch='y';
    int n=0,i;
   
    while(ch=='y'||ch=='y'){
        shop[n].getdata();
        n++;
        cout<<"Do you want to continue y/n"<<endl;
        cin>>ch;
    }
    cout<<"**********************************"<<endl;
    cout<<"**********Shopping List***********"<<endl;
    cout<<"**********************************"<<endl;
    cout<<"   ---->Name--->Quantity--->Rate-->Amount \n";
    for(int i=0;i<n;i++)
    shop[i].printdata();
    cout<<"**********************************"<<endl;
    cout<<"**********<--Total Bill-->**********"<<totamt;
   
   return 0;
}