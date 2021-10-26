# Dorothy

This programming language helps you to expand your project.

## Getting Started

You can write the follow code to calculate `1+2`.
```:
func main() {
  return 1 + 2;
}
```

### Installing

Clone this repository, enter the directory and type follow command on Terminal to make library.
```:
cd dorothy
mkdir bin script obj
./test.sh
```

Then, you can find `compiler` and `cpu`.

```:test.txt
func main() {
  return 1 + 2;
}
```

Finally, type follow codes to run script.

```:
./compiler test.txt test
./cpu test.bin
```

## Features
### Variables
Define a variable below:
```:
int a;
```
*only integer currently.*

Also, you can use addressive variables(type: integer) with `*`, `&`
```:
int a;
int b = &a;
```

### Statements
You can use `if`, `for`, `while`, `return`.

### Function definition
```:
func fib(int n) {
  if(n < 2) {
    return n;
  } else {
    return fib(n - 1) + fib(n - 2);
  }
}
```

#### Built-in function
You can use Built-in functions to output to console(such as display value to console, and so on) by below codes:
```:
import print
```

Now, you can use below:
|function name|description|
|----|----|
|`print`|output argument value as **interger**|
|`put`|output argument value as **character**|
|`nl`|output new line|

## Running the tests
Explain how to run the automated tests for this system

## Versioning
We use [SemVer](http://semver.org/) for versioning.

## Authors

* **tomoya** - *Initial work* - [tombeecreator](https://github.com/tombeecreator/)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details
