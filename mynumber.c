#include <stdio.h>

int main(){
	for(int i =1; i < 101; i++){
		if (i % 2 != 0)
			printf("%d\n", i);
        }
	for(int j =1; j < 101; j++){
		if (i % 2 == 0)
			printf("%d\n", i);
	}
	return 0;
}
