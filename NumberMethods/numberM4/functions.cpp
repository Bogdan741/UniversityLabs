

template <typename T>
T MyABS(const std::vector<T>& b)
{
	T sum = static_cast<T>(0);
	for (auto x : b)
	{
		sum += x * x;
	}
	return sqrt(sum);
}
template <typename T>
std::istream& get(std::istream& is, MyMatrix<T>& M, std::vector<T>& b)
{
	for (std::size_t i = 0; i < M.getRow(); i++)
	{
		for (std::size_t j = 0; j < M.getCol(); j++)
		{
			is >> M[i][j];
		}
		is >> b[i];
	}
	return is;
}