#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
    if(argc < 3) return -1;

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int result = 1;
    while (a>0)
    {
    	result *= a;
    	a--;
    }	
    result += b;

    cout << argv[1] << "! + " << argv[2] << " = " << result << endl;
    return 0;
}
