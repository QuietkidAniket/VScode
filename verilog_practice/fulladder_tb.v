module fulladder_tb;
reg a,b,cin;
wire sum, carry;
fulladder f1(a,b,cin,sum,carry);
initial
begin
    $monitor("cin=%b a=%b b=%b  | sum=%b carry=%b", cin,a,b,sum,carry);
    cin = 1'b0; a = 1'b0; b = 1'b0; #10
    b = 1; #10
    a = 1; b = 0; #10
    b = 1; #10;
    cin = 1; a = 0; b =0; #10
    b = 1; #10
    a = 1; b = 0; #10
    b = 1; #10;
    $finish;
end
endmodule