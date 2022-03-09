#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(void){
	int value1 = 5, value2 = 15;
	int *mypointer;
	
	mypointer = &value1;
	*mypointer = 10;
	mypointer = &value2;
	*mypointer = 20;
	cout<<"value=="<<value1<<endl<<"/ value2=="<<value2<<endl;
	
	system("PAUSE");
	return 0;
}
