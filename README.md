# PageRank-Algorithm
In this part, will explain the code written, how it works and show its results after several iterations.
Variable description:
rank - contains the rank of the node.
in_no - contains the number of nodes pointing to the respective node.
out_no - contains the number of nodes to which the respective node points to.
in - contains all the nodes that point to the respective node
out - contains all the nodes to which the respective node points to
all - contains all the nodes.


The initialize () function initializes the initial value of each node.

The rank is set to 0.1 as the initial rank of each node has to be equal, which would be 1/10.

Then we add the values to correspond with the graph shown above.

Now, we have the graph in our system in the form of these nodes.

Working : 
The code runs 10 iteration in whichwe apply the PageRank algorithm as follows:
Each iteration improves the result, more the number of iterations, more is the reliability of the result.

The result gives the rank in the form of a fraction.
The sum of all these fractions is always found out to be one after every iteration.


![Screenshot (38)](https://github.com/Ananya05iit/PageRank-Algorithm/assets/118293727/5dea7998-a82b-497a-a631-698360be71af)
