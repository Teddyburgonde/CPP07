**CPP07 ex02**

**Template definition**

```cpp
template <typename T> 
```

Cela permet de cree une class Array qui peut contenir des elements de n'importe quel type.

Si tu veux créer un Array d'entiers :

```cpp
Array<int> arr(10); // array of 10 integers
```

Si tu veux créer un Array de chaine de caracteres : 

```cpp
Array<std::string> arr(5); // array of 5 strings
```

**Subscript operator**

```cpp
T			&operator[](std::size_t idx); /* Subscript operator */
```
Permet d'avoir acces a un élément du tableau et de pouvoir le modifier.


```cpp
const T		&operator[](std::size_t idx) const; /* Subscript operator */
```
Permet d'avoir acces a un element du tableau mais on ne peut pas modifier l'élément.
