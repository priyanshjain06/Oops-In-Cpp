# Function Overloading vs Function Overriding

## Comparison Table

| Feature | Function Overloading | Function Overriding |
|---------|---------------------|---------------------|
| Polymorphism type | Compile-time | Run-time |
| Inheritance needed | ❌ No | ✅ Yes |
| Function signature | Different | Same |
| Binding | Static | Dynamic |
| `virtual` keyword | ❌ Not required | ✅ Required |
| Execution decided | At compile time | At runtime |
| Return type | Can differ | Must be same / covariant |
| Scope | Same class | Base → Derived |

---

## 3️⃣ Code example: Function Overloading
```cpp
class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};
```

✔ Same class  
✔ Different parameters

---

## 4️⃣ Code example: Function Overriding
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show\n";
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show\n";
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->show();
}
```

### Output
```
Derived class show
```

✔ Runtime binding  
✔ Uses `virtual`

---

## 5️⃣ Key differences examiners check ⚠️

### ❌ Overloading

* Cannot overload using return type only
* Happens in same scope

### ✔ Overriding

* Function signature must be exact same
* Base function must be `virtual`
* Access specifier can change (but risky)

---

# Function Signature in C++

## 1️⃣ What is a function signature?

A **function signature** is the unique identity of a function used by the compiler to distinguish it from others.

In C++, function signature consists of:

* Function name
* Number of parameters
* Types of parameters
* Order of parameters

✔ Return type is **NOT** part of the signature

---

## 2️⃣ Example
```cpp
void fun(int a);
void fun(double a);
void fun(int a, int b);
```

✔ All have different signatures

---

## 3️⃣ What is NOT part of function signature (MCQ trap ⚠️)

❌ Return type  
❌ Parameter names  
❌ `const` on value parameters  
❌ Default arguments
```cpp
int fun(int a);
float fun(int a);   // ❌ same signature - ERROR
```

---

## 4️⃣ Signature in function overloading

* Overloading requires different signatures
* Compiler uses signature to resolve calls
```cpp
fun(10);      // calls fun(int)
fun(10.5);    // calls fun(double)
```

---

## 5️⃣ Signature in function overriding

For overriding, signature must be **exactly same** as base class function.
```cpp
class Base {
public:
    virtual void show(int x);
};

class Derived : public Base {
public:
    void show(int x);   // same signature → overriding
};
```

❌ Change in parameters → not overriding

---

## 6️⃣ Special note (advanced but safe)

* `const` at end of member function **is part of signature**
```cpp
void show() const;
void show();        // different signatures
```

✔ Important in interviews

---

## 7️⃣ One-line placement answer

> Function signature uniquely identifies a function and consists of its name and parameter list, excluding the return type.

---

## ⭐ Ultra-short MCQ version

**Name + parameter types + order = function signature**