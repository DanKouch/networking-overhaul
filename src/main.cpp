#include <iostream>
#include "PracticalSocket.h"
#include "TelemetryLoop.h"
#include <chrono>
#include "data.h"

#define localhost (char *) "0.0.0.0"

int main() {

    initData();
    std::cout << "Press any button to stop sending packets..." << std::endl;

    SetupTelemetry((char *)"0.0.0.0", 3000);

    // Keeps the main thread alive until the user presses a button
    std::cin.ignore();
    return 0;
}