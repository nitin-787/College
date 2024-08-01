str = "play"

if len(str) < 3:
    str = str
elif str[-3:] == "ing":
    str = str[:-3] + "ly"
else:
    str += "ing"

print(str)