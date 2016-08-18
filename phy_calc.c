/*
The MIT License (MIT)
Copyright (c) Ultima Studios; Wyatt Miller (mill1159@mail.nmc.edu) 2014 - 2016

Miller Physics Calculator 2016 v0.5 ALPHA (Copericus)

Holt/Merrill Physics books smooshed into one big physics calculator!
This is open source to anyone but if you bought the program already compiled,
whoopise! Someone made that mistake! Feel free to pick apart the source code
and email me regards to this program.

Someone should hang me as I have used goto statements...

Last edited Friday 25, June 2016 14:21
*/
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main()
{
	int what;
	printf("An Ultima Studios produciton...\n");
	printf("Made by everybody's favorite intern...\n");
main:
	printf("\nMiller Physics Calculator!\n");
	printf("What would you like to do?\n");
	printf("If this your first time using this calculator, rtfm!\n");
	printf("1. Calculate\n");
	printf("2. Convert\n");
	printf("3. Manual\n");
	printf("4. About\n");
	printf("5. Quit\n");
	printf("ENTER A NUMBER: ");
	scanf("%d", &what);
	if(what == 1)
	{
		int chap;
		printf("\nWhat chapter are you in?\n");
		printf("\nChapter 2/2B(2)\n");
		printf("Chapter 3B/7(3)\n");
		printf("Chapter 4\n");
		printf("Chapter 5\n");
		printf("Chapter 6\n");
		printf("Chapter 7/8(7)\n");
		printf("Chapter 12\n");
		printf("Chapter 13\n");
		printf("ENTER A NUMBER: ");
		scanf("%d", &chap);

		if(chap == 2)
		{
			int chap2;
			printf("\nWhat are you trying to solve for?\n");
			printf("\n1. Velocity\n");
			printf("2. Distance\n");
			printf("3. Time\n");
			printf("4. Acceleration\n");
			printf("ENTER A NUMBER: ");
			scanf("%d", &chap2);
			if(chap2 == 1)
			{
				float vv, dv, tv;
				printf("\nEnter the given distance in meters: ");
				scanf("%f", &dv);
				printf("Enter the given time in seconds: ");
				scanf("%f", &tv);
				vv=dv*tv;
				printf("Total calculated velocity in meters per second: %f\n", vv);
				goto main;
			}
			else if(chap2 == 2)
			{
				float vd, dd, td;
				printf("\nEnter the given velocity in meters per second: ");
				scanf("%f", &vd);
				printf("Enter the given time in seconds: ");
				scanf("%f", &td);
				dd=vd*td;
				printf("Total calculated distance in meters: %f\n", dd);
				goto main;
			}
			else if(chap2 == 3)
			{
				float vt, dt, tt;
				printf("\nEnter the given velocity in meters per second: ");
				scanf("%f", &vt);
				printf("Enter the given distance in meters: ");
				scanf("%f", &dt);
				tt=dt/vt;
				printf("Total calculated time in seconds: %f\n", tt);
				goto main;
			}
			else if(chap2 == 4)
			{
				printf("\nI'm suposed to excute code here, don't know what's gonna be here tho...\n");
				return 0;
			}
			else
			{
				goto main;
			}
		}
		else if(chap == 3)
		{
			int chap3;
			//excute code
			printf("Coming soon!");
			goto main;
		}
		else if(chap == 4)
		{
			int chap4;
			//excute code
			printf("Coming soon!");
			goto main;
		}
		else if(chap == 5)
		{
			int chap5;
			//excute code
			printf("Coming soon!");
			goto main;
		}
		else if(chap == 6)
		{
			int chap6;
			//excute code
			printf("Coming soon!");
			goto main;
		}
		else if(chap == 7)
		{
			int chap7;
			//excute code
			printf("Coming soon!");
			goto main;
		}
		else if(chap == 12)
		{
			//excute code
			printf("Coming soon!");
			goto main;
		}
		else if(chap == 13)
		{
			int chap13;
			//excute code
			printf("Coming soon!");
			goto main;
		}
		else
 		{
			goto main;
		}
	}
	else if(what == 2)
	{
	//excute code, will be after 1.0 release
	printf("\nThis option will come after the 1.0 release.\n");
	goto main;
	}
	else if(what == 3)
	{
	system("less phycalc_man.txt");
	goto main;
	}
	else if(what == 4)
	{
	printf("\nMiller Physics Calculator v0.5 Copernicus\n");
	printf("Copyright (c) Ultima Studios; Wyatt Miller 2014-2016\n");
	printf("Licensed by the MIT license.\n");
	printf("Want to see changes? Look in the CHANGELOG.txt.\n");
	printf("Want more details about the license? Look in the LICENSE.txt file!\n");
	printf("Copyrights on Holt/Merrill books will come before 1.0 release...\n");
	//printf("Holt Physics (c) Copyright\n");
	//printf("Merrill Physics (c) Copyright\n");
	goto main;
	}
	else if(what == 5)
	{
	printf("\nThis has been an Ultima Studios production, handcrafted by Wyatt Miller!\n");
	return 0;
	}
	else
	{
	goto main;
	}
}
