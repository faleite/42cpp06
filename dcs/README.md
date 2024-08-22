# C++
***(Modulo 06)***

## Index

<!-- 01. **[Nested classes](#nested-classes)**
02. **[Exceptions](#exceptions)** -->
03. **[Resources](#resources)**

## static_cast
*`static_cast` é um operador de casting que permite a conversão explícita de um tipo de dado para outro. Ele é mais seguro e controlado do que os casts tradicionais em C (como `(int)x`), pois* ***realiza verificações em tempo de compilação.***

### O `static_cast` é usado para:
- Conversões entre tipos primitivos (por exemplo, de `int` para `float`).
- Conversões entre ponteiros de classes relacionadas por herança.
- Conversões explícitas entre tipos de dados compatíveis.

### Como funciona?
- O `static_cast` realiza a conversão em tempo de compilação, garantindo que a conversão seja válida e segura. No entanto, ele não realiza verificações em tempo de execução, então o programador deve garantir que a conversão faz sentido.

### Exemplos

Aqui está um exemplo simples de como usar `static_cast`:

```cpp
#include <iostream>

int main() {
    // Conversão entre tipos primitivos
    int i = 10;
    float f = static_cast<float>(i);
    std::cout << "Valor de f: " << f << std::endl;

    // Conversão entre ponteiros de classes relacionadas por herança
    class Base {
    public:
        virtual void show() { std::cout << "Base class" << std::endl; }
    };

    class Derived : public Base {
    public:
        void show() override { std::cout << "Derived class" << std::endl; }
    };

    Base* basePtr = new Derived();
    Derived* derivedPtr = static_cast<Derived*>(basePtr);
    derivedPtr->show(); // Output: Derived class

    delete basePtr;
    return 0;
}
```

### Pontos importantes
- **Segurança em tempo de compilação**: O `static_cast` garante que a conversão é válida em tempo de compilação.
- **Sem verificações em tempo de execução**: Diferente do `dynamic_cast`, o `static_cast` não realiza verificações em tempo de execução, então o programador deve garantir que a conversão é segura.
- **Uso em herança**: Pode ser usado para converter ponteiros ou referências entre classes base e derivadas.

### Quando usar `static_cast`?
Use `static_cast` quando você tem certeza de que a conversão é segura e válida, e quando você precisa de uma conversão mais controlada e explícita do que os casts tradicionais em C.

[↑ Index ↑](#index)

## Promotion Casts
*Promotion casts referem-se a conversões automáticas que o compilador realiza para promover um tipo de dado a um tipo maior ou mais abrangente. Isso geralmente ocorre em operações aritméticas. Por exemplo:*
- **Inteiro para float**: Quando você soma um **int** e um float, o **int** é promovido a **float**.
- **Char para int**: Quando você usa um **char** em uma expressão aritmética, ele é promovido a **int**.

### Conversões Implícitas
Conversões implícitas são aquelas que o compilador realiza automaticamente, sem a necessidade de um cast explícito. 

### Eexemplo:
```cpp
int i = 42;
float f = i; // Conversão implícita de int para float
```
### O que a frase quer dizer?
A frase "Accept the use of implicit casts for promotion casts only." sugere que você deve permitir que o compilador realize conversões implícitas apenas quando se trata de promotion casts. Para outras conversões, você deve usar casts explícitos, como static_cast, para deixar claro que a conversão é intencional e segura.

### Exemplo

Aqui está um exemplo que ilustra a diferença:
```cpp
#include <iostream>

void example() {
    int i = 42;
    float f = i; // Permitido: promoção implícita de int para float

    double d = 3.14;

    // Recomendado:
    // uso de static_cast para conversão explícita de double para int
    int j = static_cast<int>(d); 
}

int main() {
    example();
    return 0;
}
```

### Resumo
- **Promotion casts**: Permita conversões implícitas apenas para promoções automáticas de tipos menores para tipos maiores.
- **Outras conversões**: Use casts explícitos (`static_cast`, `dynamic_cast`, etc.) para deixar claro que a conversão é intencional.

*Essa abordagem ajuda a evitar erros sutis e torna o código mais legível e seguro.*

### Classe sem dados e nao instanciavel
*Para criar uma classe canônica ortodoxa em C++ que não precisa armazenar nada e não deve ser instanciável pelos usuários, você pode seguir alguns passos:*

- **Tornar o construtor privado**: Isso impede que os usuários instanciem a classe diretamente.
- **Declarar um destrutor privado**: Isso impede a destruição da instância fora da classe.
- **Declarar um construtor de cópia e um operador de atribuição como privados e não implementados**: Isso impede a cópia da instância.

[↑ Index ↑](#index)

## Resources
Resource | Source
---------|:-----:
[Type Casting](https://youtube.com/playlist?list =PL1w8k37X_6L-KS5DQt7U0rCtgIgdIadWz&si=v7aaa5tKTrmOP7nv) | `YouTube`