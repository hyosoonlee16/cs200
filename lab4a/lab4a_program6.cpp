#include <iostream>
#include <string>
using namespace std;

int main()
{
    string student[3];
    student[0]="Ashley";
    student[1]="Kaidan";
    student[2]="Wrex";


    cout << "Enter 0,1,or 2:" << ptrStudent << endl;
    string* prtStudnet=&student[0];
    string* ptrStudent=&student[1];
    string* ptrStudent=&student[2];

    cout << "New name:";
    cin >> *ptrStudent;
    for(int i=0; i<3; i++)
    {
        cout << "student" << i << "=" << student[i] << endl;
    }
    while(true);
}
