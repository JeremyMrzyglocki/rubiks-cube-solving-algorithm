# rubiks-cube-solving-algorithm
This is a project that I had almost forgotten, so when I found it again, I thought I might as well upload it on GitHub.

After my 2nd semester, I wanted to test my programming skills by applying the C code I learned at university. So, I started programming this highly inefficient Rubik's Cube solving algorithm. I worked on it for three days in December 2021 and had a first functioning version. Later, on September 30th, 2022, I reworked parts of the code, added more PLL-algorithms, and implemented a way to use the terminal for input, allowing interaction with the code without directly typing the Rubik's Cube scramble as a chain of functions within the code (I just have to re-fix a bug and then update it into Github). There are many possible implementations and changes I could make. I will probably rewrite the entire code at some point in the future and include features such as generating random scrambles and providing statistics on the average move count for a specific algorithm. Additionally, similar to my Python letter pair trainer project, I really want to create a GUI for this.

The algorithm essentially mimics the process of solving the Rubik's Cube by using a limited set of smaller algorithms to swap specific pieces in the following order:

1) Cross
2) Inserting 4 pairs of F2L-pieces (first two layer pieces) using a key-holing concept
3) Orientation of the last layer
4) Permutation of the last layer

There are certain subsets (AUFs, ADFs, etc.) that I won't explain further, as they delve into more complex details.

Fun Fact: My current algorithm is so inefficient that if you give it a scrambled cube, it actually re-scrambles it by starting its usual solving-sequences that scramble the cube further until it is a solvable state for the program. But at least it gets the job done. Also there are no move-cancellations yet. When I rework the code this might be the very first tweak, probably reducing the move count by 10 or more moves.
