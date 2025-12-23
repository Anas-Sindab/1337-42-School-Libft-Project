# Libft - Custom C Standard Library Implementation

[![1337](https://img.shields.io/badge/1337-Coding_School-FF6B6B?style=for-the-badge)](https://www.1337.ma/)
[![42 Badge](https://img.shields.io/badge/42-Libft-00babc?style=for-the-badge&logo=42)](https://42.fr)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Score](https://img.shields.io/badge/Score-125%2F125-success?style=for-the-badge)
![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white)

> A comprehensive reimplementation of essential C standard library functions, built from scratch as part of the 42 Network curriculum.

---

## 📖 Overview

**Libft** is a foundational project that involves recreating key functions from the C standard library without relying on the originals. This project emphasizes low-level programming, memory management, and algorithmic thinking - core skills essential for systems programming.

The library serves as a reusable codebase for all subsequent 42 projects, demonstrating modular code design and adherence to strict coding standards.

### Key Achievements
- Implemented 40+ standard C library functions from scratch
- Built custom linked list manipulation functions
- Strict adherence to 42's Norminette coding standard
- Zero memory leaks (verified with Valgrind)
- Comprehensive edge case handling

---

## 🎯 Project Goals

1. **Deep understanding of C fundamentals** - pointers, memory allocation, string manipulation
2. **Memory management mastery** - proper allocation, deallocation, and leak prevention
3. **Code quality** - writing clean, maintainable, and well-documented code
4. **Foundation building** - creating a personal library for future projects

---

## 🔧 Technical Implementation

### Function Categories

#### **Part 1: Standard Library Functions (23 functions)**
Reimplemented core libc functions with identical behavior:

**Character Classification & Conversion**
```c
int  ft_isalpha(int c);    // Check if alphabetic
int  ft_isdigit(int c);    // Check if digit
int  ft_isalnum(int c);    // Check if alphanumeric
int  ft_isascii(int c);    // Check if ASCII
int  ft_isprint(int c);    // Check if printable
int  ft_toupper(int c);    // Convert to uppercase
int  ft_tolower(int c);    // Convert to lowercase
```

**String Manipulation**
```c
size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t len);
char    *ft_strdup(const char *s);
```

**Memory Operations**
```c
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);
```

**Conversion**
```c
int  ft_atoi(const char *nptr);  // String to integer conversion
```

#### **Part 2: Additional Utility Functions (11 functions)**
Extended functionality beyond standard library:

```c
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
```

#### **Bonus: Linked List Functions (9 functions)**
Complete linked list manipulation suite:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);
int     ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(void*));
void    ft_lstclear(t_list **lst, void (*del)(void*));
void    ft_lstiter(t_list *lst, void (*f)(void*));
t_list  *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*));
```

---

## 🚀 Usage

### Building the Library

```bash
# Clone the repository
git clone https://github.com/yourusername/libft.git
cd libft

# Compile the library
make                # Compiles mandatory functions
make bonus          # Compiles with bonus functions
```

This generates `libft.a`, a static library ready for linking.

### Compilation

```bash
# Link with your project
gcc -Wall -Wextra -Werror main.c libft.a -o program

# With debugging symbols
gcc -g -Wall -Wextra -Werror main.c libft.a -o program
```

### Makefile Rules

| Command | Action |
|---------|--------|
| `make` | Compile mandatory part |
| `make bonus` | Compile with bonus functions |
| `make clean` | Remove object files |
| `make fclean` | Remove objects and library |
| `make re` | Recompile from scratch |

---

## 💻 Technical Highlights

### Memory Management
- **Safe allocation handling**: All functions check malloc return values
- **Leak prevention**: Proper cleanup in case of allocation failures
- **Edge case protection**: NULL pointer validation throughout

### Algorithm Optimization
- **ft_split**: Two-pass algorithm for efficient memory allocation
- **ft_memmove**: Handles overlapping memory regions correctly
- **ft_strlcpy/strlcat**: Buffer overflow protection with size limits

### Code Quality
- **1337/42 Norminette compliant**: Strict adherence to coding standards
  - Maximum 25 lines per function
  - Maximum 5 functions per file
  - Consistent naming conventions
- **Comprehensive testing**: Validated against multiple test suites
- **Documentation**: Clear function prototypes and usage examples

---

## 🧪 Testing & Validation

Thoroughly tested and validated for:
- **Memory leak detection** - Verified with Valgrind
- **Edge case handling** - NULL pointers, empty strings, boundary conditions
- **Standard compliance** - Behavior matches original libc functions

```bash
# Memory leak verification with Valgrind
valgrind --leak-check=full --show-leak-kinds=all ./test_program
```

---

## 📊 Skills Demonstrated

- Low-level C programming and pointer manipulation
- Dynamic memory allocation and management
- String parsing and manipulation algorithms
- Linked list data structure implementation
- Buffer overflow prevention techniques
- Modular code architecture
- Test-driven development approach
- Adherence to coding standards

---

## 🔍 Implementation Details

### Notable Functions

**ft_split** - String tokenization with dynamic allocation
```c
char **ft_split(char const *s, char c)
{
    // 1. Count words for array allocation
    // 2. Allocate array of pointers
    // 3. Extract and duplicate each word
    // 4. Cleanup on allocation failure
}
```

**ft_memmove** - Overlap-safe memory copy
```c
void *ft_memmove(void *dest, const void *src, size_t n)
{
    // Handles overlapping memory regions by choosing
    // copy direction based on pointer relationship
}
```

**ft_lstmap** - Functional list transformation
```c
t_list *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
    // Maps function across list while handling allocation failures
    // Ensures cleanup of partially created list on error
}
```

---

## 📂 Project Structure

```
libft/
├── Makefile              # Build automation
├── libft.h               # Header with all prototypes
├── ft_*.c                # Implementation files
└── README.md             # Documentation
```

---

## 🎓 Learning Outcomes

This project provided deep insights into:

1. **Memory architecture**: Understanding heap vs stack allocation
2. **Pointer arithmetic**: Navigating and manipulating memory directly
3. **Edge cases**: Handling NULL, empty strings, and boundary conditions
4. **Code optimization**: Balancing clarity with efficiency
5. **Professional standards**: Writing production-ready C code

## 🔗 Related Projects

This library is used as a foundation in subsequent 42 projects:
- **get_next_line** - File reading with dynamic buffers
- **ft_printf** - Custom printf implementation
- **push_swap** - Sorting algorithm optimization
- **minishell** - Unix shell implementation
- **philosophers** - Threading and synchronization

---

## 📝 License

This project is part of the 42 Network curriculum. Feel free to reference for learning purposes.

---

## 👤 Author

- GitHub: [@Anas-Sindab](https://github.com/Anas-Sindab)
- LinkedIn: [Anas-Sindab](https://linkedin.com/in/yourprofile)
- 42 Intra: `anasinda`

---

*Developed at 1337 Coding School (42 Network) - 2025*
