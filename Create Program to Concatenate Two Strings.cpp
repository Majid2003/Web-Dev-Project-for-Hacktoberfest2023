def concatenate_strings(str1, str2):
  """Concatenates two strings.

  Args:
    str1: The first string.
    str2: The second string.

  Returns:
    A string that is the concatenation of str1 and str2.
  """

  concatenated_string = str1 + str2
  return concatenated_string


# Example usage:

str1 = "Hello"
str2 = "world!"

concatenated_string = concatenate_strings(str1, str2)

print(concatenated_string)
