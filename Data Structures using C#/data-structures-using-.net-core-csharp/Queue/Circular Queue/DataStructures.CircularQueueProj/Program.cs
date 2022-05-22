using System;

namespace DataStructures.CircularQueueProj
{
    class Program
    {
        static void Main(string[] args)
        {
            int ch, ele;
            CircularQueueDemo queueDemo = new(10);
            while (true)
            {
                Console.WriteLine(@"enter 1 for Insert
                                        2 for Delete 
                                        3 for Display
                                        4 for Exit");

                ch = Convert.ToInt32(Console.ReadLine());
                switch (ch)
                {
                    case 1:
                        Console.WriteLine("\n enter ele");
                        ele = Convert.ToInt32(Console.ReadLine());
                        queueDemo.Insert(ele);
                        break;
                    case 2:
                        ele = queueDemo.Delete();
                        Console.WriteLine("\n deleted ele is : " + ele);
                        break;
                    case 3:
                        var queueElements = queueDemo.Display();
                        Console.WriteLine(string.Join(",", queueElements));
                        break;
                    case 4: return;
                }
            }
        }
    }
}
