def swap_first_two(str1, str2):
  if len(str1) < 2 or len(str2) < 2:
    return "Strings is too short"
  new_str1 = str2[:2] + str1[2:]
  new_str2 = str1[:2] + str2[2:]
  return new_str1 + " " + new_str2

str1 = "nitin"
str2 = "sharma"
result = swap_first_two(str1, str2)
print(result)  
