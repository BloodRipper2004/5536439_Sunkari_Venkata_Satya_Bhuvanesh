s = input().lower()
for i in 'abcdefghijklmnopqrstuvwxyz':
    if i not in s:
        print("not pangram")
        break
else:
    print("pangram")