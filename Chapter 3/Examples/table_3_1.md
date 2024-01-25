# Tabela de convenções para listas encadeadas (Tabela 3.1 do livro)

## Listas circulares

### Snippets de código para listas circulares

* Primeira inserção:

```c
head->next = head;
```

* Inserir `t` após `x`:

```c
t->next = x->next; 
x->next = t;
```

* Deletar após `x`:

```c
x->next = x->next->next;
```

* Loop para percorrer

```c
t = head; 
do { 
    t = t->next 
} while (t != head);
```

* Testar se só com um item

```c
if (head->next == head) {...}
```

## Ponteiro para cabeca, cauda nula

### Snippets de código para listas com ponteiro para cabeça

* Inicializador

```c
head = NULL;
```

* Inserir `t` após `x`

```c
if(x == NULL) { 
    head = t; 
    head->next = NULL;
} 
else { 
    t->next = x->next;
    x->next = t;
}
```

* Deletar após `x`

```c
t = x->next;
x->next = t->next;
```

* Loop para percorrer

```c
for(t = head->next; t != NULL; t = t->next) ;
```

* Testar se vazia
  
```c
if(head == NULL) {...}
```

## Cabeça "dummy", cauda nula

### Snippets de código para listas com cabeça "dummy"

* Inicializador

```c
head = malloc(sizeof *head);
head->next = NULL;
```

* Inserir `t` após `x`

```c
t->next = x->next;
x->next = t;
```

* Deletar após `x`

```c
t = x->next;
x->next = t->next;
```

* Loop para percorrer

```c
for(t = head->next; t != NULL; t = t->next) ;
```

* Testar se vazia

```c
if(head->next == NULL) {...}
```

## Cabeça "dummy" e nós de cauda

### Snippets de código para listas com cabeça "dummy" e nós de cauda

* Inicializador

```c
head = malloc(sizeof *head);
z = malloc(sizeof *z);
head->next = z;
z->next = z;
```

* Inserir `t` após `x`

```c
t->next = x->next;
x->next = t;
```

* Deletar após `x`

```c
x->next = x->next->next;
```

* Loop para percorrer

```c
for(t = head->next; t != z; t = t->next) ;
```

* Testar se vazia

```c
if (head->next == z) {...}
```
