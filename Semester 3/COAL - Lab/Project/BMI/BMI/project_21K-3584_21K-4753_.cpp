#include <stdio.h>
#include <conio.h>
#include <Windows.h>
extern "C" void setBG();
extern "C" void clear32Regs();
extern "C" void compareAndPrint(float bmi);
extern "C" void clearStdout();
extern "C" void changeForegroundBackground();
extern "C" void displayError();
extern "C" void print_to_stdout(const char* s)
{
	printf("\t\t\t%s", s);
}

void MetricSystem()
{
	float weight_kg, height_m, bmi, temp;
input_again:
	setBG();
	printf("\t\t\tGeneral Hospital's BMI calculator\n");
	printf("\t\t\tRemember, you can always press 0 to exit out of the application when prompted for the metric system\n");
	printf("\t\t\tInput your weight in kg: ");
	scanf_s("%f", &weight_kg);
	printf("\t\t\tInput your height in meters: ");
	scanf_s("%f", &height_m);
	if (weight_kg < height_m)
	{
		clearStdout();
		MessageBeep(MB_OK);
		displayError();
		goto input_again;
	}
	clear32Regs();
	__asm
	{
		FINIT
		fld weight_kg //ST(1) = weight_kg
		fld height_m //in ST(0)
		fmul height_m //ST(0) = height_m^2
		fdiv ST(1), ST(0) //ST(1) holds bmi
		fstp temp
		fstp bmi
	}
	printf("\t\t\tYour BMI is: %.2f\t", bmi);
	compareAndPrint(bmi);
	printf("\n");
	printf("\t\t\tPress any key to continue....");
	char garb = _getch();
}

void ImperialSystem()
{
	float weight_lb, height_f, height_in, total_in, con_to_inch = 12, conversion = 703, bmi = (float)0;
input_again_imp:
	setBG();
	printf("\t\t\tGeneral Hospital's BMI calculator\n");
	printf("\t\t\tRemember, you can always press 0 to exit out of the application when prompted for the metric system\n");
	printf("\t\t\tInput your weight in pounds(lbs): ");
	scanf_s("%f", &weight_lb);
	printf("\t\t\tInput your height in feet: ");
	scanf_s("%f", &height_f);
	printf("\t\t\tInches: ");
	scanf_s("%f", &height_in);
	if (weight_lb < height_f || height_in > 12 || weight_lb < height_in)
	{
		clearStdout();
		printf("Logical error!\n");
		displayError();
		goto input_again_imp;
	}
	clear32Regs();
	__asm
	{
		FINIT
		fld height_f
		fmul con_to_inch //Here: height_f  * con_to_inch = feet converted to inch
		fstp height_f //pop
		fstp con_to_inch //pop
		fld height_f  //push converted inches
		fadd height_in //add inches
		fstp total_in //Complete  formula by (weight/height(in inches)^2) * 703 
		fld total_in
		fmul total_in
		fstp total_in //height^2 calculated
		fld weight_lb
		fdiv total_in //weight/height^2
		fmul conversion
		fstp bmi
	}
	printf("\t\t\tYour bmi is: %.2f\t", bmi);
	compareAndPrint(bmi);
	printf("\n");
	printf("\t\t\tPress any key to continue....");
	char garb = _getch();
}
int main()
{
	unsigned short choice = 1;
	while (choice != 0)
	{
		setBG();
		setBG();
		clearStdout();
		printf("\t\t\tWelcome to the General Hospital's BMI Caluclator!\n");
		printf("\t\t\tPlease chose your metric system\n");
		printf("\t\t\t1. Metric system\n\t\t\t2. Imperial system\n");
		printf("\t\t\tInput: ");
		choice = _getch();
		fflush(stdout);
		clearStdout();
		if (choice == '0')
		{
			fflush(stdout);
			printf("\t\t\tgoodbye!");
			exit(0);
		}
		if (choice == '1')
		{
			MetricSystem();
		}
		if (choice == '2')
		{
			ImperialSystem();
		}
	}
	return 0;
	
}