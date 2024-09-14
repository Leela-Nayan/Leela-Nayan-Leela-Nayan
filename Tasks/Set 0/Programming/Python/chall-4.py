def encrypt(plaintext):
    result = ""
    for char in plaintext:
        if char.isalpha():
            if char.isupper():
                result += chr(((ord(char) - ord('A') + 13) % 26) + ord('A'))
            else:
                result += chr(((ord(char) - ord('a') + 13) % 26) + ord('a'))
        else:
            result += char
    return result

def decrypt(encoded_text):
    result = ""
    for char in encoded_text:
        if char.isalpha():
            if char.isupper():
                result += chr(((ord(char) - ord('A') - 13) % 26) + ord('A'))
            else:
                result += chr(((ord(char) - ord('a') - 13) % 26) + ord('a'))
        else:
            result += char
    return result


plaintext = "Hello, this is a plaintext"
encrypted_text = encrypt(plaintext)
print("Encrypted:", encrypted_text)

decrypted_text = decrypt(encrypted_text)
print("Decrypted:", decrypted_text)
