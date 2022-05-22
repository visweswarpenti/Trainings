using System;
using System.Collections.Generic;
using System.Linq;

namespace DataStructures.DFSProj
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

    public class DFSDemo
    {
        List<Map> adjucencyList = new List<Map>();

        public void AddEdge(int soruce, int destination)
        {
            adjucencyList.Add(new Map(soruce, destination));
        }

        public List<int> DFS(int start)
        {
            var result = new List<int>();
            List<int> visited = new List<int>();

            Stack<int> stack = new Stack<int>();
            visited.Add(start);
            stack.Push(start);

            while (stack.Any())
            {
                int ele = stack.Pop();
                result.Add(ele);
                var list = adjucencyList.Where(obj=> obj.source == ele).Select(obj=> obj.destination);

                foreach (var val in list)
                {
                    if (!visited.Any(obj=> obj == val))
                    {
                        visited.Add(val);
                        stack.Push(val);
                    }
                }
            }

            return result;
        }
    }
}
