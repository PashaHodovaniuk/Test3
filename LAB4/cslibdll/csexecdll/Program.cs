using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using k503.cslibdll;


namespace csexecdll
{
    class Program
    {
        public static double a, b, c = 0;
        static void Vvod()
        {
            Console.Clear();
            double i = 0;            
            Console.WriteLine("Введите значение переменной а");
            while (true)
            {
                string s = Console.ReadLine();
                try
                {
                    i = Convert.ToDouble(s);
                    a = i;
                    break;                    
                }
                catch
                {
                    Console.WriteLine("Вы ввели неправильное значение '{0}'", s);
                    Console.WriteLine("Повторите попытку:");
                }
            }
            Console.WriteLine("Введите значение переменной b");
            while (true)
            {
                string s = Console.ReadLine();
                try
                {
                    i = Convert.ToDouble(s);
                    b = i;
                    break;

                }
                catch
                {
                    Console.WriteLine("Вы ввели неправильное значение '{0}'", s);
                    Console.WriteLine("Повторите попытку:");
                }
            }
            Console.WriteLine("Введите значение переменной c");
            while (true)
            {
                string s = Console.ReadLine();
                try
                {
                    i = Convert.ToDouble(s);
                    c = i;
                    break;
                }
                catch
                {
                    Console.WriteLine("Вы ввели неправильное значение '{0}'", s);
                    Console.WriteLine("Повторите попытку:");
                }
            }
        }


        static void Main(string[] args)
        {
            Int16 M;//переменная для меню
            cslibdll cs = new cslibdll();            
            do
            {
                Console.Clear();
                Console.WriteLine("Программа для нахождения квадратного уравнения");
                Console.WriteLine("Разработал студент гр. 525ст Годованюк П.А.");
                Console.WriteLine("Выберите один из пунктов меню:");
                Console.WriteLine("1. Введите входные параметры.");
                Console.WriteLine("2. Определить количество корней.");
                Console.WriteLine("3. Найти корни квадратного уравнения.");
                Console.WriteLine("4. Выход.");
                Console.Write("Введите вариант: ");
                M = Convert.ToInt16(Console.ReadLine());
                switch (M)
                {
                    case 1: Vvod(); break;
                    case 2:
                        {
                            if (a == 0 && b == 0 && c == 00)
                            { Console.Clear(); Console.WriteLine("Вы не ввели все параметры"); Console.ReadLine(); break; }
                            else
                            {
                                Console.Clear(); Console.WriteLine("Количество корней в уравнении: {0}", cs.Col(a,b,c)); Console.ReadLine();
                            }
                        } break;
                    case 3:
                        {
                            if (a == 0 && b == 0 && c == 0)
                            { Console.Clear(); Console.WriteLine("Вы не ввели все параметры"); Console.ReadLine(); break; }
                            else
                            {
                                Console.Clear(); cs.Rashet(a,b,c); Console.ReadLine();
                            }
                        } break;
                    case 4: { Console.Clear(); Console.WriteLine("Завершение программы!"); Console.ReadLine(); } break;
                    default: { Console.Clear(); Console.WriteLine("Вы выбрали не верный пункт меню, повторите попытку!"); Console.ReadLine(); } break;
                }
            } while (M != 4);            
        }
    }
}
