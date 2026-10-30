<div align="center">

# 🔗 C++ Doubly Linked List Library

**A clean, header-only C++ template library implementing a Doubly Linked List with dynamic node allocation, bidirectional traversal, and comprehensive data manipulation methods.**

[About the Project](#-about-the-project) • [Features & Operations](#-features--supported-operations) • [Quick Start](#-quick-start) • [Author](#-author--contact)

</div>

---

## 🌟 About the Project

Welcome to the **Doubly Linked List Library**! This project is a custom C++ template-based data structure developed as part of **Algorithms & Problem Solving – Level 5** on [ProgrammingAdvices](https://programmingadvices.com) under the guidance of Dr. Mohammed Abu-Hadhoud.

The project represents a practical evolution from basic data structures (where lists were implemented using standalone functions) into a clean, reusable, object-oriented template class. The core focus is on pointer management, memory safety, and encapsulation without relying on the Standard Template Library (`std::list`).

---

## ✨ Features & Supported Operations

- **Templates (`template <class T>`):** Supports any data type (`int`, `short`, `string`, etc.).

- **Insertion:** Add elements at the beginning, end, or after a specific node/index (`InsertAtBeginning`, `InsertAtEnd`, `InsertAfter`).

- **Deletion:** Remove first, last, or specific nodes (`DeleteFirstNode`, `DeleteLastNode`, `DeleteNode`).

- **Search, Access & Update:** Find, retrieve, or update items by value or index (`Find`, `GetNod`, `GetItem`, `UpdateItem`).

- **Utilities:** Check size, verify empty state, clear, reverse, and print list (`Size`, `IsEmpty`, `Clear`, `Revers`, `PrintList`).

---

## 🏗️ Design & Architecture

- **Inner Node Class:** The `Node` structure is encapsulated internally within `clsDblLinkedList`.
- **Internal State Management:** The `_head` pointer manages the entry point, keeping external functions clean.
- **Header-Only Implementation:** Designed as a self-contained header file (`clsDblLinkedList.h`) ready for direct inclusion.

---

## ⚙️ Quick Start

### Prerequisites

A modern C++ compiler supporting **C++11** or higher:

- **Windows:** Visual Studio (MSVC)
- **Linux / macOS:** GCC / MinGW or Clang

### Example Usage

```cpp
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main() {
    clsDblLinkedList<short> MyDblLinkedList;

    // Insert elements
    MyDblLinkedList.InsertAtBeginning(1);
    MyDblLinkedList.InsertAtBeginning(2);
    MyDblLinkedList.InsertAtEnd(10);

    // Print list contents
    cout << "List Contents: ";
    MyDblLinkedList.PrintList(); // Output: 2  1  10

    cout << "\nList Size: " << MyDblLinkedList.Size() << endl;

    return 0;
}

```

---

---

## 👤 Author & Contact

<div align="center">

### **Yousif Aljaberi**

<p>
  <a href="https://github.com/Yousef-Aljaberi">
    <img src="https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white" alt="GitHub">
  </a>
  &nbsp;&nbsp;&nbsp;
  <a href="https://www.linkedin.com/in/yousif-aljaberi-004278408/">
    <img src="https://img.shields.io/badge/LinkedIn-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white" alt="LinkedIn">
  </a>
</p>

</div>
