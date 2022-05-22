using System;

namespace DataStructures.AvlTreeProj
{
    public class Node
    {
        public Node lptr { get; set; }
        public int info { get; set; }
        public Node rptr { get; set; }
    }

    public class AvlTreeDemo
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

            int balanceFactor = BalanceFactor(node);
            
            // Left Left Case then rotate to right
            if (balanceFactor > 1 && info < node.lptr.info)
                return RRRotation(node);
 
            // Right Right Case then rotate to left
            if (balanceFactor < -1 && info > node.rptr.info)
                return LLRotation(node);
 
            // Left Right Case, first rotate left, then rotate right
            if (balanceFactor > 1 && info > node.lptr.info)
            {
                return LRRotation(node);
            }
 
            // Right Left Case, first rotate right, then rotate left 
            if (balanceFactor < -1 && info < node.rptr.info)
            {
                return RLRotation(node);
            }

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
            {
                return root;
            }

            if (info > root.info)
            {
                root.rptr = Delete(root.rptr, info);
            }
            else if (info < root.info)
            {
                root.lptr = Delete(root.lptr, info);
            }
            else
            {
                if (root.lptr == null && root.rptr == null)
                {
                    root = null;
                }
                else if (root.lptr == null)
                {
                    root = root.rptr;
                }
                else if (root.rptr == null)
                {
                    root = root.lptr;
                }
                else
                {
                    Node temp = GetLeftLeafNode(root.rptr);
                    root.info = temp.info;
                    root.rptr = Delete(root.rptr, temp.info);
                }
                IsNodeDeleted = true;
            }

            if (root != null)
            {
                int balanceFactor = BalanceFactor(root);
                // LL Case, but we rotate Right
                if (balanceFactor > 1 && BalanceFactor(root.lptr) >= 0)
                    return RRRotation(root);
                // LR Case but we rotate Left then Right
                if (balanceFactor > 1 && BalanceFactor(root.lptr) < 0)
                    return LRRotation(root);
                // RR Case, but we rotate to Left
                if (balanceFactor < -1 && BalanceFactor(root.rptr) <= 0)
                    return LLRotation(root);
                // RL Case, but we rotate Right then Left
                if (balanceFactor < -1 && BalanceFactor(root.rptr) > 0)
                    return RLRotation(root);
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

        #region Rotations

        private Node LRRotation(Node node)
        {
            node.lptr = LLRotation(node.lptr);
            return RRRotation(node);
        }

        private Node LLRotation(Node node)
        {
            Node temp = node.rptr;
            node.rptr = temp.lptr;
            temp.lptr = node;

            return temp;
        }

        private Node RLRotation(Node node)
        {
            node.rptr = RRRotation(node.rptr);
            return LLRotation(node);
        }

        private Node RRRotation(Node node)
        {
            Node temp = node.lptr;
            node.lptr = temp.rptr;
            temp.rptr = node;
            return temp;
        }

        #endregion
        
        #region Get Height

        public int GetHieght(int info)
        {
            return Height(FindNode(root, info));
        }

        private Node FindNode(Node root, int ele)
        {
            if (root == null)
                return null;
            if (root.info == ele)
                return root;
            else if (ele > root.info)
                return FindNode(root.rptr, ele);
            else
                return FindNode(root.lptr, ele);
        }

        private int Height(Node root)
        {
            if (root == null)
            {
                return -1;
            }
            else
            {
                return 1 + Math.Max(Height(root.lptr), Height(root.rptr));
            }
        }

        #endregion

        #region Balance Factor

        public int BalanceFactor(Node root)
        {
            if (root == null)
            {
                root = this.root;
            }

            return Height(root.lptr) - Height(root.rptr);
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
                    InOrder(root.lptr);

                if (root.rptr != null)
                    InOrder(root.rptr);

                Order = Order + $"{root.info} ";
            }
        }

        #endregion
    
    }
}