-- Furkan Sağlam – 2526630
-- I read and accept the submission rules and the extra rules specified in each question. This is my own work that is done by myself only.



data Tree  = Node (String, Integer) [Tree] | Leaf (String, Integer) deriving (Eq, Show, Ord) 

makeLeaf (x,y) =  Leaf (x,y)

makeNode (Leaf (x, y)) list = [Node (x, y) list]


makeLeaflist [] = []
makeLeaflist ((x,y):xs) = [makeLeaf (x,y)] ++ makeLeaflist (xs)

reverselist [x] = [x]
reverselist (x:xs) = reverselist xs ++ [x]

unitree list1 list2 = reverseunitree (makeLeaflist (reverselist list1)) ( reverselist list2) []

makedd list1 list2 = list1 ++ list2


reverseunitree [Leaf (x, y)] [z] list = Node (x, y) list
reverseunitree ((Leaf (x, y) : xs)) (z:zs) list = if z > 0 then reverseunitree xs zs (((makeNode (Leaf (x, y)) (take z list)) ) ++ (drop z list))
                                                    else reverseunitree xs zs  (makedd [Leaf (x, y)] list)


sumtree [] = 0
sumtree [Leaf (x,y)] =  y
sumtree (Leaf (x,y):xs) = y + sumtree xs
sumtree [Node (x,y) [tree]] = y + sumtree [tree]
sumtree (Node (x,y) trees : xs) = y + sumtree trees + sumtree xs


searchtree [Leaf (x,y)] z = if z == x then y else 0
searchtree [] z = 0
searchtree (Leaf (x, y) : trees) z = if z == x then y else searchtree trees z
searchtree (Node (x, y) trees : xs) z = if z == x then y + sumtree (trees) else ((searchtree xs z) + (searchtree trees z))

sectionsize  (Node (y,c) tree) x =  if x == y then c + sumtree tree else searchtree tree x

searchtreeNode [] [Node (y,c) t] z = "" 
searchtreeNode (Node (x,d) tree :nodes) [Node (y,c) t] z = if  x == z then y else (searchtreeNode nodes [Node (y,c) t]  z) ++ (searchtreeNode tree [Node (x,d) tree] z)
searchtreeNode (Leaf (x, d) : trees) [Node (y,c) tree] z = if x == z then y else searchtreeNode trees [Node (y,c) tree] z


managingentity (Node (y,c) tree) x = searchtreeNode tree [Node (y,c)tree] x


control [] x = False
control (Node (y,c) tree: nodes) x  = if x == y then True else  ((control tree x )||(control nodes x))
control (Leaf (y,c) : tree) x =  if x == y then True else control tree x

searchtreelist [] x = []
searchtreelist (Leaf (y,c) : trees) x = [] ++ searchtreelist trees x
searchtreelist (Node (y,c) tree: nodes) x = if (control tree x) == True  then [y] ++ (searchtreelist tree x) else if (control nodes x) == True then [y] ++ (searchtreelist nodes x) else (searchtreelist nodes x)

managelist (Node (y,c) tree) x = if x == y then [] else reverselist ([y] ++ searchtreelist tree x)
