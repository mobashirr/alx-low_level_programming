#!/usr/bin/python3
def is_palindrome(num):
    st = str(num)
    return st == st[::-1]

def find_largest_palindrome():
    largest_palindrome = 0

    for i in range(100, 1000):
        for j in range(i, 1000):
            product = i * j
            if is_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product

    return largest_palindrome

result = find_largest_palindrome()

# Save the result in the specified file
with open("0x17-doubly_linked_lists/102-result", "w") as file:
    file.write(str(result))
