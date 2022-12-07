#include <stdio.h>
#include <math.h>
int q1(int q);
int p1(int p);
int gcd(int n, int k, int e);
int ran(int k, int e);
int encstr();
int intdec();
int main()
{
	char arr[100];
	int i, l;
	int ch, p=0, q=0, n, k, e=0, d, h[100];
	unsigned long long int c[100], m[100];
	printf("Press 1 for encryption and 2 for decryption: ");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
				printf("Input the number of characters in string: ");
	            scanf("%d", &l);
	            for(i=0; i<l; i++)
	            {
		          printf("Input a character: ");
		          scanf("%s", &arr[i]);
		          h[i]=arr[i]-65;
	            }
			p=p1(p);
			q=q1(q);
			k=(p-1)*(q-1);
			n=p*q;
			printf("Input an encryption key: ");
			scanf("%d", &e);
			gcd(n,k,e);
			d=ran(e,k); 
			
			for(i=0; i<l; i++)
			{
				m[i]=pow(h[i], e);
				c[i]=m[i]%n;
				printf("Bob sends %llu\n", c[i]);
			}
			break;
	}
}

int ran(int e, int k)
{
	int d=0;
	printf("Input a random number: ");
	scanf("%d", &d);
	d=(e*d)%k;
	if(d==1)
	{
		return d;
	}
	else{
		printf("Wrong random.\n");
		ran(e,k);
	}
}

int gcd(int n, int k, int e)
{
	int exh, g;
	
    if(k>e)
    {
    	exh=e;
    	e=k;
    	k=exh;
	}
	while(k!=0)
	{
		g=e%k;
		e=k;
		k=g;
	}
	if(e==1)
	{
	    return 1;
	}
}

int p1(int p)
{
	int i, k, j, alg;
	for(i=7; i<=1000; i++)
	{
		k=0; 
		for(j=1; j<=i-1; j++)
		{
			alg=i%j;
			if(alg==0)
			{
				k++;
			}
		}
		if(k==1)
		{
			p=i;
			return p;
		}
	}
}

int q1(int q)
{
	int i, k, j, alg;
	for(i=11; i<=1000; i++)
	{
		k=0; 
		for(j=1; j<=i-1; j++)
		{
			alg=i%j;
			if(alg==0)
			{
				k++;
			}
		}
		if(k==1)
		{
			q=i;
			return q;
		}
	}
}
