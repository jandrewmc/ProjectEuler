package com.company;

public class Main {

    public static void main(String args[])
    {
        Main p = new Main();

        int count = 10000;
        for (int i = 0; i < 10000; i++)
        {
            boolean isLychrel = false;
            long number = i;

            for (int j = 0; j < 50; j++)
            {
                long reversedNumber = p.reverse(number);

                long sum = number + reversedNumber;

                if (p.isPalindromic(sum))
                {
                    --count;
                    break;
                }
                else
                {
                    number = sum;
                    continue;
                }
            }
        }

        System.out.println(count);
    }

    public long reverse(long number)
    {
        long regularNumber = number;

        long reversedNumber = 0;

        while (regularNumber > 0)
        {
            reversedNumber = (reversedNumber * 10) + (regularNumber % 10);
            regularNumber /= 10;
        }
        return reversedNumber;
    }

    public boolean isPalindromic(long number)
    {
        long reverseNumber = reverse(number);

        return number == reverseNumber;
    }

}
