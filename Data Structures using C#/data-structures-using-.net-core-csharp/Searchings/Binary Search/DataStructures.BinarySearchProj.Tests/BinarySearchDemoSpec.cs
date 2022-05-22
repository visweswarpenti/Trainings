using System;
using Xunit;

namespace DataStructures.BinarySearchProj.Tests
{
    public class BinarySearchDemoSpec
    {
        private int[] _array = { 10, 20, 30, 40, 55, 60, 69, 70, 90, 100 };
        private BinarySearchDemo _testObject = new();
        
        [Fact]
        public void BinarySearch_ShouldReturn4_WhenPassed55()
        {
            var result = _testObject.BinarySearch(_array,0, 9, 55);
            Assert.Equal(4, result);
        }
        
        [Fact]
        public void BinarySearch_ShouldReturn7_WhenPassed70()
        {
            var result = _testObject.BinarySearch(_array,0, 9, 70);
            Assert.Equal(7, result);
        }
        
        [Fact]
        public void BinarySearch_ShouldReturnMinus1_WhenElementNotFound()
        {
            var result = _testObject.BinarySearch(_array,0, 9, 80);
            Assert.Equal(-1, result);
        }
    }
}
