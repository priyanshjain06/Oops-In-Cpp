# Virtual Functions in C++

## 1️⃣ What is a virtual function?

A **virtual function** is a member function of a class that is declared using the `virtual` keyword and is overridden in a derived class to achieve **runtime polymorphism**.

---

## 2️⃣ Core properties of virtual function (MOST IMPORTANT)

### 🔹 1. Enables runtime polymorphism

Works only with **base class pointer/reference**

```cpp
Base* b = new Derived();
b->show();   // calls Derived version
```

---

### 🔹 2. Overridden function must have same signature

* Same name
* Same parameters
* Same return type (or covariant)

---

### 🔹 3. Constructor cannot be virtual

Because object is not fully created

---

## 3️⃣ Rules for Virtual Functions

* Virtual functions **cannot be static**
* A virtual function **can be a friend function** of another class
* Virtual functions should be accessed using a **pointer or reference of base class type** to achieve runtime polymorphism
* A class may have a **virtual destructor** but it **cannot have a virtual constructor**

---

## 4️⃣ What happens without virtual (MCQ trap ⚠️)

```cpp
Base* b = new Derived();
b->show();   // calls Base version
```

❌ No runtime polymorphism  
❌ Static binding

---

## 5️⃣ Virtual destructor (VERY IMPORTANT)

```cpp
class Base {
public:
    virtual ~Base() {}
};
```

✔ Ensures proper cleanup  
✔ Prevents memory leak when deleting derived object via base pointer
