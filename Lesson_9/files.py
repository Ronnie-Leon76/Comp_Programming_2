"""
Python Files I/O
To input variables or items you can use:
    a) Rawinput() function
    b) Input() function

While...else
count = 0
while count < 5:
    print(count)
else:

"""

num1 = input()
num2 = input()
fo = open("foo.txt","w+")
fo.write(str(num1))
fo.write("\n")
fo.write(str(num2))
fo.write("\n")

#close opened file
fo.close()

fo = open("foo.txt","r+")
num3 = fo.read(2)
num4 = fo.read(3)

print(num3)
print(num4)
fo.close()
num5 = int(num3) + int(num4)

fo = open("foo.txt","w+")
fo.write(str(num5))
fo.close()

fo = open("foo.txt","r+")
sum = fo.read(8)
print(sum)
fo.close()



