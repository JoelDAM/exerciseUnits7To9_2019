#include <iostream>
using namespace std;
int main()
{
    int amount, number, previous, current, increase, decrement;
    
    amount = 10;
    number = 0;
    previous = 0;
    current = 0;
    increase = 0;
    decrement = 0;
    for (int x = 0; x < amount; x++)
    {
        if (x != 0)
            previous = number;
            
        cout << "Introduce the " << x << " number: ";
        cin >> number;
        
        while (number < 0)
        {
            cout << "Introduce the " << x << " number: ";
            cin >> number;
        }
        
        current = number;
        
        if (previous > current)
            decrement++;
        else if (previous < current)
            increase++;
    }
    
    increase--;
    cout << increase << decrement;

    return 0;
}
