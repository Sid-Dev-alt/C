#include<stdio.h>
int main() {
	int height;
	int i;
	int j;
	int k;
	int num = 1;
	int alpha='A';

	printf("Enter the height of the triangle: ");
	scanf("%d", &height);

	for(i = 1; i<=height;i++) {
		for(k =1;k<=height-i;k++){
		  printf(" ");
		}

		for(j=1;j<=2*i-1;j++){
			if(i%2==1){
				printf("%d",num++);
			} else{
				printf("%c",alpha++);
			}
		}
		printf("\n");
	}
}
