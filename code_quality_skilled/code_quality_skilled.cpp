#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
    if(argc < 3) return -1;
    int a = atoi(argv[1]), b = atoi(argv[2]), r = 1;
    while(a>0)r*=a--;
    cout << r+b << endl;
    return 0;
}
