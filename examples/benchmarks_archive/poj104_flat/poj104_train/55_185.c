#include <header.h>

int main()
{
	int a,b,sum=0,len,i,t,r;
	char s[100];
	scanf("%d %s %d", &a, s ,&b);
	len=strlen(s);
	for (i=0; i<len; i++)
	{
		if ( s[i]>='0' && s[i]<='9' ) t=s[i]-'0';
		else if ( s[i]>='a' && s[i]<='z') t=s[i]-'a'+10;
		else t=s[i]-'A'+10;
		sum = sum*a+t;
	}
	i=0;
	if (sum==0) printf("0\n");
	else
	{
		while (sum!=0)
		{
			r=sum%b;
			if (r<10) s[i]=r+'0';
			else s[i]=r-10+'A';
			sum/=b;
			i++;
		}
		s[i]='\0';
		i=strlen(s)-1;
		while (s[i]=='0') i--;
		for (; i>=0; i--)
			printf("%c",s[i]);
		printf("\n");
	}

	return 0;
}
