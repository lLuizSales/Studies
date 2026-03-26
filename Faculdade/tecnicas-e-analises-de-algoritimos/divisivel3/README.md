# 🔢 C. Divisibilidade por 3

## 📖 Descrição

Na matemática, um número é **divisível por 3** quando a soma dos valores absolutos de seus algarismos resulta em um número divisível por 3.

Ou seja:
- Some todos os dígitos do número
- Se o resultado for divisível por 3 → o número também é

---

## 🧠 Exemplos

```

51 → 5 + 1 = 6 ✓

101 → 1 + 0 + 1 = 2 ✗

234 → 2 + 3 + 4 = 9 ✓

7.851 → 7 + 8 + 5 + 1 = 21 → 2 + 1 = 3 ✓

9.631 → 9 + 6 + 3 + 1 = 19 → 1 + 9 = 10 → 1 + 0 = 1 ✗

998.877.665.544 → 9+9+8+8+7+7+6+6+5+5+4+4 = 78 → 7 + 8 = 15 → 1 + 5 = 6 ✓

```

---

## 🎯 Objetivo

Dado um número, determinar:
- A soma dos seus dígitos
- Se ele é divisível por 3

---

## 📥 Entrada

A entrada contém **vários casos de teste**.

Cada caso possui:

- Um inteiro \( D \)  
  \( (1 \leq D \leq 100000) \) → quantidade de dígitos

- Um número \( N \)  
  \( (0 \leq N \leq 10^D) \)

⚠️ A entrada termina quando:
```

D = -1

```

---

## 📤 Saída

Para cada caso de teste, imprimir:

```

<somadigitos> sim

```
ou
```

<somadigitos> nao

```

---

## 💡 Exemplo

### Entrada
```

2
51
3
101
-1

```

### Saída
```

6 sim
2 nao

```

---

## ⏱️ Restrições

- Tempo por teste: **3 segundos**
- Memória: **256 MB**

---

## ⚠️ Observação importante

Como o número pode ser muito grande (até \( 10^D \)),  
é recomendado **tratar o número como string**, e não como inteiro.

---

## 🚀 Dica de implementação

- Percorra cada caractere da string
- Converta para inteiro
- Some os dígitos
- Verifique:
```
soma % 3 == 0
```
---