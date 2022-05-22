using System;

namespace DataStructures.SingleLinkedListProj
{
    class Program
    {
        static void Main(string[] args)
        {
            int ch, ele, index;
            SingleLinkedListDemo singleLinkedListDemo = new();
            while (true)
            {
                Console.WriteLine(@"enter 1 for Creation
                                        2 for Insert
                                        3 for Delete 
                                        4 for Display
                                        5 for Exit");

                ch = Convert.ToInt32(Console.ReadLine());
                switch (ch)
                {
                    case 1:
                        do
                        {
                            Console.WriteLine("\n enter ele, to stop enter -1");
                            ele = Convert.ToInt32(Console.ReadLine());
                            if (ele == -1)
                                break;
                            singleLinkedListDemo.Creation(ele);
                        } while (true);
                        break;
                    case 2:
                        Console.WriteLine("\n enter ele for insertion");
                        ele = Convert.ToInt32(Console.ReadLine());
                        Console.WriteLine("\n enter index for insertion");
                        index = Convert.ToInt32(Console.ReadLine());
                        singleLinkedListDemo.Insertion(ele, index);
                        break;
                    case 3:
                        Console.WriteLine("\n enter index for deletion");
                        index = Convert.ToInt32(Console.ReadLine());
                        ele = singleLinkedListDemo.Deletion(index);
                        Console.WriteLine("\n deleted ele is : " + ele);
                        break;
                    case 4:
                        var queueElements = singleLinkedListDemo.Display();
                        Console.WriteLine(string.Join(",", queueElements));
                        break;
                    case 5: return;
                }
            }
        }
    }
}
