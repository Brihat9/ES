LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY full_adder IS PORT (
	i1,i2,cin: IN STD_LOGIC;
	sum,cout: OUT STD_LOGIC
);
END full_adder;

ARCHITECTURE dataflow OF full_adder IS
BEGIN
	sum <= i1 XOR i2 XOR cin;
	cout <= (i1 AND i2) OR ((i1 XOR i2) AND cin);
END dataflow;