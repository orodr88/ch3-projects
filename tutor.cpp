#include <iostream>

using namespace std;

int main()
{ 
unsigned seed = time(0);
  srand(seed);//seed random number generator
  const int MIN = 100;
  const int MAX = 999;

  int n1, n2, ans;//define variables
  n1 = (rand() % (MAX - MIN + 1)) + MIN;
  n2 = (rand() % (MAX - MIN + 1)) + MIN;
  ans = n1 + n2;//sum of two random numbers

  cout << "What is " << n1 << " + " << n2 << "? ";
  cout << "Press [Enter] to show your answer.";
  cin.get();//waits for user to press enter
  cout << "The answer is " << ans << "." << endl;

  return 0;
  



}
