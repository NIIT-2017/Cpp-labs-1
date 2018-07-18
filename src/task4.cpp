#include <cstring>

// Функция сложения сверх длинных чисел в виде строк
char * sum(char *x, char *y)
{
	char * result;
	// Проверим строки на корректность если строки не корректны выведим сообщение с ошибкой
	for (int i = 0; x[i] != '\0'; i++)
	{
		if (x[i] < '0' || x[i] > '9')
		{
			result = new char[27] {'Н','е','в','е','р','н','ы','е',' ',
				'в','х','о','д','н','ы','е',' ','п','а','р','а','м','е','т','р','ы', '\0'};
			return result;
		}
	}
	for (int i = 0; y[i] != '\0'; i++)
	{
		if (y[i] < '0' || y[i] > '9')
		{
			result = new char[27]{ 'Н','е','в','е','р','н','ы','е',' ',
				'в','х','о','д','н','ы','е',' ','п','а','р','а','м','е','т','р','ы', '\0' };
			return result;
		}
	}
	// Вычисляем размеры строк
	unsigned long long int x_size = strlen(x);
	unsigned long long int y_size = strlen(y);
	// Размер результата сложения будет максимум равен размеру большего из слогаемых + 1
	unsigned long long int size;
	if (x_size > y_size)
		size = x_size + 2;	// strlen не учитывает \0	
	else
		size = y_size + 2;
		 
	// Выделяем память под строку
	result = new char [size];
	// Признак того, что нужно добавить единицу. 
	char mark = 0;

	// Складываем
	for(unsigned long long int i = (size - 2);  ; i--)
	{
		if ((x_size > 0) && (y_size > 0))
		{
			result[i] = x[x_size - 1] + y[y_size - 1] - 2 * 48 + mark;
			x_size--;
			y_size--;
		}
		else if ((x_size > 0))
		{
			result[i] = x[x_size - 1] - 48 + mark;
			x_size--;
		}
		else if ((y_size > 0))
		{
			result[i] = y[y_size - 1] - 48 + mark;
			y_size--;
		}
		else
		{
			result[i] = mark;
		}

		if (result[i] / 10)
		{
			mark = 1;
			result[i] = result[i] % 10;
		}
		else
		{
			mark = 0;
		}

		result[i] = result[i] + 48;

	// !!!!!!!!!!!!!!!!!!!! Как то не очень
	// Выход из цикла
		if (i == 0)
			break;
	}
	// Вставляем конец строки
	result[size - 1] = '\0';
	// Если в начале получился '0' нужно его убрать
	if (result[0] == '0')
	{
		for (unsigned long long int i = 0; i < size; i++)
			result[i] = result[i + 1];
	}
	return result;
}