using System;

namespace DataStructures.StackProj
{
    class Program
    {
        static void Main(string[] args)
        {
            int ch, ele;
            StackDemo stackDemo = new(10);
            while (true)
            {
                Console.WriteLine(@"enter 1 for push
                                        2 for pop 
                                        3 for peek
                                        4 for display
                                        5 for exit");

                ch = Convert.ToInt32(Console.ReadLine());
                switch (ch)
                {
                    case 1:
                        Console.WriteLine("\n enter ele");
                        ele = Convert.ToInt32(Console.ReadLine());
                        stackDemo.Push(ele);
                        break;
                    case 2:
                        ele = stackDemo.Pop();
                        Console.WriteLine("\n popped ele is : " + ele);
                        break;
                    case 3:
                        ele = stackDemo.Peek();
                        Console.WriteLine("\n peeked ele is : " + ele);
                        break;
                    case 4:
                        Console.WriteLine(stackDemo.Display());
                        break;
                    case 5: return;
                }
            }
        }
    }
}

