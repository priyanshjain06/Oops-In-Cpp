# Friend in C++

`friend` allows controlled access to private and protected members of a class.

👉 Normally, private members are not accessible outside the class.  
👉 A friend breaks this restriction intentionally.

---

## 1️⃣ Friend Function

### 🔹 What is a friend function?

A friend function is a non-member function that can access private and protected members of a class.

### 🔹 How to declare?

- Declared inside the class using `friend` keyword
- Defined outside the class

### 🔹 Syntax
```cpp
class A {
private:
    int x;
public:
    A(int a) { x = a; }
    friend void show(A);   // declaration
};

void show(A obj) {         // definition
    cout << obj.x;
}
```

### 🔹 Key properties (EXAM POINTS)

- ✔ Not a member of class
- ✔ Can access private data
- ✔ Called like normal function

### 🔹 Why friend function is used?

Friend functions are used when:
- You need external functions to access private data
- Operator overloading requires access to private members
- Creating utility functions that work with multiple classes

---

## 2️⃣ Friend Class

### 🔹 What is a friend class?

When a class is declared as friend, all its member functions can access private members of another class.

### 🔹 Syntax
```cpp
class B;   // forward declaration

class A {
private:
    int x;
public:
    A(int a) { x = a; }
    friend class B;   // friend class
};

class B {
public:
    void show(A obj) {
        cout << obj.x;
    }
};
```

---

## 📌 Important Notes

- ✔ Friendship is not mutual
- ✔ Friendship is not inherited

---

## 📊 Comparison Table

| Feature       | Friend Function        | Friend Class           |
|---------------|------------------------|------------------------|
| Access        | Specific function      | All functions          |
| Declaration   | `friend void fun()`    | `friend class A`       |