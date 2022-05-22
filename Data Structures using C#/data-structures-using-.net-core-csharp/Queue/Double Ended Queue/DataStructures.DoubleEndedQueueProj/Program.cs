using System;

namespace DataStructures.DoubleEndedQueueProj
{
    class Program
    {
        static void Main(string[] args)
        {
            int ch, ele;
            DoubleEndedQueueDemo queueDemo = new(10);
            while (true)
            {
                Console.WriteLine(@"enter 1 for InsertF
                                        2 for InsertR
                                        3 for DeleteF
                                        4 for DeleteR 
                                        5 for Display
                                        6 for Exit");

                ch = Convert.ToInt32(Console.ReadLine());
                switch (ch)
                {
                    case 1:
                        Console.WriteLine("\n enter ele");
                        ele = Convert.ToInt32(Console.ReadLine());
                        queueDemo.InsertFront(ele);
                        break;
                    case 2:
                        Console.WriteLine("\n enter ele");
                        ele = Convert.ToInt32(Console.ReadLine());
                        queueDemo.InsertRear(ele);
                        break;
                    case 3:
                        ele = queueDemo.DeleteFront();
                        Console.WriteLine("\n deleted ele is : " + ele);
                        break;
                    case 4:
                        ele = queueDemo.DeleteRear();
                        Console.WriteLine("\n deleted ele is : " + ele);
                        break;
                    case 5:
                        var queueElements = queueDemo.Display();
                        Console.WriteLine(string.Join(",", queueElements));
                        break;
                    case 6: return;
                }
            }
        }
    }
}
