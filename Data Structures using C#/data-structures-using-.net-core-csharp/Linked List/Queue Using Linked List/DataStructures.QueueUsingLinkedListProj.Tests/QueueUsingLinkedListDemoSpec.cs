using System;
using Xunit;

namespace DataStructures.QueueUsingLinkedListProj.Tests
{
    public class QueueUsingLinkedListDemoSpec
    {
        QueueUsingLinkedListDemo _testObject = new();

        [Fact]
        public void Insert_ShouldInsertElementsIntoQueue_When_ElementsAreInserted()
        {
            _testObject.Insert(40);
            _testObject.Insert(20);
            _testObject.Insert(50);
            _testObject.Insert(10);
            _testObject.Insert(30);

            var queueElements = _testObject.Display();
            Assert.Equal("40,20,50,10,30", string.Join(",", queueElements));
        }

        [Fact]
        public void InsertDelete_ShouldInsertOrDeleteElementsIntoQueue_When_ElementsAreInsertedAndDeleted()
        {
            _testObject.Insert(40);
            _testObject.Insert(20);
            _testObject.Delete();
            _testObject.Insert(10);
            _testObject.Insert(30);
            _testObject.Delete();

            var queueElements = _testObject.Display();
            Assert.Equal("10,30", string.Join(",", queueElements));
        }

        [Fact]
        public void Insert_ShouldThrowException_When_QueueIsEmpty()
        {
            _testObject.Insert(40);
            _testObject.Insert(20);
            _testObject.Insert(50);
            _testObject.Delete();
            _testObject.Delete();
            _testObject.Delete();
            Exception ex = Assert.Throws<Exception>(() => _testObject.Delete());
            Assert.Equal("Queue is empty", ex.Message);
        }
    }
}
