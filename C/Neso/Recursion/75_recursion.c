#include<stdio.h>
int fun(int n)
{
    if(n==1)
    return 1;
    else
    return 1 + fun(n-1);
}
int main()
{
    int a = 3;
    printf("%d",fun(a));
}
//used in activation record of course
/*


When `fun(3)` is called, here's how the activation records stack up:

1. **Initial Call:** `fun(3)`
   - Parameter `n = 3`
   - Enters the function, evaluates `n == 1` (false), so goes to `else` part.
   - Calls `fun(2)` and waits for its return value.

2. **First Recursive Call:** `fun(2)`
   - Parameter `n = 2`
   - Enters the function, evaluates `n == 1` (false), so goes to `else` part.
   - Calls `fun(1)` and waits for its return value.

3. **Second Recursive Call:** `fun(1)`
   - Parameter `n = 1`
   - Enters the function, evaluates `n == 1` (true), so returns `1`.

Now, let's backtrack and complete the activations:

- **Return from `fun(1)`:**
  - `fun(1)` returns `1`, so the call in `fun(2)` becomes `1 + 1`, and returns `2`.

- **Return from `fun(2)`:**
  - `fun(2)` returns `2`, so the call in `fun(3)` becomes `1 + 2`, and returns `3`.

- **Return from `fun(3)`:**
  - `fun(3)` returns `3`.

So, `fun(3)` eventually returns `3`, which is then printed in the `main` function. 

Activation Record for `fun(3)`:

```
|---------------------|
|     Parameters      |
|---------------------|
|         n           |
|---------------------|
|    Return Address   |
|  (Address to return|
|   after function    |
|    call completes)  |
|---------------------|
```

This would be the structure for each activation of `fun`,
 with the parameters and return address being adjusted accordingly for each call.
*/
