
	if (arrayD == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arrayD[i] = malloc(sizeof(int) * width);

		if (arrayD[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arrayD[i]);

			free(arrayD);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
			arrayD[i][n] = 0;
	}

	return (arrayD);
}
