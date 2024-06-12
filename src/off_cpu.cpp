#include <thread>
#include <string>
#include <vector>
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " num_of_threads" << std::endl;
        return -1;
    }

    std::size_t num = std::stoul(argv[1]);

    std::vector<std::thread> v;
    int j = 0;
    v.reserve(num);
    for (std::size_t i = 0; i != num; ++i) {
        v.emplace_back(
            [&] {
                std::this_thread::sleep_for(std::chrono::minutes{60});
            }
        );
    }
    for (auto& th : v) th.join();
}
