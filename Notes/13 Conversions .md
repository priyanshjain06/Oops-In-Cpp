# Type Conversion in C++

## 1️⃣ Basic Type → Class Type Conversion

### Meaning

Converting a primitive type (`int`, `float`) into a class object.

### How it is done?

✔ Using a parameterized constructor

### Example
```cpp
#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int a) {   // constructor
        x = a;
    }

    void show() {
        cout << x;
    }
};

int main() {
    int a = 10;
    Number obj = a;   // basic → class
    obj.show();
}
```

### Explanation

* `a` is `int`
* Constructor `Number(int)` is called automatically
* Compiler converts `int` → `Number`

✔ This is implicit conversion

### Placement point

**Basic to class conversion is done using a constructor.**

---

## 2️⃣ Class Type → Basic Type Conversion

### Meaning

Converting a class object into a primitive type.

### How it is done?

✔ Using type conversion operator

### Syntax
```cpp
operator datatype() { }
```

### Example
```cpp
#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int a) {
        x = a;
    }

    operator int() {    // conversion operator
        return x;
    }
};

int main() {
    Number obj(20);
    int a = obj;        // class → basic
    cout << a;
}
```

### Explanation

* `obj` is class type
* `operator int()` converts it to `int`

✔ Happens implicitly

### Placement point

**Class to basic conversion is done using operator overloading.**

---

## 3️⃣ Class Type → Class Type Conversion

### Meaning

Converting one class object into another class object.

### Two ways (EXAM IMPORTANT)

#### 🔹 Method 1: Using Constructor (most common)
```cpp
class A {
public:
    int x;
    A(int a) { x = a; }
};

class B {
    int y;
public:
    B(A obj) {     // constructor takes class A
        y = obj.x;
    }

    void show() {
        cout << y;
    }
};

int main() {
    A obj1(10);
    B obj2 = obj1;   // class → class
    obj2.show();
}
```

✔ Constructor of `B` does the conversion

#### 🔹 Method 2: Using Conversion Operator
```cpp
class A {
public:
    int x;
    A(int a) { x = a; }
    
    operator B();  // conversion operator
};

class B {
    int y;
public:
    B(int val) { y = val; }
    void show() { cout << y; }
};

A::operator B() {
    return B(x);
}

int main() {
    A obj1(10);
    B obj2 = obj1;   // class → class
    obj2.show();
}
```

✔ Conversion operator in `A` does the conversion

---

## Summary Table

| Conversion Type | Mechanism |
|----------------|-----------|
| Basic → Class | Parameterized Constructor |
| Class → Basic | Type Conversion Operator |
| Class → Class | Constructor or Conversion Operator |