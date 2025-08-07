n = int(input())
a = []
ele = input().split()
for value in ele:
    a.append(int(value))
    
x = 0
for i in a:
    x ^= i
    
print(x)