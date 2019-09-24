#include <stdio.h>
#include <string.h>

/* 1. */

double compute_pi(int n)
{
int FLoopCounter;
int Denominator = 1;
int AddSubSwitch = 1;
double FractionAddSubTotal;
double Pi = 4;
for(FLoopCounter = n; FLoopCounter > 0; FLoopCounter = FLoopCounter - 1)
	{
		if (AddSubSwitch == 0)
		{
		AddSubSwitch = 1;
		FractionAddSubTotal = FractionAddSubTotal + (1/ Denominator);
		Denominator = Denominator + 2;
		}
		
		else if (AddSubSwitch == 1)
		{
		AddSubSwitch = 0;
		FractionAddSubTotal = FractionAddSubTotal - (1/ Denominator);
		Denominator = Denominator + 2;
		}
	}
return Pi;
}


/* 2. */
/*
double compute_sqrt(double x)
{
	double last = 0;
	double next = 0;
	int XCount = 0;
	for(XCount = 0; XCount < 10; XCount = XCount + 1)
	{
		next = 0.5*(last + x / last);
	}

	return next;
}
*/

/* 3. */
/*
int is_prime(int n)
{
	int DivisibleCounter = 0;
	int PrimeFLoop;
	for (PrimeFLoop = n; PrimeFLoop > 0; PrimeFLoop = PrimeFLoop - 1)
	{
		if (n%PrimeFLoop == 0)
		DivisibleCounter = DivisibleCounter + 1;
	}
	
	if (DivisibleCounter == 2)
	return 1;
	
	else if (DivisibleCounter != 2)
	return 0;
}

void display_primes(int n)
{
	int PrimeCheckTemp;
	for (PrimeCheckTemp = n; PrimeCheckTemp > 0; PrimeCheckTemp = PrimeCheckTemp - 1)
	{
		if(is_prime(PrimeCheckTemp))
		{
			printf("%d", PrimeCheckTemp);
		}
	}
}

*/

/* 4. */
/*
void process_scores()
{
	int StudentScoreLoop = 1;
	char name[50];
	int score;
	double HighScore;
	char HighStudent[50];
	double LowScore; 
	char LowStudent[50];
	double TotalScore;
	double AvgScore;
	int NumOfComparisons = 0;
	while (StudentScoreLoop == 1)
	{
		printf("Please Enter a Student name and their score (rounded to a whole number) separated by a space (hit q and then hit enter to quit): ");
		scanf("%s%d", &name, &score);
		if (strcasecomp (name, 'q') || strcasecomp (name, 'Q'))
		{
			printf("Average Score: %f\nMinimum Score: %f\nMaximum Score: %f\nStudent with Highest Score: %s\nStudent with Lowest Score: %s", AvgScore, LowScore, HighScore, LowStudent, HighStudent);
			StudentScoreLoop = 0;
		}
		
		else
		{
			if (HighScore < score)
			{
				HighScore = score;
				strcpy(HighStudent, name);
				
			}
			if (LowScore > score)
			{
				LowScore = score;
				strcpy(LowStudent, name);
				
			}
			TotalScore = TotalScore + score;
			NumOfComparisons = NumOfComparisons + 1;
			memset(name, '\0', sizeof(name));
		}
	}
}
*/

/* 5. */
/*
double compute_tax(int income, char status[50], char state)
{

	scanf("%d%s%c", &income, &status, & state);
	
	if (strcasecomp (status, "single"))
	{
			if (income < 30000)
			{
				if (state == 'I' || state == 'i')
				{
					return income*.2;
				}
				if (state == 'O' || state == 'o')
				{
					return income*.17;
				}
				else
				return -1;
			}
			else if (income >= 30000)
			{
				if (state == 'I' || state == 'i')
				{
					return income*.25;
				}
				if (state == 'O' || state == 'o')
				{
					return income*.22;
				}
				else
				return -1;
			}
			else
			return -1;
	}
	
	else if (strcasecomp (status, "married"))
	{
			if (income < 50000)
			{
				if (state == 'I' || state == 'i')
				{
					return income*.10;
				}
				if (state == 'O' || state == 'o')
				{
					return income*.07;			
				}
				else
				return -1;
			}
			else if (income >= 50000)
			{
				if (state == 'I' || state == 'i')
				{
					return income*.15;				
				}
				if (state == 'O' || state == 'o')
				{
					return income*.12;				
				}
				else
				return -1;
			}
			else
			return -1;
	}
	
	else
	return -1;
}
*/

/* 6. */
/*
int quadratic(double a, double b, double c, double *solution1, double *solution2)
{
	if ((b*b)-4*a*c >= 0)
	{
		*solution1 = ((-b) + compute_sqrt((b*b)-4*a*c))/(2*a);
		*solution2 = ((-b) - compute_sqrt((b*b)-4*a*c))/(2*a);
		return 1;
	}
	else
	{
		*solution1 = 0;
		*solution2 = 0;
		return 0;
	}
}
*/

/* 7. */
/*
int factorial(int n)
{
	if (n == 0)
	return 1;
	
	else
	return n*factorial(n-1);
}
*/

/* 8. */
/*
void file_count(char *file, int *characters, int *lines)
{
	
}
*/

/* 9. */


/* 10. */


/* MAIN */

int main()
{
	int UserIntResponse = 0;
	double UserDoubleResponse = 0;
	char UserStringResponse[100];
	char UserCharResponse;
	int UserMenuInput = 0;
	int MainLoopRepeat = 1;
	while (MainLoopRepeat == 1)
	{
		printf("****************************\n");
		printf("* 1. computing pi          *\n");
		printf("* 2. computing square root *\n");
		printf("* 3. displaying primes     *\n");
		printf("* 4. processing grades     *\n");
		printf("* 5. computing tax         *\n");
		printf("* 6. solving quadratic     *\n");
		printf("* 7. computing factorial   *\n");
		printf("* 8. counting file         *\n");
		printf("* 9. sorting file          *\n");
		printf("* 10.student file          *\n");
		printf("* 11.quit                  *\n");
		printf("****************************\n");
		printf("\n");
		printf("Please Enter a Selection number and hit enter: ");
		scanf("%d", &UserMenuInput);
		printf("\n");
		
		switch(UserMenuInput)
		{
		case '1'  :
			printf("Please Enter the number of terms from the infinite series that you would like to use to calculate pi and hit Enter: ");
			scanf("%d", UserIntResponse);
			compute_pi(UserIntResponse);
			break;
	/*
		case '2'  :
			printf("Please Enter a number you would like to find the square root of and hit enter: ");
			scanf("%f", UserDoubleResponse);
			compute_sqrt(UserDoubleResponse);
			break;
		case '3'  :
			printf("Please Enter a number and hit enter to see this program list all the prime numbers equal to or less than it: ");
			scanf("%d", UserIntResponse);
			display_primes(UserIntResponse);
			break;		
		case '4'  :
			printf("Please Enter a Student Name and their score separated by a space then hit enter,\nrepeat as many times as necessary, then type q or Q and hit enter to see student statistics: ");
			process_scores();
			break;		
		case '5'  :
			printf("Please Enter Annual Income (rounded to a whole number), Marital Status (single or married), and whether you are in or out of state (I or O)\neach separated by a space, and then hit Enter to compute your taxes: ");
			scanf("%d%s%c", UserIntResponse, UserStringResponse, UserCharResponse);
			compute_tax(UserIntResponse, UserStringResponse, UserCharResponse);
			break;	
		case '6'  :
			printf("Please Enter 3 values for a, b, and c, each separated by a space, then hit enter, the program will then decide if those numbers\n will have a solution if used as a quadratic, it will return witha true or false depending on the results: ");
			scanf("%f%f%f")"
			quadratic();
			break;			
		case '7'  :
		printf("Please enter a number and then press the Enter Key, this will calculate the factorial value of that number: ")
			factorial();
			break;			
	
		case '8'  :
			
			break;		
		case '9'  :
			
			break;		
		case '10' :
			break;		
	*/
		case 11 :
			MainLoopRepeat = 0;
			break;		
		}
		
		
	}
}

