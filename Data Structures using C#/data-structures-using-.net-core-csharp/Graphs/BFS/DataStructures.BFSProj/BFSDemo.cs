using System;
using System.Collections.Generic;
using System.Linq;

namespace DataStructures.BFSProj
{
    public class Map
    {
        public Map(int soruce, int destination)
        {
            this.source = soruce;
            this.destination = destination;
        }
        public int source;
        public int destination;
    }

    public class BFSDemo
    {
        List<Map> adjucencyList = new List<Map>();

        public void AddEdge(int soruce, int destination)
        {
            adjucencyList.Add(new Map(soruce, destination));
        }

        public List<int> BFS(int start)
        {
            var result = new List<int>();
            List<int> visited = new List<int>();

            Queue<int> queue = new Queue<int>();
            visited.Add(start);
            queue.Enqueue(start);

            while (queue.Any())
            {
                int ele = queue.Dequeue();
                result.Add(ele);
                var list = adjucencyList.Where(obj=> obj.source == ele).Select(obj=> obj.destination);

                foreach (var val in list)
                {
                    if (!visited.Any(obj=> obj == val))
                    {
                        visited.Add(val);
                        queue.Enqueue(val);
                    }
                }
            }

            return result;
        }
    }
}
