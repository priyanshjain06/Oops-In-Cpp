# C++ Inheritance

## What is inheritance?

**Inheritance** is a mechanism where one class (derived/child) acquires properties and behavior of another class (base/parent).

### Purpose:

* Code reuse
* Extensibility
* Polymorphism

---

## PART 1️⃣ — Types of Inheritance (VERY IMPORTANT)

C++ supports **5 types of inheritance**.

---

### 1️⃣ Single Inheritance

#### Definition

One derived class inherits from one base class.

#### Example
```cpp
class A {
public:
    int x;
};

class B : public A {
public:
    int y;
};
```

#### Diagram
```
A → B
```

✔ Simplest  
✔ Most commonly used

---

### 2️⃣ Multilevel Inheritance

#### Definition

A class is derived from another derived class.

#### Example
```cpp
class A {
public:
    int x;
};

class B : public A {
};

class C : public B {
};
```

#### Diagram
```
A → B → C
```

✔ Very common in real projects  
✔ Constructor/destructor order questions asked

---

### 3️⃣ Multiple Inheritance

#### Definition

One class inherits from more than one base class.

#### Example
```cpp
class A {
public:
    int x;
};

class B {
public:
    int y;
};

class C : public A, public B {
};
```

#### Diagram
```
A   B
 \ /
  C
```

⚠️ Can cause ambiguity problem  
⚠️ Leads to diamond problem

---

### 4️⃣ Hierarchical Inheritance

#### Definition

Multiple derived classes inherit from one base class.

#### Example
```cpp
class A {
};

class B : public A {
};

class C : public A {
};
```

#### Diagram
```
    A
   / \
  B   C
```

✔ Widely used  
✔ Clean design

---

### 5️⃣ Hybrid Inheritance

#### Definition

Combination of two or more inheritance types.

#### Example
```cpp
class A {};
class B : public A {};
class C : public A {};
class D : public B, public C {};
```

#### Diagram
```
    A
   / \
  B   C
   \ /
    D
```

⚠️ Causes diamond problem  
✔ Solved using virtual inheritance

---

## 🚨 Diamond Problem (PLACEMENT FAVORITE)

### Problem
```cpp
class A { public: int x; };
class B : public A {};
class C : public A {};
class D : public B, public C {};
```

❌ `D` has two copies of A

### Solution
```cpp
class B : virtual public A {};
class C : virtual public A {};
```

✔ Only one copy of A

---

## PART 2️⃣ — Visibility / Access Control in Inheritance

C++ has three access specifiers:

* `public`
* `protected`
* `private`

---

### 1️⃣ Meaning of access specifiers

| Specifier | Accessible in same class | Derived class | Outside |
|-----------|-------------------------|---------------|---------|
| `public` | ✔ | ✔ | ✔ |
| `protected` | ✔ | ✔ | ❌ |
| `private` | ✔ | ❌ | ❌ |