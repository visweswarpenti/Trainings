using System;
using Xunit;

namespace DataStructures.BinarySearchTreeProj.Tests
{
    public class BinarySearchTreeDemoSpec 
    {
        BinarySearchTreeDemo _testObject = new();

        [Fact]
        public void PreOrder_ShouldPrintPreOrder_When_ElementsAreInserted()
        {
            _testObject.Insert(10);
            _testObject.Insert(9);
            _testObject.Insert(11);
            _testObject.Insert(8);
            _testObject.Insert(12);

/*
                10
               /  \
              9    11
             /       \
            8         12
*/

            Assert.Equal("10 9 8 11 12 ", _testObject.PreOrder());
        }

        [Fact]
        public void _testObject_InOrderTest()
        {
            _testObject.Insert(10);
            _testObject.Insert(9);
            _testObject.Insert(11);
            _testObject.Insert(8);
            _testObject.Insert(12);

/*
                10
               /  \
              9    11
             /       \
            8         12
*/

            Assert.Equal("8 9 10 11 12 ", _testObject.InOrder());
        }

        [Fact]
        public void _testObject_PostOrderTest()
        {
            _testObject.Insert(10);
            _testObject.Insert(9);
            _testObject.Insert(11);
            _testObject.Insert(8);
            _testObject.Insert(12);

/*
                10
               /  \
              9    11
             /       \
            8         12
*/

            Assert.Equal("8 9 11 12 10 ", _testObject.PostOrder());
        }

        [Fact]
        public void _testObject_FindTest()
        {
            _testObject.Insert(10);
            _testObject.Insert(9);
            _testObject.Insert(11);
            _testObject.Insert(8);
            _testObject.Insert(12);

/*
                10
               /  \
              9    11
             /       \
            8         12
*/

            Assert.Equal(1, _testObject.Find(10));
            Assert.Equal(-1, _testObject.Find(101));
        }

        [Fact]
        public void _testObject_DeleteRightLeafNodeTest()
        {
            _testObject.Insert(10);
            _testObject.Insert(9);
            _testObject.Insert(11);
            _testObject.Insert(8);
            _testObject.Insert(12);

/*
                10
               /  \
              9    11
             /       \
            8         12
*/

            Assert.True(_testObject.Delete(12));

/*
                10
               /  \
              9    11
             /       
            8         
*/
            Assert.Equal("8 9 10 11 ", _testObject.InOrder());
        }

        [Fact]
        public void _testObject_DeleteNode_WhichHadOnly_RightLeafNodeTest()
        {
            _testObject.Insert(10);
            _testObject.Insert(9);
            _testObject.Insert(12);
            _testObject.Insert(8);
            _testObject.Insert(14);
            _testObject.Insert(13);
/*
                10
               /  \
              9    12
             /       \
            8         14
                      /
                     13 
                        
*/
            Assert.True(_testObject.Delete(12));

/*
                10
               /  \
              9    14
             /     /  
            8     13    
*/      
            Assert.Equal("8 9 10 13 14 ", _testObject.InOrder());
        }

        [Fact]
        public void _testObject_DeleteNode_WhichHadOnly_LeftLeafNodeTest()
        {
            _testObject.Insert(10);
            _testObject.Insert(9);
            _testObject.Insert(12);
            _testObject.Insert(8);
            _testObject.Insert(14);
            _testObject.Insert(13);
/*
                10
               /  \
              9    12
             /       \
            8         14
                      /
                     13 
*/ 

            Assert.True(_testObject.Delete(14));

/*
                10
               /  \
              9    12
             /       \
            8         13
*/ 
            Assert.Equal("8 9 10 12 13 ", _testObject.InOrder());
        }

        [Fact]
        public void _testObject_DeleteNode_WhichHad_LeftRightLeafNodeTest()
        {
            _testObject.Insert(10);
            _testObject.Insert(9);
            _testObject.Insert(12);
            _testObject.Insert(8);
            _testObject.Insert(14);
            _testObject.Insert(13);

/*
                10
               /  \
              9    12
             /       \
            8         14
                      /
                     13 
*/ 

            Assert.True(_testObject.Delete(10));
/*
                12
               /  \
              9    14
             /     /
            8     13
                    
*/ 

            Assert.Equal("8 9 12 13 14 ", _testObject.InOrder());
        }

        [Fact]
        public void _testObject_DeleteNode_WhichHad_LeftRightLeafNodeTest2()
        {
            _testObject.Insert(10);
            _testObject.Insert(9);
            _testObject.Insert(12);
            _testObject.Insert(8);
            _testObject.Insert(14);
            _testObject.Insert(13);
            _testObject.Insert(15);
/*
                10
               /  \
              9    12
             /       \
            8         14
                      / \
                     13  15
*/ 
            Assert.True(_testObject.Delete(10));

/*
                12
               /  \
              9    14
             /     / \
            8     13  15

*/ 
            Assert.Equal("8 9 12 13 14 15 ", _testObject.InOrder());
        }

        [Fact]
        public void _testObject_DeleteNode_MonkeyTesting()
        {
            _testObject.Insert(10);
            _testObject.Insert(9);
            _testObject.Insert(12);
            _testObject.Insert(8);
            _testObject.Insert(14);
            _testObject.Insert(13);
            _testObject.Insert(15);

/*
                10
               /  \
              9    12
             /       \
            8         14
                      / \
                     13  15
*/                                 

            Assert.True(_testObject.Delete(10));

/*
                   12
                   / \
                  9   14
                 /    / \
                8    13  15
*/   
            Assert.Equal("8 9 12 13 14 15 ", _testObject.InOrder());

            Assert.True(_testObject.Delete(8));

/*
                   12
                   / \
                  9   14
                      / \
                     13  15
*/

            Assert.Equal("9 12 13 14 15 ", _testObject.InOrder());

            Assert.True(_testObject.Delete(12));

/*
                   13
                   / \
                  9   14
                        \
                         15
*/

            Assert.Equal("9 13 14 15 ", _testObject.InOrder());

            Assert.True(_testObject.Delete(13));

/*
                   14
                   / \
                  9   15
*/

            Assert.Equal("9 14 15 ", _testObject.InOrder());

            Assert.False(_testObject.Delete(131));
/*
                   14
                   / \
                  9   15
*/

            Assert.True(_testObject.Delete(14));

/*
                   15
                   / 
                  9   
*/

            Assert.Equal("9 15 ", _testObject.InOrder());

            Assert.True(_testObject.Delete(9));

/*
                   15
                   
                  
*/

            Assert.Equal("15 ", _testObject.InOrder());

            Assert.Equal(1, _testObject.Find(15));
            Assert.Equal(-1, _testObject.Find(101));

            Assert.True(_testObject.Delete(15));
/*
                   now there is no elements               
*/
            Assert.Equal("", _testObject.InOrder());
        }

        [Fact]
        public void _testObject_SameGenerationNodes()
        {
            _testObject.Insert(10);
            _testObject.Insert(9);
            _testObject.Insert(12);
            _testObject.Insert(8);
            _testObject.Insert(14);
            _testObject.Insert(13);
            _testObject.Insert(15);
            _testObject.Insert(11);

            Assert.Equal("8 9 10 11 12 13 14 15 ", _testObject.InOrder());

            /*

                10
                /\
               9  12
              /   / \
             8   11  14
                     / \
                    13  15

            */

            Assert.Equal("8 11 14 ", _testObject.PrintSiblings(14));
            Assert.Equal("10 ", _testObject.PrintSiblings(10));
            Assert.Equal("13 15 ", _testObject.PrintSiblings(13));
            Assert.Equal("9 12 ", _testObject.PrintSiblings(9));
        }
    }
}
