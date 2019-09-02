var reverse = function (x) {
    let result = '';
    let str = x.toString();
    let flag = 0, zero_flag = false;
    if (x < 0) {
        result = '-';
        flag = 1;

    }

    for (let i = str.length - 1; i >= flag; i--) {
        if (zero_flag == false) {
            if (str[i] == '0') continue;
            else zero_flag = true;

        }
        result += str[i];
    }
    if (parseInt(result) > 2147483647 || parseInt(result) < -2147483648) return 0;

    return result;
};