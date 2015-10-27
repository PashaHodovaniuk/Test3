using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace k503.cslibdll
{
    public class cslibdll
    {
        public int Col(double a, double b, double c)
        {
            double D; //Параметры, дискриминант и его корень, возможные корни уравнения
            D = (b * b) - 4 * (a * c);
            if (D < 0)
            {
                return 0;
            }
            else if (D == 0)
            {
                return 1;
            }
            else
            {
                return 2;
            }
        }

        public double Rashet(double a, double b, double c)
        {
            double D, d, x0, x1, x2; //Параметры, дискриминант и его корень, возможные корни уравнения
            D = (b * b) - 4 * (a * c);
            if (D < 0)
            {
                Console.Write("Уравнение не имеет действительных корней");
                Console.ReadKey();
            }
            else if (D == 0)
            {
                Console.WriteLine("Уравнение имеет один действительный корень:' \n");
                x0 = -b / (2 * a);
                Console.Write("x = {0:F} \n", x0);
                Console.ReadKey();
            }
            else
            {
                Console.WriteLine("Уравнение имеет два действительных корня:");
                d = Math.Sqrt(D);
                x1 = (-b + d) / 2;
                x2 = (-b - d) / 2;
                Console.Write("x1 = {0:F} \nx2 = {1:F}", x1,x2);
                Console.ReadKey();
            }
            return 0;
        }
    }
}
