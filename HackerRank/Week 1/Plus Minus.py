n = int(input())
arr = []
ele = input().split()
for value in ele:
    arr.append(int(value))

count_positive = 0
count_negative = 0
count_zero = 0

for i in arr:
    if i > 0:
        count_positive += 1
    elif i < 0:
        count_negative += 1
    else:
        count_zero += 1

print(format(count_positive / n, '.6f'))
print(format(count_negative / n, '.6f'))
print(format(count_zero / n, '.6f'))
