slist = [34, 7, 23, 32, 5, 62]
key = int(input("Enter the key to search: "))

for i in range(len(slist)):
    for j in range(len(slist)-1):
        if slist[j] > slist[j+1]:
            temp = slist[j]
            slist[j] = slist[j+1]
            slist[j+1] = temp

print("Sorted list is:", slist)

if key in slist:
    print("Key found")
else:
    print("Key not found")