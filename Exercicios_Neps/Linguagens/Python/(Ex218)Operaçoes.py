l = input()
n1, n2 = input().split()
n1 = float(n1)
n2 = float(n2)

if l == 'M':
    print(f"{(n1*n2):.2f}")
else :
    print(f"{(n1/n2):.2f}")