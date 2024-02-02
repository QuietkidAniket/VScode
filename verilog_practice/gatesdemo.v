module fulladder(a,b,cin,sum,carry);
    // Trying to implement c = a.b + b'
    output sum, carry;
    input a,b, cin;
    // wire implementation
    wire w1, w2;
    // or gate implementation
    assign sum = a ^b ^cin;
    assign carry = a & b | cin & (a ^b);
endmodule; // gatesdemo


module gatesdemo;
initial
begin
$display();
$finish;
end
endmodule;
