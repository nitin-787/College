def add_lists(list1, list2):
  result = []
  for i in range(min(len(list1), len(list2))):
    result.append(list1[i] + list2[i])
  result.extend(list1[len(list2):])
  result.extend(list2[len(list1):])
  return result

list1 = ["M", "na", "i", "nit"]
list2 = ["y", "me", "s", "in", "sha"]
result = add_lists(list1, list2)
print(result)
