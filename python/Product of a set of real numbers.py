
i = 0
product = 1
count = int(input("Enter the number of real numbers: "))
for i in range(count):
    x = float(input("Enter a real number: "))
    product = product * x
print("The product of the numbers is: ", product)

//Solved By ParthThaker007

import numpy
ourList = [1, 2, 3]
prodValue = numpy.prod(ourList)
print(prodValue)
