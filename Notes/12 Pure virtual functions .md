# Pure Virtual Function

A pure virtual function is a virtual function that has no implementation in the base class and must be overridden in the derived class.

## Syntax
```cpp
virtual void show() = 0;
```

* `= 0` makes the function pure

---

## Why pure virtual function is used?

* To achieve abstraction
* To define interface-like behavior

---

## Important exam trap ⚠️

❌ Pure virtual function can have definition, but still remains pure
```cpp
virtual void show() = 0;
void Shape::show() {
    cout << "Base definition";
}
```

✔ Still abstract class

---

## Properties of abstract class

✔ Cannot create object of abstract class  
✔ Can have:

* Data members
* Constructors
* Normal member functions

✔ Used only for inheritance

---

## Feature Comparison

| Feature        | Abstract Class | Interface (Java) |
| -------------- | -------------- | ---------------- |
| Implementation | Partial        | None             |
| Data members   | Yes            | Constants only   |
| Constructors   | Yes            | ❌ No             |