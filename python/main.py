# A Python Program to print duplicates present in list. 

l = ["Afnan", 20, 10, 60, 10, 30, 40, 70, 60, 85, 35, 28, 94, 85, 10]
d = []
for i in l:
    if l.count(i) > 1 and i not in d:
        d.append(i)
print(d)