module gatesdemo(out,a,b);
    // Trying to implement c = a.b + b'
    output out;
    input a,b;
    // wire implementation
    wire or_wire, not_wire;
    // or gate implementation
    or out1(or_wire, x, y);
    not out2(not_wire, y);
    and out3(o, or_wire, not_wire);
    
endmodule // gatesdemo