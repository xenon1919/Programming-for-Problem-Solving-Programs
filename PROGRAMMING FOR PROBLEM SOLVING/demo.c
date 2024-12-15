#include <stdio.h>

#define MAX_FRAMES 3 // Change this value to set the number of frames in memory

int main() {
    int pages[] = {2, 3, 2, 1, 5, 2, 4, 5, 3, 2}; // Example page reference string
    int num_pages = sizeof(pages) / sizeof(pages[0]);

    int frames[MAX_FRAMES] = {-1}; // Array to represent the frames in memory

    int page_faults = 0; // Counter to track the number of page faults

    // Simulate the page replacement algorithm
    for (int i = 0; i < num_pages; i++) {
        int page = pages[i];
        int page_found = 0;

        // Check if the page is already present in memory
        for (int j = 0; j < MAX_FRAMES; j++) {
            if (frames[j] == page) {
                page_found = 1;
                break;
            }
        }

        // If the page is not present in memory, it's a page fault
        if (!page_found) {
            page_faults++;

            // Find the first empty frame or the oldest page in memory to replace
            int replace_index = i % MAX_FRAMES;
            frames[replace_index] = page;
        }
    }

    // Display the number of page faults
    printf("Number of page faults: %d\n", page_faults);

    return 0;
}
