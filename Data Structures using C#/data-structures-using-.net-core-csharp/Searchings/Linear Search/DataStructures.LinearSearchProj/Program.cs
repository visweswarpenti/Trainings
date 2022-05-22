using System;

namespace DataStructures.LinearSearchProj
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, arrayLength, key, index;
            int[] array = new int[10];
            Console.WriteLine("enter how many elements you have");
            arrayLength = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("enter {0} elments", arrayLength);
            for (i = 0; i < arrayLength; i++)
                array[i] = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("enter a key");
            key = Convert.ToInt32(Console.ReadLine());
            index = new LinearSeachDemo().LinearSearch(array, arrayLength, key);
            if (index >= 0)
                Console.WriteLine("element is found at {0} index", index);
            else
                Console.WriteLine("element not found");
        }
    }
}
