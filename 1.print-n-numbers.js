
const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});
rl.question("enter the number", function(answer) {
    const input = answer;
    print(input);
});

function print(i) {
    if (i > 0) {
        print(i - 1);
        console.log(i + " ");
    }
    return;
}
