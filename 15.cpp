#include <iostream>

using namespace std;
int main()
{

    int partenza = 10;
    int fine = 100;

    for (int i = partenza; i < fine; i++)
    {

        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
