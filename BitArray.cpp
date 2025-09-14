#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
I hate when they make questions more convoluted than they need to be on purpose. 
Just because a question is easy to answer doesnt mean you should go out of your way to make it difficult to understand.

I got chatgpt to translate what they want:

You’re given four numbers (N, S, P, Q). Use them to make a sequence with this rule:

First number is S mod 2^31.

Each next number = (previous * P + Q) mod 2^31.

Now, from the first N numbers you generate, just count how many are different and print that number.

When the problem says “mod 2³¹”, it means you take the remainder after dividing by 2^31.

2^31 = 2147483648.

So “x mod 2³¹” means “the remainder when x is divided by 2147483648.”

For example:

5 mod 2^31 = 5 (because 5 is smaller).

2147483649 mod 2^31 = 1.

It’s just a way of keeping all the numbers inside the range 0 … 2147483647 (like wrapping around once you hit the max).

*/

// Jeeezus christ, ok, I think I have what I need to start.

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
