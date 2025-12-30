# How to Declare a `const` Variable in C++ (Placement-oriented)

A `const` variable means its value **cannot be changed** after initialization.

---

## 1️⃣ Basic declaration (most common)
```cpp
const int x = 10;
```

✔ `x` cannot be modified  
❌ `x = 20;` → compile-time error

---

## 2️⃣ `const` must be initialized at declaration
```cpp
const int x;   // ❌ ERROR
```

### ✔ Correct:
```cpp
const int x = 5;
```

---

## 3️⃣ Using `#define` vs `const` (exam trap)
```cpp
#define PI 3.14          // preprocessor macro
const double PI = 3.14;  // preferred
```

✔ `const` has type safety  
✔ `const` follows scope rules

---

## 4️⃣ Const with pointers (VERY IMPORTANT)

### 🔹 Pointer to const
```cpp
const int* p = &x;
```

* Value **cannot be changed** through pointer
* Pointer **can point** to another address

---

### 🔹 Const pointer
```cpp
int* const p = &x;
```

* Pointer address **cannot change**
* Value **can change**

---

### 🔹 Const pointer to const
```cpp
const int* const p = &x;
```

* **Neither pointer nor value** can change

---

## 5️⃣ Const in function parameters
```cpp
void print(const int x) {
    // x cannot be modified
}
```

✔ Prevents accidental modification  
✔ Used heavily in interviews

---

## 6️⃣ Const with reference
```cpp
void show(const int& x) {
    // x is read-only
}
```

✔ Efficient  
✔ No copy made

---

## 7️⃣ Const data members in class
```cpp
class Test {
    const int x;
public:
    Test(int a) : x(a) {}   // must use initializer list
};
```

⚠️ Cannot assign inside constructor body

---

## 8️⃣ Const member function
```cpp
class Test {
public:
    void show() const {
        // cannot modify data members
    }
};
```

✔ Guarantees object is not modified

---

## 9️⃣ Const object
```cpp
const Test obj;
```

✔ Can call **only const member functions**

---

## Quick Reference Table

| Declaration           | Meaning                                |
| --------------------- | -------------------------------------- |
| `const int x = 10;`   | Constant variable                      |
| `const int* p;`       | Pointer to const (value cannot change) |
| `int* const p;`       | Const pointer (address cannot change)  |
| `const int* const p;` | Const pointer to const (both fixed)    |
| `void func() const;`  | Const member function                  |
| `const Test obj;`     | Const object                           |