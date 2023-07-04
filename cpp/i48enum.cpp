// define options

enum class SortingAlgorithm {
    BubbleSort,
    QuickSort,
    MergeSort
};

void sortArray(int *arr, int size, SortingAlgorithm algorithm) {
    switch (algorithm) {
        case SortingAlgorithm::BubbleSort:
            // Implementation of bubble sort
            break;
        case SortingAlgorithm::QuickSort:
            // Implementation of quick sort
            break;
        case SortingAlgorithm::MergeSort:
            // Implementation of merge sort
            break;
        default:
            // Handle invalid algorithm
    }
}

// Usage:
void fi48sort() {
    int arr[] = {2, 1, 3};
    sortArray(arr, 3, SortingAlgorithm::MergeSort);
}

// state machines
enum class State {
    Idle,
    Running,
    Paused,
    Stopped
};

class StateMachine {
public:
    void start() {
        switch (m_state) {
            case State::Idle:
                m_state = State::Running;
                // Start running
                break;
            case State::Paused:
                m_state = State::Running;
                // Resume running
                break;
            default:
                // Handle invalid state
        }
    }

    void pause() {
        switch (m_state) {
            case State::Running:
                m_state = State::Paused;
                // Pause running
                break;
            default:
                // Handle invalid state
        }
    }

    void stop() {
        switch (m_state) {
            case State::Running:
            case State::Paused:
                m_state = State::Stopped;
                // Stop running
                break;
            default:
                // Handle invalid state
        }
    }

private:
    State m_state = State::Idle;
};

// Usage:
void fstatemachinei48() {
    StateMachine machine;
    machine.start();
    machine.pause();
    machine.start();
    machine.stop();
}

// Constants
enum class Color {
    Red,
    Green,
    Blue
};

class GuiElement {
public:
    virtual void setColor(Color color) = 0;
};

class Button : public GuiElement {
public:
    void setColor(Color color) override {
        switch (color) {
            case Color::Red:
                // Set button color to red
                break;
            case Color::Green:
                // Set button color to green
                break;
            case Color::Blue:
                // Set button color to blue
                break;
            default:
                // Handle unknown color
                break;
        }
    }
};

// Usage:
void i48color() {
    Button button;
    button.setColor(Color::Red);
}