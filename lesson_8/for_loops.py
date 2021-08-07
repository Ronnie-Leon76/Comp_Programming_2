for i in range(0,9):
    if(i%2 == 0):
        print(i)

print("\n")
print("Second method: ")
for i in range(0,9,2):
    print(i, "",end="")

print("\n")
print("Pattern made with even numbers: ")
n=9
for k in range(0,5):
    for i in range(0,n,2):
        print(i,"",end="")
    n=n-2
    print("\n")


print("Second Alternative: ")
q=9
for s in range(0,5):
    for n in range(0,q):
        if(n%2 == 0):
            print(n, "",end="")
    q=q-2
    print("\n")
  

for k in range(9,0,-1):
    print(k)

