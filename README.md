# x_macro
Examples of and variations on the X Macro


## The what now??
The X macro is a very old but little-known trick in C that uses the preprocessor to align related and equally sized sets of data at compile time. An easy example (and the one I've used most often, personally) is the numberic values of logging levels to their string representations used in logging statements.

## Sounds easy, why isn't it everywhere?
It's not *hard* but it is a *macro* which are still considered with raised eyebrows by even seasoned C veterans. More specifically, it's *nested* macros. More *more* specifically it's an outer macro filled with a set of undefined inner macros. Said inner macros are then redefined in multiple different ways for each set of data to be aligned (though it's recommended to `#undef` after each redefinition is done with). It's easist to see for oneself so I've included examples in both C and C++, check out the `x_macro_*.*` files.

Specifically what I've done is mapped contiguous enums to their string representations (thank you [stringifier macro](https://gcc.gnu.org/onlinedocs/gcc-4.8.5/cpp/Stringification.html)).


## Ok there's some files that start with `xx_macro`?
Yeah far as I can tell I invented that? 
See, in the above examples where I mapped contiguous enums to their string representations, that works out cleanly because the strings get stored in a contiguous memory structure (array in c, vector in CPP) where it's easy to index into the desired string with the enum itself. But what about non-contiguous sets, like an enum where several non-contiguous values are assigned? Not a common use case but it was a fun puzzle to think about.

For C++ the solution is easy - just use a map instead of a vector. The enum becomes a key instead of an index but roughly the same amount of storage is used.

For C, where map is not available, it's not as easy. Writing a map implementaiton in C would be overkill. Creating an array with as many slots as the highest value of the non-contiguous enum would leave a bunch of unused memory and would be a waste.

It turns out the answer is *more macros*. Specifically using the X macro to create an extra set of data that is the *indeces* of where the value-names (to use the same example) would live in a contiguous array. With this extra set, a function macro can be created that maps the non-contiguous value enum to a contiguous index enum. I did this with stringifier's sibling built-in macro, the [concatenator macro](https://gcc.gnu.org/onlinedocs/gcc-4.8.5/cpp/Concatenation.html#Concatenation). 


## Doesn't seem like the most practical thing, though?
It's not! I mostly came up with the XX Macro as a puzzle to solve. 


## I want to know more about the X Macro!
Like a lot of things in life, the [Wikipedia article](Like a lot of things in life, reading the Wikipedia article on it isn't a bad place to start.) isn't a bad place to start.


## How do I see this code in action?
Clone this repo, `cd` into it, and `make run`.
