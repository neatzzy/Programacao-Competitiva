def handleIO(line):
    if '=' in line and line.partition('=')[2].strip().startswith('input()'):
        expr = line.partition('=')[0].strip()
        return "LEIA " + expr

    elif line.startswith('print('):
        expr = line[line.find("(")+1 : line.rfind(")")]
        return "APRESENTE " + expr

line = input().strip()

if line.startswith('if '):
    expr = line[3:].rstrip(':').strip()
    print("SE " + expr + " ENTAO " + handleIO(input().strip()).strip())

elif line.startswith('while '):
    expr = line[6:].rstrip(':').strip()
    print("ENQUANTO " + expr + ' ' + handleIO(input().strip()).strip())

else: print(handleIO(line))
