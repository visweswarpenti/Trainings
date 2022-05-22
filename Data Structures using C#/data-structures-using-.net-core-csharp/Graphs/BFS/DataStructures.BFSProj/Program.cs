using System;

namespace DataStructures.BFSProj
{
    class Program
    {
        static void Main(string[] args)
        {
            BFSDemo bfsDemo = new BFSDemo();

            bfsDemo.AddEdge(0, 1);
            bfsDemo.AddEdge(0, 2);
            bfsDemo.AddEdge(1, 2);
            bfsDemo.AddEdge(2, 0);
            bfsDemo.AddEdge(2, 3);
            bfsDemo.AddEdge(3, 3);

            Console.WriteLine(string.Join(",", bfsDemo.BFS(2)));
        }
    }
}
