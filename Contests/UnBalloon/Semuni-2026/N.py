text = input()

if len(text) < 4 or len(text) > 20:
    print(f"{text} com tamanho incorreto: {len(text)}")
else:
    text = text.replace("a", "4")
    text = text.replace("A", "4")
    text = text.replace("e", "3")
    text = text.replace("E", "3")
    text = text.replace("o", "0")
    text = text.replace("O", "0")
    text = text.replace("s", "$")
    text = text.replace("S", "$")
    print(text)