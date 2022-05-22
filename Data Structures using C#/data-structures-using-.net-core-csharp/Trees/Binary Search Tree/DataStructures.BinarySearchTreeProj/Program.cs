using System;

namespace DataStructures.BinarySearchTreeProj
{
    class Program
    {
        static void Main(string[] args)
        {
            BinarySearchTreeDemo bst = new();
            while(true)
            {
                Console.WriteLine("Enter \n 1 for insertion \n 2 for deletion \n 3 Pre order \n 4 In order 5 for Post order \n 6 for Find Element 7 for exit");
                int option = Convert.ToInt32(Console.ReadLine());
                switch(option)
                {
                    case 1: 
                            Console.WriteLine("Enter element for insertion");
                            bst.Insert(Convert.ToInt32(Console.ReadLine()));
                            break;

                    case 2: 
                            Console.WriteLine("Enter element for deletion");
                            bst.Delete(Convert.ToInt32(Console.ReadLine()));
                            break;

                    case 3: bst.PreOrder();
                            Console.WriteLine();
                            break;

                    case 4: bst.InOrder();
                            Console.WriteLine();
                            break;

                    case 5: bst.PostOrder();
                            Console.WriteLine();
                            break;
                    case 6: 
                            Console.WriteLine("Enter which element you want to find");
                            if(bst.Find(Convert.ToInt32(Console.ReadLine()))>0)
                            {
                                Console.WriteLine("element found");
                            }
                            break;
                    case 7: return;
                }
            }
        }
    }
}
