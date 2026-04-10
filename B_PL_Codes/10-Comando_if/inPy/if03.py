"""
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em python
Escreva um programa que leia duas notas, calcule a média ponderada e verifique se o aluno está aprovado ou não,
considerando como critério de aprovação média 7,0 e utilize peso 2 para nota1 e peso 3 para nota 2.
Versão 1: Código básico para passo-a-passo, sem blocos de código.

*****************************************************
Exercício : Reescreva o código utilizando outra lógica, estratégia ou comandos.
*****************************************************
"""

# Ler dados
nota1 = float(input("Informe uma nota 1:\n"))
nota2 = float(input("Informe uma nota 2:\n"))
peso1, peso2 = 2,3
# Testar
if  ((peso1*nota1 + peso2*nota2) / (peso1+peso2)) >= 7.0:
    print("Candidato aprovado!\n")
else:
    print("Candidado não aprovado!\n")

