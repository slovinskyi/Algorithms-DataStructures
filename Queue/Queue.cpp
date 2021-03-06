#include "ArrayQueue.h"

int main()
{
    char operation;
    int input_size, value;

    std::cin >> input_size;
        if (input_size > SIZE) {
        throw std::out_of_range("Zmniejsz rozmiar danych wejsciowych!");
    }

    Queue queue(input_size);

    for (int i = 0; i < input_size; i++) {
        std::cin >> operation;
        if (operation == 'A') {
            std::cin >> value;
            queue.enqueue(value);
        }
        else if (operation == 'D') {
            try {
                std::cout << queue.dequeue() << std::endl;
            }
            catch (std::out_of_range) {
                std::cout << "EMPTY" << std::endl;
            }
        }
        else if (operation == 'S') {
            std::cout << queue.size() << std::endl;
        }
    }
    return 0;
}
