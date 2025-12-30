# 🔑 Dynamic Constructor in C++ (COMPLETE)

## What is a Dynamic Constructor?

A **dynamic constructor** is a constructor that allocates memory dynamically at runtime using `new`.

It is used when object size or resources are not known at compile time.

---

## 1️⃣ Why do we need a Dynamic Constructor?

Normal constructors allocate fixed memory.

But sometimes:

* Size depends on user input
* Data size changes at runtime
* We need arrays, buffers, strings dynamically

👉 This is where dynamic constructors are required.

---

## 2️⃣ Basic syntax
```cpp
class Test {
    int *ptr;

public:
    Test(int value) {
        ptr = new int;   // dynamic memory allocation
        *ptr = value;
    }
};
```

### Key idea

* Memory is allocated inside constructor
* Object owns dynamically allocated memory

---

## 3️⃣ Simple example (PLACEMENT FAVORITE)
```cpp
#include <iostream>
using namespace std;

class Demo {
    int *x;

public:
    Demo(int val) {
        x = new int;   // dynamic allocation
        *x = val;
    }

    void show() {
        cout << *x << endl;
    }
};

int main() {
    Demo d1(10);
    Demo d2(20);

    d1.show();
    d2.show();
}
```

### Output
```
10
20
```

### Explanation

* Each object gets separate heap memory
* Values do not interfere

---

## 4️⃣ Dynamic Constructor with Array (VERY IMPORTANT)
```cpp
class Array {
    int *arr;
    int size;

public:
    Array(int s) {
        size = s;
        arr = new int[size];  // dynamic array
    }

    void input() {
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
    }
};
```

### Why this is important

* Array size is decided at runtime
* Impossible with normal constructor

---

## 5️⃣ Memory location (EXAM QUESTION)

| Allocation type | Memory |
|----------------|--------|
| Normal variables | Stack |
| Dynamic constructor memory | Heap |
| Object itself | Stack / Heap (depends how created) |

---

## 6️⃣ Destructor is MANDATORY with Dynamic Constructor ⚠️

### Why?

Dynamic memory must be released manually.
```cpp
~Demo() {
    delete x;
}
```

### Without destructor

❌ Memory leak  
❌ Bad design  
❌ Exam penalty

---

## 7️⃣ Complete correct version (IDEAL ANSWER)
```cpp
class Demo {
    int *x;

public:
    Demo(int val) {
        x = new int;
        *x = val;
    }

    ~Demo() {
        delete x;
    }
};
```

---

## 8️⃣ Dynamic Constructor vs Normal Constructor

| Feature | Normal | Dynamic |
|---------|--------|---------|
| Memory allocation | Compile time | Runtime |
| Uses `new` | ❌ | ✔ |
| Flexible size | ❌ | ✔ |
| Needs destructor | ❌ | ✔ |