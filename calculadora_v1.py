# Fazer uma calculadora com as quatro operações. 

# This is the input 
print("Digite um número: ")
x = input()
x = float(x)
print("Digite outro número: ")
y = input()
y = float(y)
print("Escolha uma opção: ")
print("+ - para somar")
print("- - para subtrair")
print("* - para multiplicar")
print("/ - para dividir")
operation = input()

# This is the processing
if operation == "+":
    print(x+y)
elif operation == "-":
    print(x-y)
elif operation == "*":
    print(x*y)
elif operation == "/":
    if y != 0:
        print(x/y)
    else:
        print("Operação não permitida \n")
else:
    print("Operação Inválida")
