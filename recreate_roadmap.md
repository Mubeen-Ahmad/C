
* ### Double Qoutes " for String
* ### Single Qoutes ' for Chracters
* ### Single Line and Multiline Comments
* ### Obfuscated C

C Programming Language Data Types

1. Types Overview
   ├── Object Types
   │   ├── Basic Types (Fundamental Building Blocks)
   │   │   ├── Character Types
   │   │   │   ├── char
   │   │   │   ├── signed char
   │   │   │   └── unsigned char
   │   │   ├── Signed Integer Types
   │   │   │   ├── signed char
   │   │   │   ├── short int (short)
   │   │   │   ├── int
   │   │   │   ├── long int (long)
   │   │   │   └── long long int
   │   │   ├── Unsigned Integer Types
   │   │   │   ├── unsigned char
   │   │   │   ├── unsigned short int (unsigned short)
   │   │   │   ├── unsigned int
   │   │   │   ├── unsigned long int (unsigned long)
   │   │   │   └── unsigned long long int
   │   │   ├── Floating Types
   │   │   │   ├── float
   │   │   │   ├── double
   │   │   │   └── long double
   │   │   └── Boolean Type (C99)
   │   │       └── _Bool (from stdbool.h, expands to bool)
   │   │           ├── true
   │   │           └── false
   │   └── Derived Types
   │       ├── Enumerated Type
   │       │   └── enum { constants }
   │       ├── Array Type
   │       │   └── array of element type (e.g., int arr[])
   │       ├── Structure Type
   │       │   └── struct { members }
   │       ├── Union Type
   │       │   └── union { overlapping members }
   │       ├── Function Type
   │       │   └── function signature and return type (e.g., int func(int))
       │       └── Pointer Type
   │           └── pointer to object type or function type (e.g., int *ptr)
   
2. Function Types
   └── Function Signature and Parameters
       ├── Function Name
       ├── Return Type
       ├── Parameter List
       └── Function Body (Code Block)
   
3. Atomic Types (C11)
   └── atomic types for lock-free thread-safe operations
       └── atomic_int, atomic_bool, etc.
   
4. Incomplete Types
   ├── Arrays of Unknown Size (e.g., int arr[] with unspecified size)
   └── Incomplete Structs/Unions (forward declaration without members)
   
5. Qualifiers
   ├── const (constant value, cannot be modified)
   ├── volatile (value can be changed unexpectedly, e.g., hardware registers)
   ├── restrict (C99, hints that the pointer is the only reference to the object)
   └── atomic (C11, operations are atomic, for thread safety)
