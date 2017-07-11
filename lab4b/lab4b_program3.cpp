#include <iostream>

using namespace std;

int main()
{
  string ears[3]      = { "   ^ ^   ",   "  n   n ",     "  *   *  " };
  string heads[3]     = { " ( o_o ) ",   " ( x_x )" ,    " ( >_< ) " };
  string bodies[3]    = { "/(     )\\",  "\\(     )/",   "o(     )o" };
  string feet[3]      = { "  d   b   ",  "  @   @ ",     "  () () "  };

  string * ptrEars;
  string * ptrHead;
  string * ptrBody;
  string * ptrFeet;

  int earIndex;
  int headIndex;
  int bodyIndex;
  int feetIndex;

  cout << "Enter ears (0-2):";
  cin >> earIndex;
  cout << "Enter head (0-2):";
  cin >> headIndex;
  cout << "Enter body (0-2):";
  cin >> bodyIndex;
  cout << "Enter feet (0-2):";
  cin >> feetIndex;

  ptrEars=&ears[earIndex];
  ptrHeads=&heads[headIndex];
  ptrBodies=&bodies[bodyIndex];
  ptrFeet=&feet[feetIndex];

  cout << *ptrEars << endl;
  cout << *ptrHead << endl;
  cout << *ptrBody << endl;
  cout << *ptrFeet << endl;

  while(true);


  return 0;
}
