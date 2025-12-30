# `this` Pointer in C++

## Common MCQ traps ⚠️

❌ `this` is not a keyword — it's a **pointer variable**  
❌ `this` cannot be modified  
❌ Not available in static functions  
✔ Automatically passed by compiler

---

## Uses of `this` pointer (VERY IMPORTANT)

### ✅ 1. Resolve name conflict
```cpp
this->x = x;
```

✔ `this->x` → data member  
✔ `x` → constructor parameter

---

### ✅ 2. Return current object
```cpp
class Test {
public:
    Test& set(int x) {
        this->x = x;
        return *this;
    }
};
```

✔ Enables method chaining
```cpp
obj.set(10).set(20);
```

---

### ✅ 3. Pass current object as argument
```cpp
void show(Test* obj) {}

show(this);
```

---

### ✅ 4. Compare two objects
```cpp
if (this == &obj) {
    // same object
}
```