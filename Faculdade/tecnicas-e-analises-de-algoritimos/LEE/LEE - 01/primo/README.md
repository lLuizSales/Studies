
# 🧮 E. É primo ou não é

## 📖 Descrição

"Número primo" é qualquer número \( p \) cujo conjunto dos divisores não inversíveis não é vazio, e todos os seus elementos são produtos de \( p \) por números inteiros inversíveis.

De acordo com esta definição:
- \( 0 \), \( 1 \) e \( -1 \) **não são números primos**

Um número inteiro primo é aquele que possui **quatro divisores distintos**:
- \( \pm 1 \) e \( \pm p \)

Já um número natural primo possui **apenas dois divisores naturais distintos**:
- \( 1 \) e ele mesmo

---

## 🎯 Objetivo

Dada uma lista de números naturais, determinar quais são **primos** e quais **não são**.

---

## 📥 Entrada

- A primeira linha contém um inteiro \( N \)  
  \( (1 \leq N \leq 1000) \)  
  → quantidade de números a serem verificados  

- As próximas \( N \) linhas contêm um inteiro \( V \)  
  \( (1 \leq V \leq 10^7) \)

---

## 📤 Saída

Para cada número \( V \), imprimir:

- `"o numero X eh primo"`  
ou  
- `"o numero X nao eh primo"`

Onde **X** é o número analisado.

---

## 💡 Exemplo

### Entrada
```

3
1
2
4

```

### Saída
```

o numero 1 nao eh primo
o numero 2 eh primo
o numero 4 nao eh primo

```

---

## ⏱️ Restrições

- Tempo por teste: **1 segundo**
- Memória: **256 MB**

---

## 🧠 Observação

Para verificar se um número é primo de forma eficiente, basta testar divisores até \( \sqrt{n} \)

---
