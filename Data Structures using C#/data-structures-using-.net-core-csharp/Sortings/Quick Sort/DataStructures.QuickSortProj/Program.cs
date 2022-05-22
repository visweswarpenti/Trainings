using System;

namespace DataStructures.QuickSortProj
{
    class Program
    {
      static void Main(string[] args)
        {
            int i, arrayLength;
            int[] array = new int[10];
            Console.WriteLine("enter how many elements you have");
            arrayLength = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("enter {0} elments", arrayLength);
            for (i = 0; i < arrayLength; i++)
                array[i] = Convert.ToInt32(Console.ReadLine());
            new QuickSortDemo().QuickSort(array,0, arrayLength-1);
            for (i = 0; i < arrayLength; i++)
                Console.Write(array[i] + " ");
        }
    }
}
