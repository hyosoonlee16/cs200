
#include <iostream>
#include <string>
using namespace std;

void Program1()
{
    names[0] = Xia;
    names[1] = Shang;
    names[2] = Zhou;
    names[3] = Qin;
    names[4] = Han;
    cout << "Xia" << endl;
    cout << "Shang" << endl;
    cout << "Zhou" << endl;
    cout << "Qin" << endl;
    cout << "Han" << endl;
}

void Program2()
{
    names[0] = Xia;
    names[1] = Shang;
    names[2] = Zhou;
    names[3] = Qin;
    names[4] = Han;
   int index = 0;
   int arraySize = 5;
   while(index<arraySize)
    {
        cout << names[index] << endl;
        index = index + 1;
    }
}

void Program3()
{
   string items[3];
   float prices[3];
   int arraySize[3];
   int itemCount[0];
   while(itemCount<arraySize)
   {
     // Ask the user to enter item name;
     cout << "Enter item name:" << endl;
     cin >> items[itemCount];
     // Ask the user to enter prices;
     cout << "Enter price:" << endl;
     cin >> prices[itemCount];
     itemCount = itemCount + 1
   }
    int counter = 0;
    while(counter<itemCount)
    {
      cout << "Item #" << counter << ": " << items[counter] << ", $" << prices[counter] << endl;
	counter++;
	}
}

void Program4()
{
    string letters[5] = { "A", "B", "C", "D", "E" };
    for ( int i = 0; i < 5; i++ )
    {
	cout << letters[i] << endl;
    }

}

void Program5()
{
   string items[3];
   float prices[3];
   int arraySize[3];
   int itemCount[0];
   for(int itemcount = 0; itemCount<arraySize; itemCount++)
   {
     // Ask the user to enter item name;
     cout << "Enter item name:" << endl;
     cin >> items[itemCount];
     // Ask the user to enter prices;
     cout << "Enter price:" << endl;
     cin >> prices[itemCount];

   }
    for ( int counter = 0; counter < itemCount; counter++ )
    {
      cout << "Item #" << counter << ": " << items[counter] << ", $" << prices[counter] << endl;
	counter++;
    }

void Program6()
{
    string cities[20];
	int arraySize = 20;
	cities[0] = "Lee's Summit";
	cities[1] = "Raytown";
	cities[2] = "Independence";
	cities[3] = "Belton";
	int itemCount = 4;
	for ( int i = 0; i < itemCount; i++ )
    {
        cout << cities[i] << endl;
    }
	return 0;
}
}

int main()
{
    bool done = false;

    while ( !done )
    {
        int choice;
        cout << "0. QUIT" << endl;
        cout << "1. Program 1" << endl;
        cout << "2. Program 2" << endl;
        cout << "3. Program 3" << endl;
        cout << "4. Program 4" << endl;
        cout << "5. Program 5" << endl;
        cout << "6. Program 6" << endl;
        cout << endl << ">> ";
        cin >> choice;

        switch( choice )
        {
            case 0: done = true; break;
            case 1: Program1(); break;
            case 2: Program2(); break;
            case 3: Program3(); break;
            case 4: Program4(); break;
            case 5: Program5(); break;
            case 6: Program6(); break;
        }
    }

	return 0;
}  cout << "Hello world!" << endl;
    return 0;
}
