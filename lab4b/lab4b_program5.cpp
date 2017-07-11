#include <iostream>
#include <string>
#include <cstdlib>      // for srand and rand
#include <ctime>        // for time
using namespace std;

const int MANAGER_COUNT = 2;
const int EMPLOYEE_COUNT = 5;

void AssignManagers( string managerNames[ MANAGER_COUNT ], string * employeeManagers[ EMPLOYEE_COUNT ] )
{
}

void DisplayEmployees( string employeeNames[ EMPLOYEE_COUNT ], string * employeeManagers[ EMPLOYEE_COUNT ] )
{
}

int main()
{
    srand( time( NULL ) );

    string managerNames[MANAGER_COUNT] = {"Artemi", "Luma"};
    string employNames[EMPLOYEE_COUNT] = {"Serena","Amy","Raye","Lita","Mina"};
    string* employeeManagers[EMPLOYEE_COUNT];

    int employIndex;
    for(int i=0; i<EMPLOYEE_COUNT; i++)
    {
        int managerIndex=rand()% MANAGER_COUNT;
        employeeManagers[i]=&managerNames[index];
    }
    int employIndex;
    for(int i=0; i<EMPLOYEE_COUNT; i++)
    {
        cout << "Employee" << i <<"\t' << employeeNames[i] << "\t Manager:" << *employeeManagers[i] << endl;
    }

    while(true);

    return 0;
}
