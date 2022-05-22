using System;
using Xunit;

namespace DataStructures.DoubleEndedQueueProj.Tests
{
    public class DoubleEndedQueueDemoSpec
    {
        DoubleEndedQueueDemo _testObject = new(5);

        [Fact]
        public void Insert_ShouldInsertElementsIntoQueue_When_ElementsAreInsertedUsingFront()
        {
            _testObject.InsertFront(40);
            _testObject.InsertFront(20);
            _testObject.InsertFront(50);
            _testObject.InsertFront(10);
            _testObject.InsertFront(30);

            var queueElements = _testObject.Display();
            Assert.Equal("30,10,50,20,40", string.Join(",", queueElements));
        }

        [Fact]
        public void Insert_ShouldThrowException_When_ElementsAreInsertedUsingFrontAndQueueIsFull()
        {
            _testObject.InsertFront(40);
            _testObject.InsertFront(20);
            _testObject.InsertFront(50);
            _testObject.InsertFront(10);
            _testObject.InsertFront(30);

            Exception ex = Assert.Throws<Exception>(() => _testObject.InsertFront(60));
            Assert.Equal("Queue is full", ex.Message);
        }

        [Fact]
        public void Insert_ShouldInsertElementsIntoQueue_When_ElementsAreInsertedUsingRear()
        {
            _testObject.InsertRear(40);
            _testObject.InsertRear(20);
            _testObject.InsertRear(50);
            _testObject.InsertRear(10);
            _testObject.InsertRear(30);

            var queueElements = _testObject.Display();
            Assert.Equal("40,20,50,10,30", string.Join(",", queueElements));
        }

        [Fact]
        public void Insert_ShouldThrowException_When_ElementsAreInsertedUsingRearAndQueueIsFull()
        {
            _testObject.InsertRear(40);
            _testObject.InsertRear(20);
            _testObject.InsertRear(50);
            _testObject.InsertRear(10);
            _testObject.InsertRear(30);

            Exception ex = Assert.Throws<Exception>(() => _testObject.InsertRear(60));
            Assert.Equal("Queue is full", ex.Message);
        }

        [Fact]
        public void Insert_ShouldInsertElementsIntoQueue_When_ElementsAreInsertedUsingFrontAndRear()
        {
            _testObject.InsertRear(40);
            _testObject.InsertFront(20);
            _testObject.InsertRear(50);
            _testObject.InsertFront(10);
            _testObject.InsertRear(30);

            var queueElements = _testObject.Display();
            Assert.Equal("10,20,40,50,30", string.Join(",", queueElements));
        }

        [Fact]
        public void Insert_ShouldThrowException_When_ElementsAreInsertedUsingFrontAndRearAndQueueIsFull()
        {
            _testObject.InsertRear(40);
            _testObject.InsertFront(20);
            _testObject.InsertRear(50);
            _testObject.InsertFront(10);
            _testObject.InsertRear(30);

            Exception ex = Assert.Throws<Exception>(() => _testObject.InsertFront(60));
            Assert.Equal("Queue is full", ex.Message);
        }

        //Delete--------

        [Fact]
        public void Delete_ShouldDeleteElementsFromQueue_When_ElementsAreDeletedUsingFront()
        {
            _testObject.InsertFront(40);
            _testObject.InsertFront(20);
            _testObject.InsertFront(50);
            _testObject.InsertFront(10);
            _testObject.InsertFront(30);

            // Queue looks like 30,10,50,20,40
            _testObject.DeleteFront();
            _testObject.DeleteFront();

            var queueElements = _testObject.Display();
            Assert.Equal("50,20,40", string.Join(",", queueElements));
        }

        [Fact]
        public void Delete_ShouldThrowException_When_ElementsAreDeletedUsingFrontAndQueueIsEmpty()
        {
            _testObject.InsertFront(40);
            _testObject.InsertFront(20);
            _testObject.InsertFront(50);
            _testObject.InsertFront(10);
            _testObject.InsertFront(30);

            // Queue looks like 30,10,50,20,40
            _testObject.DeleteFront();
            _testObject.DeleteFront();
            _testObject.DeleteFront();
            _testObject.DeleteFront();
            _testObject.DeleteFront();

            Exception ex = Assert.Throws<Exception>(() => _testObject.DeleteFront());
            Assert.Equal("Queue is empty", ex.Message);
        }

        [Fact]
        public void Delete_ShouldDeleteElementsFromQueue_When_ElementsAreDeletedUsingRear()
        {
            _testObject.InsertRear(40);
            _testObject.InsertRear(20);
            _testObject.InsertRear(50);
            _testObject.InsertRear(10);
            _testObject.InsertRear(30);

            _testObject.DeleteRear();
            _testObject.DeleteRear();

            // Queue looks like 40,20,50,10,30
            var queueElements = _testObject.Display();
            Assert.Equal("40,20,50", string.Join(",", queueElements));
        }

        [Fact]
        public void Delete_ShouldThrowException_When_ElementsAreDeletedUsingRearAndQueueIsEmpty()
        {
            _testObject.InsertFront(40);
            _testObject.InsertFront(20);
            _testObject.InsertFront(50);
            _testObject.InsertFront(10);
            _testObject.InsertFront(30);

            // Queue looks like 30,10,50,20,40
            _testObject.DeleteRear();
            _testObject.DeleteRear();
            _testObject.DeleteRear();
            _testObject.DeleteRear();
            _testObject.DeleteRear();

            Exception ex = Assert.Throws<Exception>(() => _testObject.DeleteRear());
            Assert.Equal("Queue is empty", ex.Message);
        }

        [Fact]
        public void Delete_ShoulDeleteElementsFromQueue_When_ElementsAreDeletedUsingFrontAndRear()
        {
            _testObject.InsertRear(40);
            _testObject.InsertFront(20);
            _testObject.InsertRear(50);
            _testObject.InsertFront(10);
            _testObject.InsertRear(30);

            // Queue looks like 10,20,40,50,30
            _testObject.DeleteFront();
            _testObject.DeleteRear();
            _testObject.DeleteFront();
            _testObject.DeleteRear();
            var queueElements = _testObject.Display();
            Assert.Equal("40", string.Join(",", queueElements));
        }

        [Fact]
        public void Delete_ShouldThrowException_When_ElementsAreDeletedUsingFrontAndRearAndQueueIsFull()
        {
            _testObject.InsertRear(40);
            _testObject.InsertFront(20);
            _testObject.InsertRear(50);
            _testObject.InsertFront(10);
            _testObject.InsertRear(30);

            // Queue looks like 10,20,40,50,30
            _testObject.DeleteFront();
            _testObject.DeleteRear();
            _testObject.DeleteFront();
            _testObject.DeleteRear();
            _testObject.DeleteRear();
            Exception ex = Assert.Throws<Exception>(() => _testObject.DeleteFront());
            Assert.Equal("Queue is empty", ex.Message);
        }

    }
}
