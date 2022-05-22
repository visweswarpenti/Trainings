using System;
using Xunit;

namespace DataStructures.BinarySearchRecursionProj.Tests
{
    public class BinarySearchRecursionDemoSpec
    {
        private int[] _array = { 10, 20, 30, 40, 55, 60, 69, 70, 90, 100 };
        private BinarySearchRecursionDemo _testObject = new();
        
        [Fact]
        public void BinarySearchRecursion_ShouldReturn4_WhenPassed55()
        {
            var result = _testObject.BinarySearchRecursion(_array,0, 9, 55);
            Assert.Equal(4, result);
        }
        
        [Fact]
        public void BinarySearchRecursion_ShouldReturn7_WhenPassed70()
        {
            var result = _testObject.BinarySearchRecursion(_array,0, 9, 70);
            Assert.Equal(7, result);
        }
        
        [Fact]
        public void BinarySearchRecursion_ShouldReturnMinus1_WhenElementNotFound()
        {
            var result = _testObject.BinarySearchRecursion(_array,0, 9, 80);
            Assert.Equal(-1, result);
        }
    }
}
