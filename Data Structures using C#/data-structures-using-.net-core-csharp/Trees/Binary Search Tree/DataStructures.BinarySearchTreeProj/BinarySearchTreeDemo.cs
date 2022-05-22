using System;

namespace DataStructures.BinarySearchTreeProj
{
    public class Node
    {
        public Node lptr { get; set; }
        public int info { get; set; }
        public Node rptr { get; set; }
    }

    public class BinarySearchTreeDemo
    {
        private string Order = string.Empty;
        private bool IsNodeDeleted = false;
        private Node root;

        #region Insert

        public void Insert(int info)
        {
            root = Insert(root, info);
        }

        private Node Insert(Node node, int info)
        {
            if (node == null)
            {
                Node newNode = new Node();
                newNode.info = info;
                return newNode;
            }

            if (info > node.info)
            {
                node.rptr = Insert(node.rptr, info);
            }
            else if (info < node.info)
            {
                node.lptr = Insert(node.lptr, info);
            }
            else
                return node;
            
            return node;
        }

        #endregion

        #region Delete

        public bool Delete(int info)
        {
            IsNodeDeleted = false;
            root = Delete(root, info);
            return IsNodeDeleted;
        }

        private Node Delete(Node root, int info)
        {
            if (root == null)
                return root;

            if (info > root.info)
                root.rptr = Delete(root.rptr, info);
            else if (info < root.info)
                root.lptr = Delete(root.lptr, info);
            else
            {
                if (root.lptr == null && root.rptr == null)
                    root = null;
                else if (root.lptr == null)
                    root = root.rptr;
                else if (root.rptr == null)
                    root = root.lptr;
                else
                {
                    Node temp = GetLeftLeafNode(root.rptr);
                    root.info = temp.info;
                    root.rptr = Delete(root.rptr, temp.info);
                }
                IsNodeDeleted = true;
            }
            return root;
        }

        private Node GetLeftLeafNode(Node node)
        {
            Node temp = node;
            while (temp.lptr != null)
                temp = temp.lptr;
            return temp;
        }

        #endregion

        #region Check Element exists or not

        public int Find(int info)
        {
            return Find(root, info);
        }

        private int Find(Node root, int ele)
        {
            if (root == null)
                return -1;
            if (root.info == ele)
                return 1;
            else if (ele > root.info)
                return Find(root.rptr, ele);
            else
                return Find(root.lptr, ele);
        }

        #endregion

        #region PreOrder

        public string PreOrder()
        {
            Order = string.Empty;

            PreOrder(root);
            return Order;
        }

        private void PreOrder(Node root)
        {
            if (root != null)
            {
                Order = Order + $"{root.info} ";

                if (root.lptr != null)
                    PreOrder(root.lptr);

                if (root.rptr != null)
                    PreOrder(root.rptr);
            }
        }

        #endregion

        #region InOrder

        public string InOrder()
        {
            Order = string.Empty;
            InOrder(root);
            return Order;
        }

        private void InOrder(Node root)
        {
            if (root != null)
            {
                if (root.lptr != null)
                    InOrder(root.lptr);

                Order = Order + $"{root.info} ";

                if (root.rptr != null)
                    InOrder(root.rptr);
            }

        }

        #endregion

        #region PostOrder

        public string PostOrder()
        {
            Order = string.Empty;
            PostOrder(root);
            return Order;
        }

        private void PostOrder(Node root)
        {
            if (root != null)
            {
                if (root.lptr != null)
                    PostOrder(root.lptr);

                if (root.rptr != null)
                    PostOrder(root.rptr);

                Order = Order + $"{root.info} ";
            }
        }

        #endregion

        #region Print Siblings

        public string PrintSiblings(int ele)
        {
            Order = string.Empty;
            int desiredLevel = FindElementLevel(root, 0, ele);
            
            if(desiredLevel == -1)
            {
                return string.Empty;
            }

            PrintSiblingsUsingInOrder(root, 0, desiredLevel);
            return Order;
        }

        private void PrintSiblingsUsingInOrder(Node root, int level, int desiredLevel)
        {
            if (root != null)
            {
                PrintSiblingsUsingInOrder(root.lptr, level + 1, desiredLevel);
                if (level == desiredLevel)
                {
                    Order += root.info + " ";
                }
                PrintSiblingsUsingInOrder(root.rptr, level + 1, desiredLevel);
            }
        }

        #endregion

        #region Find Element Level

        public int FindElementLevel(int ele)
        {
            return FindElementLevel(root, 0, ele);
        }

        private int FindElementLevel(Node root, int level, int ele)
        {
            if (root != null)
            {
                if (ele == root.info)
                {
                    return level;
                }
                else if (ele > root.info)
                {
                    return FindElementLevel(root.rptr, level + 1, ele);
                }
                else
                {
                    return FindElementLevel(root.lptr, level + 1, ele);
                }
            }

            return -1;
        }

        #endregion
    }
}