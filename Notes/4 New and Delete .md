# `new` and `delete` in C++

## Key properties of `new`

* Allocates memory from **heap**
* Returns a **typed pointer**
* Calls **constructor automatically** (for objects)
* Throws exception (`bad_alloc`) if memory fails

---

## Key properties of `delete`

* Frees heap memory
* Calls **destructor automatically**
* Prevents memory leaks
* Must match allocation type (`new` ↔ `delete`, `new[]` ↔ `delete[]`)

---

## `new` vs `malloc`

| Feature | `new` | `malloc` |
|---------|-------|----------|
| Language | C++ | C |
| Constructor call | ✅ Yes | ❌ No |
| Type safety | ✅ Typed | ❌ void* |
| Failure handling | Exception | NULL |
| Size calculation | Automatic | Manual |
| Destructor call | Via `delete` | ❌ No |

---

## `delete` vs `free`

| Feature | `delete` | `free` |
|---------|----------|--------|
| Destructor call | ✅ Yes | ❌ No |
| Used with | `new` | `malloc` |
| Language | C++ | C |

---

## 5️⃣ Using `new` with objects
```cpp
class Test {
public:
    Test() { cout << "Constructor\n"; }
    ~Test() { cout << "Destructor\n"; }
};

int main() {
    Test* t = new Test();  // constructor called
    delete t;              // destructor called
}
```

### Output
```
Constructor
Destructor
```

---

## 6️⃣ Dangling pointer problem
```cpp
int* p = new int(10);
delete p;
*p = 20;   // ❌ dangling pointer
```

### ✔ Best practice:
```cpp
delete p;
p = nullptr;
```