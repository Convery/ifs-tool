const char *va( const char *fmt, ... );
void* malloc_n(size_t length);
void free_n(void* memPtr);

std::vector<std::string> GetPassedArchives();
bool hasEnding (std::string const &fullString, std::string const &ending);
std::string fixString(std::string str);
std::vector<std::string> explode(const std::string& str, const std::string& delimiters);
