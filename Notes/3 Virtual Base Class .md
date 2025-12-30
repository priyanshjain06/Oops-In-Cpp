```markdown
# Virtual Base Class in C++

## Why virtual base class is needed (core problem)

It solves the **Diamond Problem** in multiple inheritance.

```
        A
       / \
      B   C
       \ /
        D
```

* `B` and `C` inherit from `A`
* `D` inherits from both `B` and `C`
* Without virtual inheritance → `D` gets **two copies of A** ❌
* This causes:
  * Ambiguity (`A::x` which one?)
  * Extra memory usage

---

## 2️⃣ What is a virtual base class?

A **virtual base class** ensures only **ONE shared instance** of the base class exists, even if inherited multiple times.

👉 Declared using the keyword `virtual` during inheritance.

---

## 3️⃣ Syntax (important for exams)

```cpp
class A {
public:
    int x;
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};
```

✔ `A` is now a virtual base class  
✔ `D` contains only one copy of A

---

## 4️⃣ Constructor order (VERY IMPORTANT)

### Constructor of virtual base class is called first

**Order:**

1. Virtual base class
2. Non-virtual base classes
3. Derived class

✔ Independent of inheritance order

### Example

```cpp
#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A "; }
};

class B : virtual public A {
public:
    B() { cout << "B "; }
};

class C : virtual public A {
public:
    C() { cout << "C "; }
};

class D : public B, public C {
public:
    D() { cout << "D "; }
};

int main() {
    D obj;
}
```

### Output

```
A B C D
```

✔ `A` constructed only once

---

## 5️⃣ Removes ambiguity in member access

### Without virtual inheritance:

```cpp
obj.A::x   // ambiguous - which A?
```

### With virtual base class:

```cpp
obj.x      // unambiguous - single A
```


---

## Why not needed in single inheritance?

* No ambiguity
* No duplicate base object
* Virtual base class is only useful in **multiple inheritance**

---

## Common MCQ traps ⚠️

✔ Virtual keyword is written while **inheriting**, not while defining class  
✔ Virtual base class constructor is called **only once**  
✔ Used to solve **diamond problem**, not multilevel inheritance  
✔ Constructor of virtual base is called **first**, independent of order
```