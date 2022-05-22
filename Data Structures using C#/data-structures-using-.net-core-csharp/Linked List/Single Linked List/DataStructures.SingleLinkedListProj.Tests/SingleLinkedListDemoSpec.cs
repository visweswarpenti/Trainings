using System;
using Xunit;

namespace DataStructures.SingleLinkedListProj
{
    public class SingleLinkedListDemoSpec
    {
        SingleLinkedListDemo _testObject = new();

        [Fact]
        public void Creation_ShouldInsertElementsIntoLinkedList_When_ElementsArePassedToCreation()
        {
            _testObject.Creation(10);
            _testObject.Creation(20);
            _testObject.Creation(30);
            _testObject.Creation(40);
            _testObject.Creation(50);

            var listElements = _testObject.Display();
            Assert.Equal("10,20,30,40,50", string.Join(",", listElements));
        }

        [Fact]
        public void Insert_ShouldInsertElementsIntoLinkedList_When_ElementsArePassedToInsertion()
        {
            _testObject.Insertion(10, 0);
            _testObject.Insertion(20, 1);
            _testObject.Insertion(30, 2);
            _testObject.Insertion(40, 3);
            _testObject.Insertion(50, 4);

            var listElements = _testObject.Display();
            Assert.Equal("10,20,30,40,50", string.Join(",", listElements));
        }

        [Fact]
        public void CreateInsert_ShouldInsertElementsIntoLinkedList_When_ElementsAreInsertedInFirstMiddleLast()
        {
            _testObject.Creation(10);
            _testObject.Creation(20);
            _testObject.Creation(30);
            _testObject.Creation(40);
            _testObject.Creation(50);

            _testObject.Insertion(5, 0);

            // list is like 5,10,20,30,40,50
            _testObject.Insertion(25, 3);

            _testObject.Insertion(55, 7);

            var listElements = _testObject.Display();
            Assert.Equal("5,10,20,25,30,40,50,55", string.Join(",", listElements));
        }

        [Fact]
        public void Insert_ShouldInsertElementsIntoLinkedList_When_ElementsAreInsertedInFirstMiddleLast()
        {
            _testObject.Insertion(10, 0);
            _testObject.Insertion(20, 1);
            _testObject.Insertion(30, 2);
            _testObject.Insertion(40, 3);
            _testObject.Insertion(50, 4);

            _testObject.Insertion(5, 0);

            // list is like 5,10,20,30,40,50
            _testObject.Insertion(25, 3);

            _testObject.Insertion(55, 7);

            var listElements = _testObject.Display();
            Assert.Equal("5,10,20,25,30,40,50,55", string.Join(",", listElements));
        }
        
        [Fact]
        public void ElementAt_ShouldInsertElementsIntoLinkedList_When_ElementsAreInsertedInFirstMiddleLast()
        {
            _testObject.Insertion(10, 0);
            _testObject.Insertion(20, 1);
            _testObject.Insertion(30, 2);
            _testObject.Insertion(40, 3);
            _testObject.Insertion(50, 4);

            _testObject.Insertion(5, 0);

            // list is like 5,10,20,30,40,50
            _testObject.Insertion(25, 3);
            _testObject.Insertion(55, 7);
            // list is like 5,10,20,25,30,40,50,55
            Assert.Equal(20, _testObject.ElementAt(2));
            Assert.Equal(30, _testObject.ElementAt(4));
            Assert.Equal(55, _testObject.ElementAt(7));
        }

        //Delete ---

        [Fact]
        public void CreateDelete_ShouldDeleteElementsFromLinkedList_When_ElementsAreDeletedAtFirstMiddleLast()
        {
            _testObject.Creation(10);
            _testObject.Creation(20);
            _testObject.Creation(30);
            _testObject.Creation(40);
            _testObject.Creation(50);
            _testObject.Creation(60);
            _testObject.Creation(70);

            _testObject.Deletion(0);

            _testObject.Deletion(3);

            _testObject.Deletion(4);

            var listElements = _testObject.Display();
            Assert.Equal("20,30,40,60", string.Join(",", listElements));
        }

        [Fact]
        public void InsertDelete_ShouldDeleteElementsFromLinkedList_When_ElementsAreDeletedAtFirstMiddleLast()
        {
            _testObject.Insertion(10, 0);
            _testObject.Insertion(20, 1);
            _testObject.Insertion(30, 2);
            _testObject.Insertion(40, 3);
            _testObject.Insertion(50, 4);
            _testObject.Insertion(60, 5);
            _testObject.Insertion(70, 6);

            _testObject.Deletion(0);

            _testObject.Deletion(3);

            _testObject.Deletion(4);

            var listElements = _testObject.Display();
            Assert.Equal("20,30,40,60", string.Join(",", listElements));
        }

        [Fact]
        public void Insert_ShouldThrowException_When_WrongIndexIsPassed()
        {
            _testObject.Insertion(10, 0);
            _testObject.Insertion(20, 1);
            _testObject.Insertion(30, 2);

            Exception ex = Assert.Throws<Exception>(() => _testObject.Insertion(40, 4));
            Assert.Equal("insertion is not possible", ex.Message);
        }

        [Fact]
        public void Delete_ShouldThrowException_When_WhenListIsEmpty()
        {
            _testObject.Insertion(10, 0);
            _testObject.Insertion(20, 1);

            _testObject.Deletion(0);
            _testObject.Deletion(0);

            Exception ex = Assert.Throws<Exception>(() => _testObject.Deletion(0));
            Assert.Equal("list is empty", ex.Message);
        }

        [Fact]
        public void Delete_ShouldThrowException_When_WrongIndexIsPassed()
        {
            _testObject.Insertion(10, 0);
            _testObject.Insertion(20, 1);

            Exception ex = Assert.Throws<Exception>(() => _testObject.Deletion(3));
            Assert.Equal("deletion is not possible", ex.Message);
        }
    }
}
