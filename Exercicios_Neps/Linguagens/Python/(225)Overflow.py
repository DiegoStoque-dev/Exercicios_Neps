n = int(input())
linha = input().split()

x = int(linha[0])
op = linha[1]
y = int(linha[2])

if op == '+' :
    if (x + y) > n :
        print ("OVERFLOW")
    else :
        print ("OK")
elif op == '*' :
    if (x * y) > n :
        print ("OVERFLOW")
    else :
        print ("OK")