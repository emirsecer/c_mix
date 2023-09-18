#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int running = 1;

    while (running) {
        printf("You: ");
        scanf("%s", input);

        if (strcmp(input, "hi") == 0 || strcmp(input, "hello") == 0) {
            printf("Chatbot: Hello\n");
        } else if (strcmp(input, "how") == 0 && strcmp(input, "are") == 0 && strcmp(input, "you") == 0) {
            printf("Chatbot: I'm doing good. How about you?\n");
        } else if (strcmp(input, "quit") == 0) {
            printf("Chatbot: Bye bye take care. It was nice talking to you :)\n");
            running = 0;
        } else {
            printf("Chatbot: I don't understand what you said.\n");
        }
    }
    return 0;
}
