"""
Lógica de programação
Prof. Jonatha Costa
Exercício resolvido em python
Escreva uma programa que leia uma nota e verifique se aprovado ou não,
Escreva um programa que leia duas notas, calcule a média e verifique se o aluno está aprovado ou não,
considerando como critério de aprovação média 7,0;
Versão 1: Código básico para passo-a-passo, sem blocos de código.

*****************************************************
Exercício : Reescreva o código utilizando outra lógica, estratégia ou comandos.
*****************************************************
"""

# Ler dados
nota1 = float(input("Informe uma nota 1:\n"))
nota2 = float(input("Informe uma nota 2:\n"))
# Testar
if  ((nota1+nota2)/2) >= 7.0:
    print("Candidato aprovado!\n")
else:
    print("Candidado não aprovado!\n")

