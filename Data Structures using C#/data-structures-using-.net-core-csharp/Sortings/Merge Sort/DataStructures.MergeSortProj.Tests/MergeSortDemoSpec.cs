using System;
using Xunit;

namespace DataStructures.MergeSortProj.Tests
{
    public class MergeSortDemoSpec
    {
        private MergeSortDemo _testObject = new();

        [Fact]
        public void MergeSort_ShouldSortArray_WhenPassedArray()
        {
            int[] array = { 10, 60, 35, 25, 75, 45, 37, 65, 87, 23 };
            _testObject.MergeSort(array, 0, 9);

            Assert.Equal("10,23,25,35,37,45,60,65,75,87", string.Join(",", array));
        }

        [Fact]
        public void MergeSort_ShouldSortArray_WhenPassedDiffArray()
        {
            int[] array = { 10, 60, 70, 20, 50, 90, 30, 100, 40, 80 };
            _testObject.MergeSort(array, 0, 9);

            Assert.Equal("10,20,30,40,50,60,70,80,90,100", string.Join(",", array));
        }
    }
}
