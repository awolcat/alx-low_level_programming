#!/usr/bin/python3
def check_palindrome(number=0):
    num = number
    num_str = str(num)
    reverse_num = ""
    for i in num_str:
        reverse_num = i + reverse_num
    if num_str == reverse_num:
        return 1
    else:
        return 0

def main():
    num1, num2 = 100, 100
    final = 0
    for num1 in range(100, 1000):
        for num2 in range(100, 1000):
            number = num1 * num2
            ret = check_palindrome(number)
            if ret == 1:
                if number > final:
                    final = number
       
    fp = open("102-result", "w")
    fp.write(str(final))
    fp.close()
main()

