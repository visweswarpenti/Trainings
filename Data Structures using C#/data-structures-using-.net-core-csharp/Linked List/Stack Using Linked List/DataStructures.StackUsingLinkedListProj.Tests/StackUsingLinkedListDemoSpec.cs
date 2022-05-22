using System;
using Xunit;

namespace DataStructures.StackUsingLinkedListProj.Tests
{
    public class StackUsingLinkedListDemoSpec
    {
        StackUsingLinkedListDemo _testObject = new();

        [Fact]
        public void Push_ShouldInsertElementsIntoStack_When_ElementsArePushed()
        {
            _testObject.Push(40);
            _testObject.Push(20);
            _testObject.Push(50);
            _testObject.Push(10);
            _testObject.Push(30);

            Assert.Equal("30,10,50,20,40", string.Join(",", _testObject.Display()));
        }

        [Fact]
        public void Push_ShouldInsertOrDeleteElementsIntoStack_When_ElementsArePushedAndPopped()
        {
            _testObject.Push(40);
            _testObject.Push(20);
            _testObject.Pop();
            _testObject.Push(10);
            _testObject.Push(30);
            _testObject.Pop();

            Assert.Equal("10,40", string.Join(",", _testObject.Display()));
        }

        [Fact]
        public void Push_ShouldThrowException_When_StackIsUnderflow()
        {
            _testObject.Push(40);
            _testObject.Push(20);
            _testObject.Push(50);
            _testObject.Pop();
            _testObject.Pop();
            _testObject.Pop();
            Exception ex = Assert.Throws<Exception>(() => _testObject.Pop());
            Assert.Equal("underflow", ex.Message);
        }

        [Fact]
        public void Push_ShouldReturnValue_When_PeekIsPerformed()
        {
            _testObject.Push(40);
            _testObject.Push(20);
            _testObject.Push(50);
            Assert.Equal(50, _testObject.Peek());
            Assert.Equal("50,20,40", string.Join(",", _testObject.Display()));
            Assert.Equal(50, _testObject.Peek());
            Assert.Equal("50,20,40", string.Join(",", _testObject.Display()));
        }

        [Fact]
        public void Push_ShouldThrowException_When_StackIsUnderflowWhilePerformingPeek()
        {
            _testObject.Push(40);
            _testObject.Push(20);
            _testObject.Push(50);
            _testObject.Pop();
            _testObject.Pop();
            _testObject.Pop();
            Exception ex = Assert.Throws<Exception>(() => _testObject.Peek());
            Assert.Equal("underflow", ex.Message);
        }
    }
}
