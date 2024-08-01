class Calculator:
  def add(self, a, b):
    return a + b

  def subtract(self, a, b):
    return a - b

  def multiply(self, a, b):
    return a * b

  def divide(self, a, b):
    if b == 0:
      return "Division by zero is not allowed"
    else:
      return a / b

calculator = Calculator()
print(calculator.add(5, 3))
print(calculator.subtract(10, 4))  
print(calculator.multiply(2, 6))  
print(calculator.divide(15, 3))  
