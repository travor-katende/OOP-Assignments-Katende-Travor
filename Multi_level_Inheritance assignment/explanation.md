# Multilevel Inheritance in C++
## — Person → Student → StudentRecord

## How it works

1. **Level 1 – `Person` (base class):** stores `name` and has `showName()`.
2. **Level 2 – `Student` (derived from `Person`):** inherits `name` and `showName()`, and adds `studentId` and `showId()`.
3. **Level 3 – `StudentRecord` (derived from `Student`):** inherits from `Student`, and so also from `Person`. It adds `marks` and `showRecord()`.
4. **Chain of access:** a `StudentRecord` object can call functions from all three levels (`showName()`, `showId()`, `showRecord()`).
5. **Constructors run top-down:** `Person` → `Student` → `StudentRecord`. Each constructor passes values up, e.g. `Student(n, id) : Person(n)`.
6. **`protected` members:** `name` and `studentId` can be used by child classes but not by outside code.



