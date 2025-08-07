arr = list(map(int, input().split()))

sumarr = sum(arr)
min_num = min(arr)
max_num = max(arr)

min_sum = sumarr - max_num
max_sum = sumarr - min_num

print(min_sum, max_sum)
