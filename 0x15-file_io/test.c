	int fd = 0;
	size_t counter = 0;
	ssize_t write_out = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[counter])
		counter++;

	write_out = write(fd, text_content, counter);
	if (write_out == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);