#include <iostream>

using namespace std;

int main()
{
    double sugar, butter, flour;
    // i made cookies double if the user wanted a more specific number
    //yes this is an unlikely scenario
    //yes i'm doing it anyways
    double cookies;

    //this is where the user will input the # of cookies
    cout<<"How many cookies would you like to make?";
    cin>>cookies;

    sugar = (1.5/48)*cookies;
    butter = (1.0/48)*cookies;
    flour = (2.75/48)*cookies;
    //this is where the program will calculate the amount of ingredients needed

    cout<<"Sugar needed for "<<cookies<<" cookies: "<<sugar<<" cups."<<endl;
    cout<<"Butter needed for "<<cookies<<" cookies: "<<butter<<" cups."<<endl;
    cout<<"Flour needed for "<<cookies<<" cookies: "<<flour<<" cups."<<endl;

    return 0;
}
