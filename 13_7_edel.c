#include <stdio.h>

// Define the time_struct structure
struct time_struct {
    int hour;
    int minute;
    int second;
};

// Function to input a new time
void inputTime(struct time_struct *time) {
    printf("Enter the hour (0-23): ");
    scanf("%d", &time->hour);
    
    printf("Enter the minute (0-59): ");
    scanf("%d", &time->minute);
    
    printf("Enter the second (0-59): ");
    scanf("%d", &time->second);
}

// Function to display the time
void displayTime(const struct time_struct *time) {
    printf("Time: %02d:%02d:%02d\n", time->hour, time->minute, time->second);
}

// Function to update the time by one second
void updateTime(struct time_struct *time) {
    time->second++;
    
    if (time->second == 60) {
        time->second = 0;
        time->minute++;
        
        if (time->minute == 60) {
            time->minute = 0;
            time->hour++;
            
            if (time->hour == 24) {
                time->hour = 0;
            }
        }
    }
}

int main() {
    struct time_struct time;
    
    // Input a new time
    inputTime(&time);
    
    // Display the initial time
    displayTime(&time);
    
    // Update the time by one second
    updateTime(&time);
    
    // Display the updated time
    printf("Updated ");
    displayTime(&time);
    
    return 0;
}
