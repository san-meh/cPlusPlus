#include<iostream>
#include <curses.h>
#include<stdlib.h>

using namespace std;

int main()

{
	int n, i;
	system("clear");
	cout << "Enter array size";
	cin >> n;
	int *p = new int[n];
	for(i = 0; i < n; i++)
	{
		cin >> *(p+i);
	}
	cout << "Elements are:"<< endl;
	for(i = 0; i < n; i++){
		cout << (p + i);
	}
	delete p;
	getch;

    return 0;

}
