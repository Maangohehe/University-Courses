#include <stdio.h>

int main()
{
	int intgr, intg, enc1, enc2, enc3, enc4, digit1, digit2, digit3, digit4;
	printf("Input a four digit integer\nInput:");
	scanf("%d", &intgr);
	intg=intgr;
	if(intgr>9999||intgr<1000)
	{
		printf("Invalid integer!");
		return 0;
	}
	digit4=intgr%10;
	intgr=intgr/10;
	enc4=digit4+5;
	enc4=enc4%8;
	
	digit3=intgr%10;
	intgr=intgr/10;
	enc3=digit3+5;
	enc3=enc3%8;
	
	digit2=intgr%10;
	intgr=intgr/10;
	enc2=digit2+5;
	enc2=enc2%8;
	
	digit1=intgr%10;
	intgr=intgr/10;
	enc1=digit1+5;
	enc1=enc1%8;
	printf("Encrypted integer is %d%d%d%d\n", enc2, enc1, enc4, enc3);
	
	if(intg==intg)
	{
		printf("Decrypted integer is %d", intg);
	}
	
}
