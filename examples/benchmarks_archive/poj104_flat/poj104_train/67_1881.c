#include <header.h>

int main()
{
	int n,i,j,sz[1000][2];
	double x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&sz[i][0],&sz[i][1]);
	}
	x=1.0*sz[0][1]/sz[0][0];
	for(i=1;i<n;i++){
		y=1.0*sz[i][1]/sz[i][0];
		if((y-x)>0.05){
			printf("better\n");
		}else if((x-y)>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}