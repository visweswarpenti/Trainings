using System;
using Xunit;

namespace DataStructures.DFSProj.Tests
{
    public class DFSDemoSpec
    {
        DFSDemo _testObject = new();

        [Fact]
        public void BFS_ShouldReturnElemenents_When_ProvidesStartingPoint2()
        {
            _testObject.AddEdge(0, 1);
            _testObject.AddEdge(0, 2);
            _testObject.AddEdge(1, 2);
            _testObject.AddEdge(2, 0);
            _testObject.AddEdge(2, 3);
            _testObject.AddEdge(3, 3);

            Assert.Equal("2,3,0,1", string.Join(",", _testObject.DFS(2)));
        }

        [Fact]
        public void BFS_ShouldReturnElemenents_When_ProvidesStartingPoint0()
        {
            _testObject.AddEdge(0, 1);
            _testObject.AddEdge(0, 2);
            _testObject.AddEdge(1, 2);
            _testObject.AddEdge(2, 0);
            _testObject.AddEdge(2, 3);
            _testObject.AddEdge(3, 3);

            Assert.Equal("0,2,3,1", string.Join(",", _testObject.DFS(0)));
        }

        [Fact]
        public void BFS_ShouldReturnElemenents_When_ProvidesStartingPoint1()
        {
            _testObject.AddEdge(0, 1);
            _testObject.AddEdge(0, 2);
            _testObject.AddEdge(1, 2);
            _testObject.AddEdge(2, 0);
            _testObject.AddEdge(2, 3);
            _testObject.AddEdge(3, 3);

            Assert.Equal("1,2,3,0", string.Join(",", _testObject.DFS(1)));
        }

        [Fact]
        public void BFS_ShouldReturnElemenents_When_ProvidesStartingPoint3()
        {
            _testObject.AddEdge(0, 1);
            _testObject.AddEdge(0, 2);
            _testObject.AddEdge(1, 2);
            _testObject.AddEdge(2, 0);
            _testObject.AddEdge(2, 3);
            _testObject.AddEdge(3, 3);

            Assert.Equal("3", string.Join(",", _testObject.DFS(3)));
        }
    }
}
