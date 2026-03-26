# 🔢 A. Número Faltante

## 📖 Descrição

Uma **permutação de N inteiros** é uma reorganização dos números de **1 até N**, de modo que **cada número apareça exatamente uma vez**.

Por exemplo, para \( N = 10 \), uma permutação válida seria:

```

9, 4, 2, 7, 10, 1, 6, 8, 3, 5

```

Neste exercício, você recebe uma permutação de \( N \) inteiros, porém **um número foi removido**.

Sua tarefa é **descobrir qual número está faltando**.

---

## 🎯 Objetivo

Identificar o número ausente na permutação de \( 1 \) até \( N \).

---

## 📥 Entrada

- A primeira linha contém um inteiro \( N \)  
  \( (2 \leq N \leq 100000) \)

- A segunda linha contém \( N - 1 \) inteiros  
  separados por espaço, representando a sequência com um número faltando

---

## 📤 Saída

- Um único inteiro: o número que está faltando na permutação

---

## 💡 Exemplo

### Entrada
```

5
2 3 1 5

```

### Saída
```

4

```

---

## ⏱️ Restrições

- Tempo por teste: **1 segundo**
- Memória: **256 MB**

---

## 🧠 Dica

Uma forma eficiente de resolver é usar a fórmula da soma dos primeiros números naturais:

\[
S = \frac{N \cdot (N + 1)}{2}
\]

Depois, subtrair a soma dos valores fornecidos.

O resultado será o número faltante.

---