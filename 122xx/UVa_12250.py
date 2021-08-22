# Online Judge - 12250
t = 1
while True:
    line = input()
    if line == "HELLO":
        print("Case {}: ENGLISH".format(t))
    elif line == "HOLA":
        print("Case {}: SPANISH".format(t))
    elif line == "HALLO":
        print("Case {}: GERMAN".format(t))
    elif line == "BONJOUR":
        print("Case {}: FRENCH".format(t))
    elif line == "CIAO":
        print("Case {}: ITALIAN".format(t))
    elif line == "ZDRAVSTVUJTE":
        print("Case {}: RUSSIAN".format(t))
    elif line == "#":
        break
    else:
        print("Case {}: UNKNOWN".format(t))
    t += 1
