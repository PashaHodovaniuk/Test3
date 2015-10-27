// var5_lib.cpp

#include "var51_lib.h"

#include <stdexcept>
#include <iostream>
#include <math.h>

using namespace std;

namespace kvurav
{
	int mykvurav::Col(double a, double b, double c)
	{
			double  D; //Параметры, дискриминант и его корень, возможные корни уравнения
			D=(b*b)-4*(a*c);
			if(D<0)
			{
				return 0;
			}
			else if(D==0)
			{
				return 1;
			}
			else
			{
				return 2;
			}
	}

	double mykvurav::Rashet(double a, double b, double c)
	{
		double D, d, x0, x1, x2; //Параметры, дискриминант и его корень, возможные корни уравнения
		D=(b*b)-4*(a*c);
		if(D<0)
		{
			printf("уравнение не имеет действительных корней\n");
		}
		else if(D==0)
		{
			printf("уравнение имеет один действительный корень:' \n");
			x0 = -b/(2*a);
			printf("x=%5.2lf \n", x0);
		}
		else
		{
			printf("уравнение имеет два действительных корня: \n");
			d=sqrt(D);
			x1= (-b + d )/2;
			x2= (-b - d)/2;
			printf("x1=%5.2lf \n",x1);
			printf("x2=%5.2lf \n",x2);
		}
		return 0;
	}
		
}