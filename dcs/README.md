# C++
***(Modulo 06)***

## Index

<!-- 01. **[Nested classes](#nested-classes)**
02. **[Exceptions](#exceptions)** -->
03. **[Resources](#resources)**

<!-- ## Nested classes
Uma **classe aninhada** (nested class) é uma classe que é definida dentro do escopo de outra classe. Essas classes são úteis para organizar e agrupar logicamente o código relacionado, especialmente quando a classe aninhada é fortemente associada à classe externa. A classe aninhada pode acessar membros privados da classe que a contém, mas o contrário não é verdade a menos que sejam feitas provisões específicas para isso.

### Exemplos

Aqui está um exemplo básico para ilustrar o conceito de classes aninhadas:

```cpp
#include <iostream>

class Outer {
public:
    Outer(int val) : value(val) {}
    void show() const { std::cout << "Outer value: " << value << std::endl; }

    class Inner {
    public:
        Inner(int val) : innerValue(val) {}
        void show() const { std::cout << "Inner value: " << innerValue << std::endl; }
    private:
        int innerValue;
    };

private:
    int value;
};

int main() {
    Outer outer(10);
    outer.show();

    Outer::Inner inner(20);
    inner.show();

    return 0;
}
```

### Explicações

1. **Definição da Classe Aninhada:**
   - A classe `Inner` é definida dentro da classe `Outer`.
   - `Inner` é uma classe pública de `Outer`, o que significa que pode ser acessada de fora da classe `Outer`.

2. **Criação de Objetos:**
   - Um objeto da classe `Outer` é criado usando o construtor `Outer`.
   - Um objeto da classe `Inner` é criado usando `Outer::Inner`, indicando que `Inner` está dentro do escopo de `Outer`.

3. **Acesso aos Membros:**
   - A classe `Inner` tem seu próprio conjunto de membros, independente da classe `Outer`.
   - `Inner` pode acessar os membros privados da classe `Outer` se necessário, mas nesse exemplo específico, não há tal acesso.

### Acesso aos Membros Privados

Uma classe aninhada pode acessar membros privados da classe externa diretamente. Aqui está um exemplo:

```cpp
#include <iostream>

class Outer {
public:
    Outer(int val) : value(val) {}

    class Inner {
    public:
        void show(const Outer& outer) const { std::cout << "Accessing Outer value: " << outer.value << std::endl; }
    };

private:
    int value;
};

int main() {
    Outer outer(10);
    Outer::Inner inner;
    inner.show(outer);

    return 0;
}
```

Neste exemplo, a classe `Inner` acessa diretamente o membro privado `value` da instância da classe `Outer` passada como argumento.

### Utilização Prática

Classes aninhadas são úteis em várias situações:

1. **Encapsulamento de Implementação:**
   - A classe aninhada pode ser usada para ocultar detalhes de implementação que não devem ser expostos fora da classe externa.

2. **Organização de Código:**
   - Mantém o código relacionado logicamente agrupado, o que pode tornar o código mais limpo e fácil de entender.

3. **Acesso a Membros Privados:**
   - Facilita o acesso a membros privados da classe externa sem a necessidade de friend declarations.

### Conclusão

Classes aninhadas em C++ são uma poderosa ferramenta para organizar e encapsular o código, mantendo o acesso aos membros privados quando necessário. Elas são particularmente úteis quando há uma relação lógica forte entre as duas classes, permitindo um design mais limpo e coeso.

[↑ Index ↑](#index) -->
[↑ Index ↑](#index)

## Resources
Resource | Source
---------|:-----:
[Type Casting](https://youtube.com/playlist?list=PL1w8k37X_6L-KS5DQt7U0rCtgIgdIadWz&si=v7aaa5tKTrmOP7nv) | `YouTube`