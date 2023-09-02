# PageRank-Algorithm
This part, will explain the code written, how it works, and show its results after several iterations.
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
The code runs 10 iterations in which we apply the PageRank algorithm as follows:
Each iteration improves the result, the more iterations, the greater the reliability of the result.

The result gives the rank in the form of a fraction.
The sum of all these fractions is always found out to be one after every iteration.


![Screenshot (38)](https://github.com/Ananya05iit/PageRank-Algorithm/assets/118293727/5dea7998-a82b-497a-a631-698360be71af)

It is evident from the graph that C and D are the most important websites as a lot of other nodes point to them. So, they must have a high rank.

The algorithm also follows the same and gives C and D the highest rank.

But as we see from the output, the algorithm also gives a high rank to H and J, even though from the graph, both of these nodes may not seem important as there are not many nodes pointing to H and J. 

This can be explained by observing that C and D, the most important nodes point to H and J. This means the most trusted websites trust H and J. Therefore, they must be given a higher rank. The algorithm includes this fact and gives a relatively higher rank to both H and J.

The algorithm gives a rank to all the websites and we can display them in a search engine in descending order of their ranks.
