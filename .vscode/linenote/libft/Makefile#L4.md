FUNCTIONS --> El nombre de todos nuestros ficheros '.c' que utilizamos

FBONUS --> El nombre de todos nuestros ficheros '.c' que utilizamos para la parte del bonus y que tienen que ir separados segun el subject

OBJ --> Contiene todos los '.o' de los archivoso de FUNCTIONS que son generados cuando se ejecuta el primer comando de la regla $(NAME)

		${FUNCTIONS:.c=.o} --> recoge todos los ficheros .o generados a partir de todos los .c de los archivos contenidos en FUNCTIONS. Estos .o son generados en el primer comando al ejecutar la regla $(NAME)

OBJBONUS --> Contiene todos los '.o' de los archivoso de FBONUS

		${FBONUS.c=.o} --> recoge todos los ficheros .o generados a partir de todos los .c de los archivos contenidos en FBONUS. Estos .o son generados en el primer comando de 'bonus:'

NAME --> Es una macro que recoge el valor del nombre que queremos darle a la librería.

CC --> recoge el compilador que vamos a usar.

CFLAGS --> Recoge los flags que vamos a utilizar

.c.o --> Es una regla implícita. En realidad NO hace falta ponerla ya que su comando dice que para generar los .o deben generarse antes los .c pero make ya sabe que esto tiene que ser así por lo que no hace falta que se lo digamos. Implicitamente make ya lo da por hecho y de hecho lo hace sin que se lo digamos por eso podemos quitarlo. Prueba a comentar esta linea y veras que make devuelve el mismo resultado.

all --> Por defecto make solo considea el primer target (en este caso NAME) como el target final y solo puede ejecutar uno. pero, y si necesitaramos crear varios target finales al mismo tiempo?

En este caso solo ejecutamos $(NAME) pero si tuvieramos mas targets finales que ejecutar se utiliza un target final llamado all. Colocados todos los targets en sus dependencias, lo que hara sera generarlos todos. Es necesario hacerlo así ya que make no permite generar mas de un target final, unicamente si lo hacemos de esta forma. En este caso lo dejamos sin dependencias ya que solo ejecutamos un target asi que podriamos hacer 'make all' o 'make


```bash
all : miprograma1 miprograma2

miprograma1 : main.o primero.o segundo.o
				gcc -o miprograma1 main.o primero.o segundo.o

miprograma2: principal.o segundo.o
				gcc -o miprograma principal.o segundo.o
```

$(NAME) --> Contiene el nombre que le hemos dado a la libría. Es el fichero que se tiene que generar cuando se ejecutan los comandos que contiene. Es conocida como varible de expanión y se suele usar en vez de directamente libft.a ya que si mañana quisieramos cambiar el nombre de le damos a la libreía, unicamente lo cambiamos en la macro de arriba y ya se expadiría su valor por todo el Makefile en caso de que la usaramos en mas sitios.

		${CC} ${FLAGS} -c ${FUNCTIONS} --> Este comando se utiliza para compilar los ficheros .c de FUNCTIONS y transformarlos en .o con el compilador que se le pasa junto con los flags. A continuación podemos verlo mejor desglosado

						${CC} --> contiene el valor del compilador. Es como si pusieras gcc

						${FLAGS} --> contiene el valor de los flags. Es como si pusieras -Wall -Wextra -Werror -g

						-c --> Le indica al compilador que tiene que transformar los .c en .o

						{FUNCTIONS} --> contiene todas las funciones .c

		Todo lo que hemos arriba, escrito en shell quedaria de la siguiente forma:
		gcc -Wall -Wextra -Werror -c ft_memset.c ft_memcpy.c ...


		ar rc ${NAME}	${OBJ} --> va a generar la librería, que no es otra cosa que el fichero.a

						ar rc --> comando para generar la libraría. rc son unos flags que se añaden pero no son necesarios.

						${NAME} --> Es el nombre que vas a darle a la libreria cuadno se genere. En este caso estamos utilizando una variable de expansión que contiene el valor de libft.a

						${OBJ} --> contiene todos los ficheros .o necesarios para generar la librería.

		Todo lo que hemos arriba, escrito en shell quedaria de la siguiente forma:
		ar rc libft.a ft_memset.o ft_memcpy.o ...

		ranlib ${NAME} --> Crea un índex dentro del archivo de la librería para que a la hora de usarlo el compilador gcc sepa donde encontrar cada función que necesita y nuestro programa tarde menos.

		Visto en shell quedaría escrito de la siguiente forma:
		ranlib libft.a

bonus: --> Sigue el mismo procedimiento que $(NAME). En este caso no esta entre paréntesis ni dollar ya que no es una macro extendida. con esto quiero decir que bonus no significa otra palabra como ocurria con NAME, la cual significa libft.a

clean: --> Borra todos los .o tanto de la parte obligatoria como de los bonus

fclean: --> Borra la librería, esto es, el fichero libft.a.
			Además tiene como dependencía "clean" por lo que antes de borrar la librería borrara todos los .o tanto de la parte obligatoria como de los bonus

re: --> Borra todo y vuelve a ejecutar el programa con $(NAME)

.PHONY: --> Se utiliza para señalar que targets del fichero Makefile son ficticios
			para protegerlos en caso de que por casualidad hubiera un fichero en tu programa con ese mismo nombre.

			Si se diera el caso de que tuvieras un archivo con el mismo nombre que "clean" y ese archivo no hubiera cambiado, cuando quisieras ejecutar la regla para borrar los ficheros, make te deolveria un mensaje diciendo queno hay nada que hacer ya que todo esta al día y entonces no podrías borrar.

			Con .PHONY indicamos los ficheros que queremos proteger y así evitamos ese problema
