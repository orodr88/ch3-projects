#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{
  double principle, rate, times, interest, amount;// declaring our variables
  cout<<"Principle of the savings account?"<<endl;
  cin>>principle;
  cout<<"Interest rate of the savings account? "<<endl;
  cin>>rate;
  cout<<"Number of times the interest is compounded during a year? "<<endl;
  cin>>times;
//this is where we get the user input
  amount = principle * pow((1 + (rate/100)/times), times);//this is why we implemented cmath
  interest = amount - principle;

  cout<<"The interest rate is "<<rate<<"%"<<endl;
  cout<<"Times coumpounded: "<<times<<endl;
  cout<<fixed<<setprecision(2)<<"principle: $"<<principle<<endl//iomanip is used to set the precision of the output
      <<"Interest: $"<<interest<<endl
      <<"Amount in Savings: $"<<amount<<endl;

  return 0;
  
}
