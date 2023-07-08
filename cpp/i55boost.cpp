// Boost.Asio - Asynchronous input/output

#include <boost/asio.hpp>
#include <iostream>

// Handler function to be called when async operation is completed
void handle_read(const boost::system::error_code& error, std::size_t bytes_transferred)
{
    if (!error)
    {
        std::cout << "Read " << bytes_transferred << " bytes." << std::endl;
    }
    else
    {
        std::cout << "Error occurred: " << error.message() << std::endl;
    }
}

int main_boost_1()
{
    boost::asio::io_context io_context;
    boost::asio::ip::tcp::socket socket(io_context);

    // Connect to a TCP server at localhost:12345
    boost::asio::ip::tcp::endpoint endpoint(boost::asio::ip::address::from_string("127.0.0.1"), 12345);
    socket.connect(endpoint);

    // Buffer to store the received data
    boost::asio::streambuf buffer;

    // Asynchronously read data from the socket and call handle_read when complete
    boost::asio::async_read(socket, buffer, handle_read);

    // Run the I/O context to process the asynchronous operation
    io_context.run();

    return 0;
}

//Boost.Regex - Regular expression library
#include <boost/regex.hpp>
#include <iostream>
#include <string>

int main_boost_2()
{
    std::string input = "The quick brown fox jumps over the lazy dog.";

    // Create a regex pattern to find all words in the input string
    boost::regex pattern("\\w+");

    // Iterate over all matches in the input string
    boost::sregex_iterator begin(input.begin(), input.end(), pattern);
    boost::sregex_iterator end;

    for (boost::sregex_iterator it = begin; it != end; ++it)
    {
        // Print the matched word
        std::cout << it->str() << std::endl;
    }

    return 0;
}

//Boost.Filesystem - Filesystem operations
#include <boost/filesystem.hpp>
#include <iostream>

namespace fs = boost::filesystem;

int main_boost_3()
{
    fs::path current_path = fs::current_path();

    std::cout << "Current path: " << current_path << std::endl;

    // Iterate over all files and directories in the current path
    for (const auto& entry : fs::directory_iterator(current_path))
    {
        std::cout << entry.path() << " is a " << (fs::is_directory(entry.path()) ? "directory" : "file") << std::endl;
    }

    return 0;
}

// Boost.Optional - A container for optional values
#include <boost/optional.hpp>
#include <iostream>
#include <string>

boost::optional<int> parse_int(const std::string& input)
{
    try
    {
        return std::stoi(input);
    }
    catch (const std::invalid_argument&)
    {
        return boost::none;  // Return an empty optional when parsing fails
    }
}

int main_boost_4()
{
    std::string input = "123";
    boost::optional<int> parsed = parse_int(input);

    if (parsed)
    {
        std::cout << "Parsed value: " << *parsed << std::endl;
    }
    else
    {
        std::cout << "Failed to parse input." << std::endl;
    }

    return 0;
}

//Boost thread: This library provides a portable threading interface. Here's an example:
#include <boost/thread.hpp>
#include <iostream>

void worker()
{
    std::cout << "Worker thread id: " << boost::this_thread::get_id() << '\n';
}

int main_boost_thread()
{
    boost::thread t(worker);

    std::cout << "Main thread id: " << boost::this_thread::get_id() << '\n';

    t.join();

    return 0;
}

// Containers
#include <boost/container/vector.hpp>
#include <iostream>

int main_boost_containers()
{
    boost::container::vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    for (auto& i : vec) {
        std::cout << i << " ";
    }

    return 0;
}

// Functions

#include <boost/function.hpp>
#include <iostream>

int addhere(int x, int y)
{
    return x + y;
}

int main_boost_functions()
{
    boost::function<int(int, int)> f = addhere;

    std::cout << f(1, 2) << std::endl;

    return 0;
}

// generic programming and trait classes
#include <boost/type_traits.hpp>
#include <iostream>

template <typename T>
void print_if_pointer(T x)
{
    if (boost::is_pointer<T>::value) {
        std::cout << "Pointer: " << x << std::endl;
    } else {
        std::cout << "Not a pointer: " << x << std::endl;
    }
}

int main_boost_generic()
{
    int i = 42;
    int* p = &i;

    print_if_pointer(i);
    print_if_pointer(p);

    return 0;
}

// Pool
#include <boost/pool/pool.hpp>
#include <iostream>

int main_boost_pool()
{
    boost::pool<> p(sizeof(int));

    int* i = static_cast<int*>(p.malloc());
    *i = 42;

    std::cout << *i << std::endl;

    p.free(i);

    return 0;
}