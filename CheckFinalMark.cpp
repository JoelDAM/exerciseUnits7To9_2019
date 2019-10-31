// Joel Martinez
/*
 * Create a program called CheckFinalMark that asks the user to enter 10 integer, 
 * positive numbers. At the end of the process, 
 * the program must tell how many increments and decrements have taken place. 
 * For instance, if the user enters this sequence: 3, 4, 2, 8, 3, 3, 7, 1, 6, 6,
 * the program must output that there has been 4 increments 
 * (3 to 4, 2 to 8, 3 to 7 and 1 to 6), and 3 decrements 
 * (4 to 2, 8 to 3 and 7 to 1).
 */
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
    cout << "Increase: " << increase;
    cout << endl;
    cout << "Decrement: " << decrement;

    return 0;
}
