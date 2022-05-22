using System;
using Xunit;

namespace DataStructures.AvlTreeProj.Tests
{
    public class AvlTreeDemoSpec
    {
        AvlTreeDemo _testObject = new();

        [Fact]
        public void Insert_ShouldBalanceTree_When_RLRotation()
        {
            _testObject.Insert(100);
            _testObject.Insert(90);
            _testObject.Insert(120);
            _testObject.Insert(80);
            _testObject.Insert(140);
            _testObject.Insert(130);

            /*
                        100
                        /  \
                       90  120  -- RL
                      /      \           
                     80       140
                              /
                             130

                        100
                        /  \
                       90  120  -- RR
                      /      \           
                     80      130
                               \
                                140 

                        100
                        /  \
                       90  130
                      /    /  \           
                     80   120  140
            */
            Assert.Equal("80 90 100 120 130 140 ", _testObject.InOrder());
            Assert.Equal(0, _testObject.GetHieght(80));
            Assert.Equal(0, _testObject.GetHieght(120));
            Assert.Equal(0, _testObject.GetHieght(140));
            Assert.Equal(1, _testObject.GetHieght(90));
            Assert.Equal(1, _testObject.GetHieght(130));
            Assert.Equal(2, _testObject.GetHieght(100));
        }

        [Fact]
        public void Insert_ShouldBalanceTree_When_RLCaseAndRootHasLeftAndRightTreeHadChildren()
        {
            _testObject.Insert(100);
            _testObject.Insert(90);
            _testObject.Insert(120);
            _testObject.Insert(80);
            _testObject.Insert(140);
            _testObject.Insert(130);

            /*
                        100
                        /  \
                       90  120  -- RL
                      /      \           
                     80       140
                              /
                             130

                             Rotate Right 

                             node -- 140
                     130 --  temp = node.lptr
                             node.lptr = temp.rptr
                             temp.rptr = node;
                             return temp;

                        100
                        /  \
                       90  120  -- RR
                      /      \           
                     80      130
                               \
                                140 
                                
                                then Rotate Left

                             node -- 120
                      130 -- temp = node.rptr
                             node.rptr = temp.lptr
                             temp.lptr = node;

                             return temp;

                        100
                        /  \
                       90  130
                      /    /  \           
                     80   120  140
            */
            _testObject.Insert(110);
            _testObject.Insert(125);
            _testObject.Insert(135);
            _testObject.Insert(145);

            /*
                         100  (2 - 3 = -1)
                        /   \
                       90   130
                      /    /    \           
                     80   120    140
                         /  \    /  \   
                        110 125 135  145
            */

            _testObject.Insert(150);

            /*
                         100  (2 - 4 = -2)
                        /   \
                       90   130
                      /    /    \           
                     80   120    140
                         /  \    /  \   
                        110 125 135  145
                                       \
                                        150
node
                         100  
                        /   \
                       90   130
                      /    /    \           
                     80   120    140
                         /  \    /  \   
                        110 125 135  145
                                       \
                                        150
node.lptr  
                       90   
                      /                   
                     80       
node.rptr
                            130
                           /    \           
                          120    140
                         /  \    /  \   
                        110 125 135  145
                                       \
                                        150
node.rptr.lptr  
                            120  
                            /  \  
                          110   125

            Node temp = node.rptr;  130 element address
            node.rptr = temp.lptr;

                         100  (now the node is this)
                        /   \
                       90   120
                      /    /   \             
                     80   110   125   

                        130 (temp is this)
                        /    \           
                      120    140
                      /  \    /  \   
                    110 125 135  145
                                    \
                                    150

            temp.lptr = node;

                         130 
                        /    \           
                      100     140
                      /  \    /   \   
                    90   120 135   145
                    /    /  \         \
                   80   110  125       150

            return temp;130 element address
            */

            Assert.Equal("80 90 100 110 120 125 130 135 140 145 150 ", _testObject.InOrder());
            Assert.Equal(0, _testObject.GetHieght(80));
            Assert.Equal(0, _testObject.GetHieght(110));
            Assert.Equal(0, _testObject.GetHieght(125));
            Assert.Equal(0, _testObject.GetHieght(150));
            Assert.Equal(1, _testObject.GetHieght(90));
            Assert.Equal(1, _testObject.GetHieght(120));
            Assert.Equal(0, _testObject.GetHieght(135));
            Assert.Equal(1, _testObject.GetHieght(145));
            Assert.Equal(2, _testObject.GetHieght(100));
            Assert.Equal(2, _testObject.GetHieght(140));
            Assert.Equal(3, _testObject.GetHieght(130));
        }

        [Fact]
        public void Insert_ShouldBalanceTree_When_LRRotation()
        {
            _testObject.Insert(100);
            _testObject.Insert(90);
            _testObject.Insert(120);
            _testObject.Insert(80);
            _testObject.Insert(140);
            _testObject.Insert(85);

            /*
                        100
                        /\
               LR --  90  120  
                      /    \           
                     80     140
                       \
                        85

                        100
                        /  \
               LL --  90    120  
                      /       \           
                     85        140
                     /
                    80
                        100
                        /\
                      85  120  
                      / \   \           
                     80  90  140
            */
            Assert.Equal("80 85 90 100 120 140 ", _testObject.InOrder());
            Assert.Equal(0, _testObject.GetHieght(80));
            Assert.Equal(0, _testObject.GetHieght(90));
            Assert.Equal(0, _testObject.GetHieght(140));
            Assert.Equal(1, _testObject.GetHieght(85));
            Assert.Equal(1, _testObject.GetHieght(120));
            Assert.Equal(2, _testObject.GetHieght(100));
        }

        [Fact]
        public void Insert_ShouldBalanceTree_When_LRRotationAndRightAndLeftChildsOrNotNull()
        {
            _testObject.Insert(100);
            _testObject.Insert(90);
            _testObject.Insert(120);
            _testObject.Insert(80);
            _testObject.Insert(140);
            _testObject.Insert(85);

            /*
                        100
                        /  \
               LR --  90    120  
                      /       \           
                     80        140
                       \
                        85

                        100
                        /  \
               LL --  90   120  
                      /      \           
                     85       140
                     /
                    80
                        100
                        /  \
                      85    120  
                      / \     \           
                     80  90    140
            */

            Assert.Equal("80 85 90 100 120 140 ", _testObject.InOrder());
            Assert.Equal(0, _testObject.GetHieght(80));
            Assert.Equal(0, _testObject.GetHieght(90));
            Assert.Equal(0, _testObject.GetHieght(140));
            Assert.Equal(1, _testObject.GetHieght(85));
            Assert.Equal(1, _testObject.GetHieght(120));
            Assert.Equal(2, _testObject.GetHieght(100));


            _testObject.Insert(75);
            _testObject.Insert(83);
            _testObject.Insert(87);
            _testObject.Insert(95);

            /*
                        100  (3 - 2 = 1)
                        /  \
                       85   120  
                      /  \     \           
                     80   90    140
                    / \   / \                 
                  75  83 87  95                                                                                                         
            */

            _testObject.Insert(70);

            /*
                        100  (4 - 2 = 2)
                        /  \
                       85   120  
                      /  \     \           
                     80   90    140
                    / \   / \                 
                  75  83 87  95
                 /
                70                                                                                                          

node
                        100
                        /  \
                       85   120  
                      /  \     \           
                     80   90    140
                    / \   / \                 
                  75  83 87  95
                 /
                70  
node.rptr  
                       120   
                          \
                           140      
node.lptr
                       85     
                      /  \                
                     80   90    
                    / \   / \                 
                  75  83 87  95
                 /
                70  
node.lptr.rptr  
               
                   90    
                   / \                 
                  87  95 

            Node temp = node.lptr;  85 element address
            node.lptr = temp.rptr;

                         100  (now the node is this)
                        /   \
                       90   120
                      /  \     \             
                     87   95    140   

                       85 (temp is this)    
                      /  \                
                     80   90    
                    / \   / \                 
                  75  83 87  95
                 /
                70  

            temp.rptr = node;            
                                                         
                       85    
                      /  \                
                    80    100    
                   / \    /  \                 
                  75  83 90   120
                 /       / \     \
                70      87  95    140

            return temp;85 element address
            */

            Assert.Equal("70 75 80 83 85 87 90 95 100 120 140 ", _testObject.InOrder());
            Assert.Equal(0, _testObject.GetHieght(70));
            Assert.Equal(0, _testObject.GetHieght(87));
            Assert.Equal(0, _testObject.GetHieght(95));
            Assert.Equal(0, _testObject.GetHieght(140));
            Assert.Equal(0, _testObject.GetHieght(83));

            Assert.Equal(1, _testObject.GetHieght(75));
            Assert.Equal(1, _testObject.GetHieght(90));
            Assert.Equal(1, _testObject.GetHieght(120));

            Assert.Equal(2, _testObject.GetHieght(80));
            Assert.Equal(2, _testObject.GetHieght(100));

            Assert.Equal(3, _testObject.GetHieght(85));
        }

        [Fact]
        public void Insert_ShouldBalanceTree_When_RRRotation()
        {
            _testObject.Insert(100);
            _testObject.Insert(90);
            _testObject.Insert(120);
            _testObject.Insert(80);
            _testObject.Insert(140);
            _testObject.Insert(150);

            /*
                        100
                        / \
                      90   120  -- RR
                      /     \           
                     80      140
                               \
                                150

                        100
                       /   \
                      90   140 
                      /    /  \           
                     80   120  150
            */
            Assert.Equal("80 90 100 120 140 150 ", _testObject.InOrder());
            Assert.Equal(0, _testObject.GetHieght(80));
            Assert.Equal(0, _testObject.GetHieght(120));
            Assert.Equal(0, _testObject.GetHieght(150));
            Assert.Equal(1, _testObject.GetHieght(90));
            Assert.Equal(1, _testObject.GetHieght(140));
            Assert.Equal(2, _testObject.GetHieght(100));
        }

        [Fact]
        public void Insert_ShouldBalanceTree_When_LLRotation()
        {
            _testObject.Insert(100);
            _testObject.Insert(90);
            _testObject.Insert(120);
            _testObject.Insert(80);
            _testObject.Insert(140);
            _testObject.Insert(70);

            /*
                        100
                        / \
              LL--    90   120  
                      /      \           
                     80      140
                    /
                   70

                        100
                        / \
                      80   120  
                      /\     \           
                     70 90    140
            */
            Assert.Equal("70 80 90 100 120 140 ", _testObject.InOrder());
            Assert.Equal(0, _testObject.GetHieght(70));
            Assert.Equal(0, _testObject.GetHieght(90));
            Assert.Equal(0, _testObject.GetHieght(140));
            Assert.Equal(1, _testObject.GetHieght(80));
            Assert.Equal(1, _testObject.GetHieght(120));
            Assert.Equal(2, _testObject.GetHieght(100));
        }

        [Fact]
        public void Delete_ShouldBalanceTree_When_RLRotation()
        {
            _testObject.Insert(100);
            _testObject.Insert(90);
            _testObject.Insert(120);
            _testObject.Insert(80);
            _testObject.Insert(140);
            _testObject.Insert(130);

            /*
                        100
                        / \
                       90  120  -- RL
                      /     \           
                     80      140
                            /
                           130

                        100
                        / \
                       90  120  -- RR
                      /     \           
                     80      130
                              \
                              140  

                        100
                        / \
                      90  130
                      /   /  \           
                     80  120  140
            */
            Assert.Equal("80 90 100 120 130 140 ", _testObject.InOrder());
            Assert.Equal(0, _testObject.GetHieght(80));
            Assert.Equal(0, _testObject.GetHieght(120));
            Assert.Equal(0, _testObject.GetHieght(140));
            Assert.Equal(1, _testObject.GetHieght(90));
            Assert.Equal(1, _testObject.GetHieght(130));
            Assert.Equal(2, _testObject.GetHieght(100));

            _testObject.Insert(135);
            /*
                        100
                        / \
                      90  130
                      /   /  \           
                     80  120  140
                               /
                              135 
            */
            _testObject.Delete(120);
            /*
                        100
                        / \
                      90  130
                      /      \           
                     80       140
                               /
                              135 

                        100
                        / \
                      90  130
                      /      \           
                     80       135
                                \
                                 140 

                        100
                        / \
                      90  135
                      /   /  \           
                     80  130  140
            */
            Assert.Equal(0, _testObject.GetHieght(80));
            Assert.Equal(0, _testObject.GetHieght(130));
            Assert.Equal(0, _testObject.GetHieght(140));
            Assert.Equal(1, _testObject.GetHieght(90));
            Assert.Equal(1, _testObject.GetHieght(135));
            Assert.Equal(2, _testObject.GetHieght(100));
        }

        [Fact]
        public void Delete_ShouldBalanceTree_When_LRRotation()
        {
            _testObject.Insert(100);
            _testObject.Insert(90);
            _testObject.Insert(120);
            _testObject.Insert(80);
            _testObject.Insert(140);
            _testObject.Insert(85);

            /*
                        100
                        / \
               LR --  90   120  
                      /      \           
                     80       140
                       \
                        85

                        100
                        / \
               LL --  90   120  
                      /      \           
                     85       140
                     /
                    80
                        100
                        /  \
                      85    120  
                      / \     \           
                     80  90    140
            */
            Assert.Equal("80 85 90 100 120 140 ", _testObject.InOrder());
            Assert.Equal(0, _testObject.GetHieght(80));
            Assert.Equal(0, _testObject.GetHieght(90));
            Assert.Equal(0, _testObject.GetHieght(140));
            Assert.Equal(1, _testObject.GetHieght(85));
            Assert.Equal(1, _testObject.GetHieght(120));
            Assert.Equal(2, _testObject.GetHieght(100));

            _testObject.Insert(83);
            /*
                        100
                        / \
                      85  120  
                      / \   \           
                     80  90  140
                      \
                       83
            */
            _testObject.Delete(90);
            /*
                        100
                        / \
               LR--    85  120  
                      /     \           
                     80      140
                      \
                       83

                        100
                        / \
               LL--    85  120  
                      /     \           
                     83      140
                     /
                    80

                        100
                        / \
                       83  120  
                      /  \    \           
                     80  85   140
            */
            Assert.Equal(0, _testObject.GetHieght(80));
            Assert.Equal(0, _testObject.GetHieght(85));
            Assert.Equal(0, _testObject.GetHieght(140));
            Assert.Equal(1, _testObject.GetHieght(83));
            Assert.Equal(1, _testObject.GetHieght(120));
            Assert.Equal(2, _testObject.GetHieght(100));
        }

        [Fact]
        public void Delete_ShouldBalanceTree_When_RRRotation()
        {
            _testObject.Insert(100);
            _testObject.Insert(90);
            _testObject.Insert(120);
            _testObject.Insert(80);
            _testObject.Insert(140);
            _testObject.Insert(150);

            /*
                        100
                        /  \
                      90   120  -- RR
                      /      \           
                     80      140
                               \
                               150

                        100
                        /  \
                      90   140  
                      /    / \           
                     80   120 150
            */
            Assert.Equal("80 90 100 120 140 150 ", _testObject.InOrder());
            Assert.Equal(0, _testObject.GetHieght(80));
            Assert.Equal(0, _testObject.GetHieght(120));
            Assert.Equal(0, _testObject.GetHieght(150));
            Assert.Equal(1, _testObject.GetHieght(90));
            Assert.Equal(1, _testObject.GetHieght(140));
            Assert.Equal(2, _testObject.GetHieght(100));

            _testObject.Insert(160);

            /*
                        100
                        / \
                      90  140  
                      /   / \           
                     80  120 150

                        100
                        / \
                      90  140  
                      /   / \           
                     80  120 150
                               \ 
                                160
            */

            _testObject.Delete(120);

            /*
                        100
                        / \
                      90  140  -- RR
                      /     \           
                     80      150
                               \ 
                                160

                        100
                        / \
                      90  150  
                      /   /  \           
                     80 140  160
            */

            Assert.Equal(0, _testObject.GetHieght(80));
            Assert.Equal(0, _testObject.GetHieght(140));
            Assert.Equal(0, _testObject.GetHieght(160));
            Assert.Equal(1, _testObject.GetHieght(90));
            Assert.Equal(1, _testObject.GetHieght(150));
            Assert.Equal(2, _testObject.GetHieght(100));
        }

        [Fact]
        public void Delete_ShouldBalanceTree_When_LLRotation()
        {
            _testObject.Insert(100);
            _testObject.Insert(90);
            _testObject.Insert(120);
            _testObject.Insert(80);
            _testObject.Insert(140);
            _testObject.Insert(70);

            /*
                        100
                        / \
              LL--    90  120  
                      /    \           
                     80     140
                    /
                   70

                        100
                        / \
                      80  120  
                      /\    \           
                     70 90   140
            */
            Assert.Equal("70 80 90 100 120 140 ", _testObject.InOrder());
            Assert.Equal(0, _testObject.GetHieght(70));
            Assert.Equal(0, _testObject.GetHieght(90));
            Assert.Equal(0, _testObject.GetHieght(140));
            Assert.Equal(1, _testObject.GetHieght(80));
            Assert.Equal(1, _testObject.GetHieght(120));
            Assert.Equal(2, _testObject.GetHieght(100));

            _testObject.Insert(60);

            /*
                        100
                        / \
                      80  120  
                      /\    \           
                     70 90   140
                    /
                   60
            */

            _testObject.Delete(90);

            /*
                        100
                        / \
                      80  120  
                      /     \           
                     70      140
                    /
                   60

                        100
                        / \
                       70  120  
                      /  \   \           
                     60   80  140
            */

            Assert.Equal(0, _testObject.GetHieght(60));
            Assert.Equal(0, _testObject.GetHieght(80));
            Assert.Equal(0, _testObject.GetHieght(140));
            Assert.Equal(1, _testObject.GetHieght(70));
            Assert.Equal(1, _testObject.GetHieght(120));
            Assert.Equal(2, _testObject.GetHieght(100));
        }
    }
}
