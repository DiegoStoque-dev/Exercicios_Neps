x = int(input())
y = int(input())

total = 0

if x <= 17 :
    total += 15
elif x >= 18 and x <= 59 :
    total += 30
else :
    total += 20

if y <= 17 :
    total += 15
elif y >= 18 and y <= 59 :
    total += 30
else :
    total += 20

print (total)