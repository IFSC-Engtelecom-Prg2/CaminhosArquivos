# Caminhos de arquivos

*Normalizar caminhos*: reduzir um caminho qualquer (absoluto) ao menor caminho absoluto possível.

Com respeito a caminhos par arquivos ou diretórios, escreva uma função que reduza um caminho absoluto qualquer ao menor caminho absoluto possível. Por exemplo,  o caminho:

```
/home/aluno/Downloads/..
```

.. deve ser reduzido para :


```
/home/aluno
```

Este outro caminho:

```
/usr/share/docs/../../lib/./x11
```

.. deve ser reduzido para:

```
/usr/lib/x11
```

Abaixo segue a declaração da função a ser implementada:

```c++
// reduz o "caminho", retornando como resultado o caminho reduzido
string reduz_caminho(const string & caminho)
```

Sua implementação deve **obrigatoriamente** usar pelo menos uma pilha.
