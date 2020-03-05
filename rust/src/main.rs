fn multiples_of_3_and_5() -> i32 {

    let mut sum = 0;
    let mut multiples_of_3 = 3;
    while multiples_of_3 < 1000 {
        sum = sum + multiples_of_3;
        multiples_of_3 = multiples_of_3 + 3;
    }

    let mut multiples_of_5 = 5;
    while multiples_of_5 < 1000 {
        sum = sum + multiples_of_5;
        multiples_of_5 = multiples_of_5 + 5;
    }

    let mut multiples_of_3_and_5 = 15;
    while multiples_of_3_and_5 < 1000 {
        sum = sum - multiples_of_3_and_5;
        multiples_of_3_and_5 = multiples_of_3_and_5 + 15;
    }
    sum
}

fn even_fibonacci_numbers() -> i32 {
    
    let mut sum = 0;

    let mut n0 = 0; 
    let mut n1 = 1;    

    while n1 < 4000000 {
        let next = n0 + n1;
        if next % 2 == 0 {
            sum += next;
        }
        n0 = n1;
        n1 = next;
    }
    sum
}


fn main() {
    println!("{}", even_fibonacci_numbers());
}

