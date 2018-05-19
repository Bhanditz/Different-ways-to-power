#include <iostream>
#include <cmath>
using namespace std;

int recPower(int number,int power)
{
  if(power == 0)
        return 1;
    else
        return number * recPower(number, power-1);
}

int recPow(int number, int power)
{
    if(power == 1){
        return number;
    }
    if(power%2 != 0) return  recPow(number, power - 1) * number;
    return recPow(number, power/2) * recPow(number, power/2);
}

int main()
{
   int num, power;
   cout<<"the number: ";
   cin>>num;
   cout<<"power: ";
   cin>>power;
    cout<< "first func: "<< recPower(num, power)<<endl;
    cout <<"second func: "<< recPow(num, power)<<endl;

}
