#include <header.h>

int main(int argc, char* argv[])
{
    int a;
	scanf("%d", &a);
	if((a%3==0)&&(a%5==0)&&(a%7==0)){
		printf("3 5 7\n");
	}
	else if((a%3==0)&&(a%5==0)&&(a%7!=0)){
        printf("3 5\n");
	}
    else if((a%3==0)&&(a%5!=0)&&(a%7==0)){
        printf("3 7\n");
	}
    else if((a%3!=0)&&(a%5==0)&&(a%7==0)){
        printf("5 7\n");
	}
    else if((a%3==0)&&(a%5!=0)&&(a%7!=0)){
        printf("3\n");
	}
    else if((a%3!=0)&&(a%5==0)&&(a%7!=0)){
        printf("5\n");
	}
    else if((a%3!=0)&&(a%5!=0)&&(a%7==0)){
        printf("7\n");
	}
    else{
		printf("n\n");
	}
	return 0;
}

