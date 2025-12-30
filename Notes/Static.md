# `static` in C++ — COMPLETE EXPLANATION

`static` means memory is allocated once and value is preserved across function calls or object creations.

But its behavior depends on **WHERE** it is used.

---

## 1️⃣ `static` variable inside a function

### Example

```cpp
#include <iostream>
using namespace std;

void func() {
    static int x = 0;
    x++;
    cout << x << " ";
}

int main() {
    func();
    func();
    func();
}
```

### Output

```
1 2 3
```

### Why?

* `x` is created only once
* Value is not destroyed after function ends
* Lifetime = entire program
* Scope = inside function only

### Exam keywords

* Initialized only once
* Stored in static memory
* Retains value between calls

---

## 2️⃣ Normal vs Static local variable (VERY IMPORTANT)

```cpp
void test() {
    int a = 0;        // normal
    static int b = 0; // static
    a++;
    b++;
    cout << a << " " << b << endl;
}
```

### Calling twice

```
1 1
1 2
```

### Reason

| Variable | Lifetime                  |
| -------- | ------------------------- |
| `a`      | Destroyed after each call |
| `b`      | Exists till program ends  |

---

## 3️⃣ `static` global variable (file scope)

### Example

```cpp
static int x = 10;
```

### Meaning

* Variable is visible only inside that file
* Not accessible from other files using `extern`

### Why used?

✔ Avoid name conflicts  
✔ Data hiding at file level

### Exam term

**Internal linkage**

---

## 4️⃣ `static` data member of a class (VERY IMPORTANT)

### Example

```cpp
class Student {
public:
    static int count;
    Student() {
        count++;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2;
    cout << Student::count;
}
```

### Output

```
2
```

### Key points

* Shared by all objects
* Exists even if no object exists
* Memory allocated once

### Access

```cpp
Student::count   // preferred
```

### Exam keywords

* Belongs to class, not object
* Single copy
* Static memory allocation

---

## 5️⃣ Why static data members are declared inside but defined outside

```cpp
class A {
    static int x;   // declaration
};

int A::x = 10;      // definition
```

### Reason

* Compiler needs single memory location
* Avoid multiple definitions

⚠️ **VERY COMMON EXAM QUESTION**

---

## 6️⃣ `static` member function (VERY IMPORTANT)

### Example

```cpp
class Math {
public:
    static int square(int x) {
        return x * x;
    }
};

int main() {
    cout << Math::square(5);
}
```

### Rules

✔ Can access only static data members  
❌ Cannot use `this` pointer  
❌ Cannot access non-static members

### Why?

Because static functions are not tied to any object.

---

## 7️⃣ Static vs Non-Static member function

| Feature                       | Static | Non-Static |
| ----------------------------- | ------ | ---------- |
| Needs object                  | ❌      | ✔          |
| Can access instance variables | ❌      | ✔          |
| Uses `this`                   | ❌      | ✔          |
| Belongs to                    | Class  | Object     |

---

## 8️⃣ Static objects

### Example

```cpp
void test() {
    static int x = 5;
}
```

* Created only once
* Destroyed at program termination

Same applies to:

```cpp
static MyClass obj;
```

---

## 9️⃣ Memory allocation of static variables (PLACEMENT FAVORITE)

| Variable type   | Memory area  |
| --------------- | ------------ |
| Local           | Stack        |
| Dynamic (`new`) | Heap         |
| `static`        | Data segment |

---

## 🔟 Most common exam questions (READ CAREFULLY)

### Q1: Why static variable is initialized only once?

👉 Because memory is allocated in static area, not stack.

### Q2: Can static function access non-static variable?

👉 ❌ No, because it has no object reference.

### Q3: Can we have static constructor?

👉 ❌ No (C++ does not support static constructors).

### Q4: Why static members exist even without objects?

👉 Because they belong to the class, not instances.

---

## 1️⃣1️⃣ Output-based trick question

```cpp
void fun() {
    static int x;
    cout << x++;
}

int main() {
    fun();
    fun();
}
```

### Output

```
01
```

---

## ✅ FINAL SUMMARY TABLE

| Usage                  | Meaning                      |
| ---------------------- | ---------------------------- |
| Static local variable  | Value retained between calls |
| Static global variable | File-level scope             |
| Static data member     | Shared among all objects     |
| Static member function | Class-level function         |
