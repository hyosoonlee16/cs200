#include <iostream>

using namespace std;

int main()
float* ptrPrice = nullptr;
ptrPrice = &priceHamburger;
ptrPrice = &priceFries;
ptrPrice = &priceSalad;
float taxAmt = (*ptrPrice * 0.065) + ptrPrice;

cout << *ptrPrice << endl;
cout << "Original pride" << : $ <<

}
