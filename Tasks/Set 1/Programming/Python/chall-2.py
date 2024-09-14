def longest_prefix(phone_numbers, max_len):
    if not phone_numbers:
        return -1
    
    min_len = min(len(phone) for phone in phone_numbers)
    
    common_prefix = ""
    
    for i in range(min(min_len, max_len)):  
        current_char = phone_numbers[0][i]
        
        for phone in phone_numbers:
            if phone[i] != current_char:
                return len(common_prefix)
        
        common_prefix += current_char
    
    return len(common_prefix)


def city_code_length(phone_numbers):
    if len(phone_numbers) == 0:
        return -1
    
    phone_length = len(phone_numbers[0])
    for phone in phone_numbers:
        if len(phone) != phone_length:
            return -1  
    
    max_length = phone_length // 2
    
    lcp_length = longest_prefix(phone_numbers, max_length)
    
    if lcp_length > 0:
        return lcp_length
    else:
        return -1


def main():
    t = int(input("numbers needed: "))
    
    for _ in range(t):
        n = int(input())  
        phone_numbers = [input().strip() for _ in range(n)]  
        
        print(city_code_length(phone_numbers))


main()
