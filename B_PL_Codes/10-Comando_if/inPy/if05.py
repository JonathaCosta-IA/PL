'''
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em python: Básico ao extremo
Escreva um programa que leia 5 valores, encontre o maior,  o menor e a média utilizando números float.

'''
a = float(input("Informe o primeiro valor:"))
b = float(input("Informe o segundo valor:"))
c = float(input("Informe o terceiro valor:"))
d = float(input("Informe o quarto valor:"))
e = float(input("Informe o quinto valor:"))
media = (a + b + c + d + e) / 5
maior,menor = a,a

if b > maior : maior = b
if c > maior : maior = c
if d > maior : maior = d
if e > maior : maior = e

if (b < menor) : menor = b
if (c < menor) : menor = c
if (d < menor) : menor = d
if (e < menor) : menor = e

print("\nO maior valor é ",maior)
print("O menor valor é ",menor)
print("O valor médio é ",media)