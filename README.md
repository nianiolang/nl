# nl
Compiler

### Research Area

We have identified the following areas where we seek improvement in software development:

* Development of concurrent code
* Development of code with asynchronous communication from different sources
* Software quality management in large code bases

### Nianio Lang Design Principles

Our answer to these challenges is Nianio Lang language. Its design principles consists of:

* Architecture oriented language
  * We do not focus on micro-convenience for programmers. We always value higher better code organization at the architecture level to a few less lines at the function level.
* Semantics centric language
  * We have removed low-level features like pointers and modifiable objects, that are the root cause of undefined behavior of programs, in particular concurrent ones. We have added features that allow high-level of optimizations that preserve simple semantics instead.
  * Advanced features of the language like static typing or optimizations do not change semantics of the base code. It means that very simple compilation process of stripped-down language produces code of the same semantics that advanced compilation that uses static typing and other hints provided by the programmer.
* Language characterics
  * Procedural imperative language
  * Strict value semantics for argument passing
  * No global variables
  * Generation of embeddable code. No need for VM.
  * Small compiler or interpreter size
  * Automatic memory management
  * No garbage collection
* No overloading of functions and operators
  * All function must be explicitly called with package name. This provides more readability and simplifies compilation process.
* Strictly Optional Typing
  * Types are optional and providing type information do not change semantics of the program, but ensures its properties and allows for optimization. In particular, every program may be stripped off all type information and executed by simple interpreter with semantics kept intact.
* Compile time function execution and value expansion.
  * Since we depend on value passing semantics, all functions that do not have extenal dependencies may be executed by compiler and their result may be inlined. This allows for deep inlining and optimizations.
* Language for complex logic implementation (as opposed to small functions and up-to-cycle optimizations)
* Execution speed comparable to C.
  * We aim to achieve 3 times low-level performance degradation as compared to simple C programs, while keeping all safety and semantics guarantees. Larger code base may benefit from in-depth optimizations. Critical functions have an option to call C code directly.

### Current status

Nianio Lang is actively used in development of instadb.com platform.

* Already implemented:
  * Compiler
  * Static type checker
  * Module dependency verifier
  * Around 50KLOC of Nianio Lang in production use serve distributed infrastructure for instadb.com platform and its customers
  * Online JavaScript interpreter and debugger
  * C compiler
* Work in progress
  * Highly optimizing C compiler
  * JavaScript compiler

### Potential Applications

We see potential in the following areas:

* Embedded software
* Distributed software
* Error-proof software, in particular formal verifications

### References

Andrzej Gąsienica Samek, Tomasz Stachowicz, Jacek Chrząszcz and Aleksy Schubert "KOTEK: Clustering of The Enterprise Code", in "Software Engineering: Evolution and Emerging Technologies", Krzysztof Zieliński and Tomasz Szmuc, editors, volume 130, IOS Press, 2005, pp. 412-417 © IOS Press 

Jacek Chrząszcz, Tomasz Stachowicz, Andrzej Gąsienica-Samek, and Aleksy Schubert. "Minik: A tool for maintaining proper Java code structure", in Proceedings of SET'2006, IFIP, Springer, 2006, pp. 361-372.© Springer-Verlag 

