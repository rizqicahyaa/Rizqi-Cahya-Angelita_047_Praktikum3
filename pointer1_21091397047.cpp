#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
	int a, *b;
	a=20;
	b=&a;
	
	printf ("Pointer b menunjukkan alamat =%p\n",b);
	printf ("Alamat tersebut berisi nilai :%d\n",*b);
	
	system ("PAUSE");
	return 0;
}
