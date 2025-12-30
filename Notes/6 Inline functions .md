# Inline Functions in C++

## When compiler may NOT perform inlining ⚠️

The compiler may not perform inlining in such circumstances as:

* If a function contains a **loop** (`for`, `while`, `do-while`)
* If a function contains **static variables**
* If a function is **recursive**
* If a function contains a **switch** or **goto** statement

---

## Inline functions Advantages ✅

* Function call overhead doesn't occur
* It also saves the overhead of push/pop variables on the stack when a function is called

---

## Inline function Disadvantages ❌

* Reduce your **instruction cache hit rate**
* The size of the **binary executable file** will be large
* Increase **compile time**