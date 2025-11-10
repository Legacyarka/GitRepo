l=[10,20,30]
t=(1,2,5,6,9)
c = int(input("enter char: "))
for i in range(len(t)):
    if c == t[i]:
        print(c,"is at index", i)
        break
