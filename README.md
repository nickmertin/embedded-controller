# Embedded control software

Controlled over serial connection. Each command is 1 byte:

- `0`: disable power generation
- `255`: delegate control to dial
- Anything else: set difficulty in range of `1` to `254`
