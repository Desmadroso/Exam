#include <iostream>
using namespace std;


int x[10];
int i;

for (i = 0; i < 10; i++)
	x[i] = 10 - i;
int temp = x[i];
int temp2;
for (i = 0; i < 10; i++) {
	for (int j = 1; j < 10; j++) {
		if temp < x[j]{
		temp2 = x[j];
		x[j] = temp;
        temp = temp2;
		}
		

	}
	x[i] = temp;
}
if (x[9] < x[8])
{
	temp = x[8];
	x[9] = x[8];
	x[9] = temp;
}