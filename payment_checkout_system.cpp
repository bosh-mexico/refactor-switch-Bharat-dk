#include <iostream>
#include <string>
using namespace std;

// Enum for Payment Modes
enum class PaymentMode {
    PayPal,
    GooglePay,
    CreditCard,
    Unknown
};

// Convert PaymentMode to string
string paymentModeToString(PaymentMode mode) {
    switch (mode) {
        case PaymentMode::PayPal: return "PayPal";
        case PaymentMode::GooglePay: return "GooglePay";
        case PaymentMode::CreditCard: return "Credit Card";
        default: return "Unknown";
    }
}

// Handle invalid payment mode
void handleInvalidPaymentMode() {
    cerr << "Error: Invalid payment mode selected!" << endl;
}

// Checkout function
void checkout(PaymentMode mode, double amount) {
    switch (mode) {
        case PaymentMode::PayPal:
        case PaymentMode::GooglePay:
        case PaymentMode::CreditCard:
            cout << "Processing " << paymentModeToString(mode)
                 << " payment of $" << amount << endl;
            // Placeholder: integrate actual payment processing API here
            break;

        default:
            handleInvalidPaymentMode();
            break;
    }
}

// Example usage
int main() {
    double amount = 150.75;

    checkout(PaymentMode::PayPal, amount);
    checkout(PaymentMode::GooglePay, amount);
    checkout(PaymentMode::CreditCard, amount);
    checkout(PaymentMode::Unknown, amount);  // Simulates invalid input

    return 0;
}
