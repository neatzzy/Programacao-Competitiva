def inverte(str: str):
  if str == '':
    return str
  aux = str[0]
  str = str[1:]
  return inverte(str) + aux

t = 'macaco'
print(inverte(t))

