text = input()
dict = {}
reversed_text = " "

for letter in text:
    if letter in dict:
        dict[letter] += 1
    else:
        dict[letter] = 1

print(dict)

for i in text:
    reversed_text = i + reversed_text
print("Reversed String: ", reversed_text)



