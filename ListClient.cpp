#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...

 num_elements i; // header defines this as int
 cout << "Enter items to add to list, or 0 to stop: ";
 cin >> i;
while (i != 0) 
{
    L1.insert(i);
	cin >> i;   
}

   return 0;
}
