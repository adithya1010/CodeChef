/* Question:
Akash is stuck in a *N*×*N* grid, where *N* is **odd**. The rows of the grid are numbered 1 to *N* from top to bottom, and the columns are numbered 1 to *N* from left to right. The cell at the intersection of the *i*-th row and *j*-th column will be denoted (*i*,*j*)

.

The grid has a unique center cell — ((*N*+1)/2,(*N*+1)/2)

. For example, when *N*=5 the center is cell (3,3)

.

Akash is currently at cell (*xs*,*ys*)

. He would like to reach the exit of the grid, which is located at the center. **It is guaranteed that (*xs*,*ys*)**

**is not the center.**

Suppose Akash is at cell (*x*,*y*)

. He can make the following movements:

- He can freely move along diagonals, i.e, to cells (*x*−1,*y*−1),(*x*−1,*y*+1),(*x*+1,*y*−1),(*x*+1,*y*+1)
- · He can move one step horizontally or vertically with the cost of 1 gold coin, i.e, to cells (*x*,*y*−1),(*x*,*y*+1),(*x*−1,*y*),(*x*+1,*y*)
-

Note that Akash is not allowed to make a move that will take him out of bounds of the grid.

Akash would like to minimize the number of coins required to reach the center. Please help him find this number. */

#include<iostream>
using namespace std;

int main(){
        int l,n,x,y;

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    cin>>l>>n>>x>>y;
    int center;
    center=(n+1)/2;
    if((x+y)%2==0)
    {
        cout<<"0";
    }
    else
    {
        cout<<"1";
    }

    }
}
