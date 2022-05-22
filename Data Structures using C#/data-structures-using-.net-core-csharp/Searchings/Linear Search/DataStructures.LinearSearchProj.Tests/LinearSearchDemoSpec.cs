using System;
using Xunit;
using DataStructures.LinearSearchProj;

namespace DataStructures.LinearSearchProj.Tests
{
    public class LinearSearchDemoSpec
    {
        private int[] _array = { 10, 60, 35, 25, 75, 45, 37, 65, 87, 23 };
        private LinearSeachDemo _testObject = new();
        
        [Fact]
        public void LinearSearchDemo_ShouldReturn3_WhenPassed30()
        {
            var result = _testObject.LinearSearch(_array,10, 35);
            Assert.Equal(2, result);
        }
        
        [Fact]
        public void LinearSearchDemo_ShouldReturn9_WhenPassed23()
        {
            var result = _testObject.LinearSearch(_array,10, 23);
            Assert.Equal(9, result);
        }
        
        [Fact]
        public void LinearSearchDemo_ShouldReturnMinus1_WhenElementNotFound()
        {
            var result = _testObject.LinearSearch(_array,10, 230);
            Assert.Equal(-1, result);
        }
    }
}
