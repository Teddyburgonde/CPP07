**CPP07**

/* Template definition */  
```c
template <typename T> 
```

Cela permet de cree une class Array qui peut contenir des elements de n'importe quel type.

Si tu veux créer un Array d'entiers :

```c
Array<int> arr(10); // array of 10 integers
```

Si tu veux créer un Array de chaine de caracteres : 

```c
Array<std::string> arr(5); // array of 5 strings
```

