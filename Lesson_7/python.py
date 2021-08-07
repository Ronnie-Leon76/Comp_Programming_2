num1 = 10
num2 = 30
num3 = num1 + num2
print(num3)

nam1 = int(input())
nam2 = int(input())
nam3 = nam1 + nam2
print(nam3)
var1 = int(input())
var2 = int(input())
var3 = int(input())

if (var1>var2) and (var1>var3) :
    print(str(var1) +" " + "Is greater than" + " " + str(var2) + " " + "and" + " " +  str(var3))
elif (var2>var1) and (var2>var3):
    print(str(var2) + " " + "Is greater than" + " " + str(var1) + " " + "and" + " " + str(var3))
else:
    print(str(var3) + " " + "Is greater than" + " " + str(var1) + " " + "and" + " " + str(var2))


