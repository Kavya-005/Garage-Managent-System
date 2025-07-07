import java.util.Scanner;

public class ArithmeticCalculator {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double num1, num2;
        char operator;
        double result = 0;

        System.out.print("Enter first number: ");
        num1 = input.nextDouble();

        System.out.print("Enter second number: ");
        num2 = input.nextDouble();

        System.out.print("Enter an operator (+, -, *, /): ");
        operator = input.next().charAt(0);

        switch (operator) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    System.out.println("Error: Cannot divide by zero.");
                    input.close();
                    return;
                }
                break;
            default:
                System.out.println("Error: Invalid operator.");
                input.close();
                return;
        }

        System.out.println("Result: " + result);
        input.close();
    }
}
