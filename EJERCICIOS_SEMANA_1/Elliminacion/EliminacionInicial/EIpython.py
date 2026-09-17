inputArr = [11, 21, 31, 41, 51, 61]
print("Antes de la eliminación, el array es:")
for j in range(len(inputArr)):
    print(inputArr[j], end=' ')

inputArr.pop(0)
print("\nDespués de la eliminación, el array es:")
for j in range(len(inputArr)):
    print(inputArr[j], end=' ')