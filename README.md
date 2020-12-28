# Exam_prep
My solutions for a few tasks that appear in the exams at Hive.

## Lvl01:

### first_word
A program that takes a string and displays its first word (a section of string delimited by spaces/tabs or by the start/end of the string), followed by a newline. If the number of arguments is not 1, or if there are no words, it displays only a newline.

### repeat_alpha
A program called that takes a string and display it repeating each alphabetical character as many times as its alphabetical index, followed by a newline. 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc. Case-sensitive. If the number of arguments is not 1, it displays only a newline.

### rev_print
A program that takes a string and displays it in reverse, followed by a newline. If the number of arguments is not 1, it displays only a newline.

### rot_13
A program that takes a string and displays it, replacing each of its letters by the letter 13 spaces ahead of it in alphabetical order, followed by a newline. 'z' becomes 'm' and 'Z' becomes 'M'. Case-sensitive. If the number of arguments is not 1, it displays only a newline.

### rotone
A program that takes a string and displays it, replacing each of its letters by the next one in alphabetical order, followed by a newline. 'z' becomes 'a' and 'Z' becomes 'A'. Case-sensitive. If the number of arguments is not 1, it displays only a newline.

### search_and_replace
A program that takes 3 arguments: the first is a string in which you want to replace any letter (the second argument) by another letter (the third argument) and displays the outcome, followed by a newline. If the second argument is not contained found in the first one, then the program simply rewrites the string without changes. If the number of arguments is not 3, it displays only a newline.

### ulstr
A program that takes a string and reverses the case of all of its letters (a-z), followed by a newline. Other characters remain unchanged. If the number of arguments is not 1, it displays only a newline.

## Lvl02:

### alpha_mirror
A program that takes a string and displays it after replacing each alphabetical character by the opposite alphabetical character, followed by a newline. 'a' becomes 'z', 'Z' becomes 'A'. 'd' becomes 'w', 'M' becomes 'N'. Case-sensitive. If the number of arguments is not 1, it displays only a newline.

### do_op
A program that takes three strings: the first and the third are representations of base-10 signed integers, the second is a representation of an arithmetic operator: + - * / %, and displays the result of the arithmetic operation, followed by a newline. If the number of arguments is not 3, it displays only a newline.

### ft_atoi
A function that converts a string argument into an integer and returns it (like the standard atoi(const char *str) function).

### ft_strpbrk
A function that returns a pointer to the first occurrence (in str1) of any of the characters that are part of str2, or a null pointer if there are no matches (like the standard strpbrk(char * str1, const char * str2) function).

### ft_strrev
A function that reverses (in-place) a string.

### is_power_of_2
A function that determines if a given number is a power of 2 and returns 1 if the given number is a power of 2, otherwise it returns 0.

### last_word
A program that takes a string and displays its last word (a section of string delimited by spaces/tabs or by the start/end of the string), followed by a newline. If the number of arguments is not 1, it displays only a newline.

### max
A function that returns the largest number found in an array. If the array is empty, the function returns 0. The first parameter is an array of ints, the second is the number of elements in the array.

### union
A program that takes two strings and displays, without doubles, the characters (in the order they appear) that appear in either one of the strings, followed by a newline. If the number of arguments is not 2, it displays only a newline.

### wdmatch
A program that takes two strings and checks whether it's possible to write the first string using the characters included in the second string (while respecting the order in which they appear). If it's possible, the program displays the string, followed by a newline. If it is not possible or if the number of arguments is not 2, it displays only a newline.

## Lvl03:

### add_prime_sum
A program that takes a positive integer as an argument and displays the sum of all prime numbers inferior or equal to it, followed by a newline. If the number of arguments is not 1, or the argument is not a positive number, it displays only 0, followed by a newline.

### ft_range
A function that returns an array of ints containing all the values between min (included) and max (included). If min’s value is greater or equal to max’s value, a null pointer is returned.

## Lvl04:

### fprime
A program that takes a positive int and displays its prime factors, followed by a newline. Factors must be displayed in ascending order and separated by ' * '. If the number of arguments is not 1, it displays only a newline.

### ft_itoa
A function that allocates and returns a “fresh” string ending with ’\0’ representing the integer "n" given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL.

### ft_split
A function that takes a string, splits it into words (a part of a string delimited either by spaces/tabs/newlines, or by the start/end of the string), and returns them as a NULL-terminated array of strings.

### sort_int_tab
A function that sorts (in-place) the 'tab' int array, that contains exactly 'size' members, in ascending order. Doubles are preserved.

## Lvl05:

### ft_itoa_base
Works the same way as ft_itoa, but it also takes "base" as a parameter, allowing you to carry out the conversion for any base.
