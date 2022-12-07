#include <stdio.h>

int main()
{
	int intgr, enc1, enc2, enc3, enc4, digit1, digit2, digit3, digit4;
	printf("Input a four digit integer\nInput:");
	scanf("%d", &intgr);
	if(intgr>9999||intgr<1000)
	{
		printf("Invalid integer!");
		return 0;
	}
	//For encryption.
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
	printf("Encrypted integer is %d%d%d%d\n", enc1, enc2, enc3, enc4);
	
	//For decryption.
	
	
	if(digit1==1&&enc1==6&&digit2>=3&&enc2<6&&digit3>=3&&enc3<6&&digit4>=3&&enc4<6)
	{
		enc1=enc1-5;
		enc2=enc2+3;
		enc3=enc3+3;
		enc4=enc4+3;
		printf("Decryption is %d%d%d%d", enc1, enc2, enc3, enc4);
	}
	else if(digit2==1&&enc2==6&&digit3>=3&&enc3<6&&digit4>=3&&enc4<6&&digit1>=3&&enc1<6)
	{
		enc1=enc1+3;
		enc2=enc2-5;
		enc3=enc3+3;
		enc4=enc4+3;
		printf("Decryption is %d%d%d%d", enc1, enc2, enc3, enc4);
	}
	else if(digit3==1&&enc3==6&&digit4>=3&&enc4<6&&digit1>=3&&enc1<6&&digit2>=3&&enc2<6)
	{
		enc1=enc1+3;
		enc2=enc2+3;
		enc3=enc3-5;
		enc4=enc4+3;
		printf("Decryption is %d%d%d%d", enc1, enc2, enc3, enc4);
	}
	else if(digit4==1&&enc4==6&&digit2>=3&&enc2<6&&digit3>=3&&enc3<6&&digit1>=3&&enc1<6)
	{
		enc1=enc1+3;
		enc2=enc2+3;
		enc3=enc3+3;
		enc4=enc4-5;
		printf("Decryption is %d%d%d%d", enc1, enc2, enc3, enc4);
	}
	else if(digit4==1||digit4==2&&enc4==6||enc4==7&&enc4==6&&digit2==1&&enc2==6&&digit1==1&&enc1==6&&digit3==1&&enc3==6)
	{
		enc1=enc1-5;
		enc2=enc2-5;
		enc3=enc3-5;
		enc4=enc4-5;
		printf("Decryption is %d%d%d%d", enc1, enc2, enc3, enc4);
	}
	else if(digit1==1&&enc1==6&&digit2==1&&enc2==6&&digit3>=3&&enc3<6&&digit4>=3&&enc4<6)
	{
		enc1=enc1-5;
		enc2=enc2-5;
		enc3=enc3+3;
		enc4=enc4+3;
		printf("Decryption is %d%d%d%d", enc1, enc2, enc3, enc4);
	}
	else if(digit1==1&&enc1==6&&digit2==1&&enc2==6&&digit3==1&&enc3==6&&digit4>=3&&enc4<6)
	{
		enc1=enc1-5;
		enc2=enc2-5;
		enc3=enc3-5;
		enc4=enc4+3;
		printf("Decryption is %d%d%d%d", enc1, enc2, enc3, enc4);
	}
	else if(digit1>=3&&enc1<6&&digit2==1&&enc2==6&&digit3==1&&enc3==6&&digit4>=3&&enc4<6)
	{
		enc1=enc1+3;
		enc2=enc2-5;
		enc3=enc3-5;
		enc4=enc4+3;
		printf("Decryption is %d%d%d%d", enc1, enc2, enc3, enc4);
	}
	else if(digit1>=3&&enc1<6&&digit2>=3&&enc2<6&&digit3==1&&enc3==6&&digit4==1&&enc4==6)
	{
		enc1=enc1+3;
		enc2=enc2+3;
		enc3=enc3-5;
		enc4=enc4-5;
		printf("Decryption is %d%d%d%d", enc1, enc2, enc3, enc4);
	}
	else if(digit1==1&&enc1==6&&digit2==1&&enc2==6&&digit3==1&&enc3==6&&digit4>=3&&enc4<6)
	{
		enc1=enc1-5;
		enc2=enc2-5;
		enc3=enc3-5;
		enc4=enc4+3;
		printf("Decryption is %d%d%d%d", enc1, enc2, enc3, enc4);
	}
	else if(digit1>=3&&enc1<6&&digit2==1&&enc2==6&&digit3==1&&enc3==6&&digit4>=3&&enc4<6)
	{
		enc1=enc1-5;
		enc2=enc2-5;
		enc3=enc3-5;
		enc4=enc4+3;
		printf("Decryption is %d%d%d%d", enc1, enc2, enc3, enc4);
	}
	
	
	
	
	
	
}
