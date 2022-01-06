/*Recently, Devendra went to Goa with his friends. Devendra is well known for not following a budget.

He had Rs. *Z*

at the start of the trip and has already spent Rs. *Y* on the trip. There are three kinds of water sports one can enjoy, with prices Rs. *A*, *B*, and *C*

. He wants to try each sport at least once.

If he can try all of them at least once output YES, otherwise output NO.

**Input Format**

- The first line of input contains a single integer *T*

, denoting the number of test cases. The description of *T*

- test cases follows.
- Each test case consists of a single line of input containing five space-separated integers *Z*,*Y*,*A*,*B*,*C*
- .

**Output Format**

For each test case, print a single line containing the answer to that test case — YES if Devendra can try each ride at least once, and NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

**Constraints**

- 1≤*T*≤10
- · 104≤*Z*≤105
- · 0≤*Y*≤*Z*
- · 100≤*A*,*B*,*C*≤5000
-

**Sample Input 1**

3

25000 22000 1000 1500 700

10000 7000 100 300 500

15000 5000 2000 5000 3000

**Sample Output 1**

NO

YES

YES

**Explanation**

**Test Case 1:** After spending Rs. 22000

on the trip already, Devendra is left with Rs. 3000. The water sports cost a total of 1000+1500+700=3200

. So, he does not have enough money left to try all the watersports.

**Test Case 2:** After spending Rs. 10000

on the trip, he is left with Rs. 3000. The water sports cost a total of 100+300+500=900

. So, he has enough money to try all the watersports.

**Test Case 3:** After spending Rs. 5000

on the trip, he is left with Rs. 10000. The water sports cost a total of 2000+5000+3000=10000

. So, he still has enough money left to try all the watersports.

Author: [4★devendra7700](https://www.codechef.com/users/devendra7700)

Date Added: 26-12-2021

Time Limit: 1 secs

Source Limit: 50000 Bytes

Languages: CPP14, C, JAVA, PYTH 3.6, CPP17, PYTH, PYP3, CS2, ADA, PYPY, TEXT, PAS fpc, NODEJS, RUBY, PHP, GO, HASK, TCL, PERL, SCALA, LUA, kotlin, BASH, JS, LISP sbcl, rust, PAS gpc, BF, CLOJ, R, D, CAML, FORT, ASM, swift, FS, WSPC, LISP clisp, SQL, SCM guile, PERL6, ERL, CLPS, ICK, NICE, PRLG, ICON, COB, SCM chicken, PIKE, SCM qobi, ST, SQLQ, NEM */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t;
    cin>>t;
    while(t--){
        int z,y,a,b,c;
        cin>>z>>y>>a>>b>>c;
        int rem = z-y;
        if(rem>=a+b+c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;

}
