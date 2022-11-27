#include<iostream>

using namespace std;

int main()
{
	int *p = NULL;

	p = new int(10);    // p = (int *)malloc(10 * sizeof(int)); -> C

	// Use the memory

	delete []p;          // free(p); -> C

    return 0;
}