**Book Arrangement**
<br>
[ Memory: 64 MB, CPU: 4 sec ]

Librarian Lily is organizing a vast 2D grid of bookshelves (imagine a huge grid of cubbies). Initially, the shelves are empty.

Lily will add N (1 ≤ N ≤ 100,000) books to the shelves one by one. The ith book will occupy a cubby (xi,yi) that is distinct from the cubbies occupied by all other books (0 ≤ xi,yi ≤ 1,000).

A book is considered "well-placed" if it is horizontally or vertically adjacent to exactly three other books. Lily wants to keep track of the well-placed books on the shelf. Every time Lily places a book on the shelf, output the total number of well-placed books currently on the shelf.
<br>
<br>
INPUT FORMAT:

Line 1: One integer: N.
Lines 2…N+1: Two integers: The location of the newest book placed on the shelf (xi, yi). It is guaranteed that this pair is distinct from all previous pairs.

OUTPUT FORMAT:

Lines 1…N: Line i contains the number of well-placed books on the shelf after i books have been placed.
<br>
<br>
SAMPLE INPUT:

    5
    0 1
    1 0
    1 1
    2 1
    1 2
<br>
SAMPLE OUTPUT:

    0
    0
    0
    1
    0
<br>
Explanation: When four books have been added, the book in position (1,1) is considered well-placed as it is surrounded by exactly 3 books. When the 5th book is added, the book in position (1,1) is no longer well-placed as it is now surrounded by 4 books. 

<br>
<br>
MODE: normal<br>
Language: cpp<br>
