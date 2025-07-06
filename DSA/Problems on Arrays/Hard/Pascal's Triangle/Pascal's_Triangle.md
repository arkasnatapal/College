# What is Pascal's Triangle ?

Pascal's Triangle is a triangular array of numbers where each number is the sum of the two numbers directly above it.

Read More at - https://en.wikipedia.org/wiki/Pascal%27s_triangle

                       1
                   1       1
               1       2        1
           1       3       3       1
        1      4       6        4       1 
    1      5       10      10       5       1        

[Visualize](PascalTriangleAnimated2.gif)

so in Interview there are Three types of questions that can be asked
 
 ### 1. Rows and columns are given and we have to find the element at that place 
    -----> For example - R=5 and c=3 then the answer is 6
[Link To Question Type 1](./Rows_Columns_Element_Find.cpp)


 ### 2. Print any Nth row of the Pascal triangle.
    ------> For example - N=5   1 4 6 4 1
[Link To Question Type 2](./NthRowOfPascalTriangle.cpp)

 ### 3. Print the entire Pascal triangle where the N is given.
    ------> For example - Above Pascal's Triangle if the given N=6