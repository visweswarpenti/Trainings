using System;
using Xunit;

namespace DataStructures.BFSProj.Tests
{
    public class BFSDemoSpec
    {
        BFSDemo _testObject = new();

        [Fact]
        public void BFS_ShouldReturnElemenents_When_ProvidesStartingPoint2()
        {
            _testObject.AddEdge(0, 1);
            _testObject.AddEdge(0, 2);
            _testObject.AddEdge(1, 2);
            _testObject.AddEdge(2, 0);
            _testObject.AddEdge(2, 3);
            _testObject.AddEdge(3, 3);

            Assert.Equal("2,0,3,1", string.Join(",", _testObject.BFS(2)));
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

            Assert.Equal("0,1,2,3", string.Join(",", _testObject.BFS(0)));
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

            Assert.Equal("1,2,0,3", string.Join(",", _testObject.BFS(1)));
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

            Assert.Equal("3", string.Join(",", _testObject.BFS(3)));
        }
    }
}
