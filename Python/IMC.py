usuario = {}

def Pedir_Data ():
    nombre = input ('Por favor, ingrese su nombre: ')
    if nombre.isalpha(): print ('Nombre inválido')
    while nombre.isalpha () == False:
        nombre = input ('Ingrese nuevamente su nombre: ')

    apellido = input ('Por favor, ingrese su apellido: ')
    if apellido.isalpha(): print ('Apellido inválido')
    while apellido.isalpha () == False:
        apellido = input ('Ingrese nuevamente su apellido: ')

    mail = input ('Por favor, ingrese su mail para enviar los resultados: ')
    while '@' not in usuario ['mail']:
        mail = input ('Ingrese nuevamente su mail')

    peso = input ('Por favor, ingrese su peso en kilogramos: ')
    peso = float (peso)

    altura = input ('Por favor, ingrese su altura en metros: ')
    altura = float (altura)

    edad = input ('Por favor, ingrese su edad: ')
    if not edad.isdigit(): print ('Edad inválida')
    while edad.isdigit () == False:
        edad = input ('Ingrese nuevamente su edad: ')

    telefono = input ('Por favor, ingrese su número de teléfono: ')
    if not telefono.isdigit(): print ('Teléfono inválido')
    while telefono.isdigit () == False:
        telefono = input ('Ingrese nuevamente su teléfono: ')

    
    
    usuario['nombre'] = nombre
    usuario['apellido'] = apellido
    usuario['mail'] = mail
    usuario['peso'] = peso
    usuario['altura'] = altura
    usuario['edad'] = edad
    usuario['telefono'] = telefono
    
def calculo_IMC ():
    IMC = usuario ['peso']/(usuario ['altura']**2)
    IMC = round(IMC, 2)
    return IMC

def cat_IMC (IMC):
    print (f'\nSu indice de masa corporal es: {IMC}')
    if IMC < 18.5: print ('Su peso es inferior al normal')
    if 18.5 <= IMC <= 24.9: print ('Su peso es normal')  
    if 25 <= IMC <= 29.9: print ('Usted tiene sobre peso')
    if 30 <= IMC <= 34.9: print ('Usted sufre obesidad tipo I')
    if 35 <= IMC <= 39.9: print ('Usted sufre obesidad tipo II')
    if IMC > 40: print ('Usted sufre obesidad tipo III')

Pedir_Data ()
cat_IMC (calculo_IMC())