#include <iostream>

int main()
{
    int t1,t2,t3;
    t1 = 0;
    t2 = 1;
    std::cout << t2 << "\n";

    for(int i = 0; i < 10; i++) // change the 10 to any value to determine the amount of times the loop will run //
    {
        t3 = t1 + t2;
        std::cout << t3 << "\n";
        
        t1 = t2;
        t2 = t3;
    }
    
}
// 1 1 2 3 5 8 13 21 34 55 89 //