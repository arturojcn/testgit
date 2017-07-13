#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("hello world");

    int 
	a = 0,
	b = 1,
	c = 2,
	d[5] = {1, 2, 3, 4, 5};
    printf("\t %d\n\t %d\t %d\n", a, b, c);

    while(a<4){
	printf("\t #[%d]\n", d[a]);
	a++;
    }

    return EXIT_SUCCESS;

}
