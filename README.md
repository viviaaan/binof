# Convert a whole number to binary

A small C program that converts a whole number to binary.

I learnt how to easily compute the result from [this binary converter](https://github.com/mbadger88/BinaryToDecimalConverter)(a python program by [@mbadger88](https://github.com/mbadger88)).

##### Note:
Compiling using `gcc` with the `-Wall` option warns about string overflow, because a char array is initiated with `i` elements and `i` is initialised to `0`.
It can be ignored as `i` is always incremented based on input.

#### To Do:
 - [X] Allow an argument as input
 - [ ] Compute decimal values
