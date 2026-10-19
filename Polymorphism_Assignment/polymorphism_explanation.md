# Runtime Polymorphism in C++ — 
# Payment at a Shop

## How polymorphism works

1. **Parent class – `Payment`:** declares `virtual void pay(double)`. The word `virtual` tells C++ that child classes may replace this function.
2. **Derived classes – `CashPayment`, `MobileMoneyPayment`, `CardPayment`:** each inherits from `Payment` and **overrides** `pay()` with its own behaviour (marked with `override`).
3. **Base-class pointer:** `Payment* p[3]` can point to an object of any derived class, so all three payment types are stored in one array.
4. **One call, many behaviours:** `p[i]->pay(5000);` is written only once, yet it prints a different message depending on which object `p[i]` points to.
5. **Decided at runtime:** because `pay()` is virtual, C++ looks at the real object (through its hidden *vtable*) when the program runs, not at the pointer type. This is **runtime polymorphism**.
6. **Real-life scenario :** a cashier says "pay", and the customer pays with cash, mobile money or a card. The request is the same; the action depends on the customer.
