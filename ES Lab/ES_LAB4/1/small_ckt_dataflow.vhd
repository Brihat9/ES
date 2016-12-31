LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY small_ckt IS PORT (
	A,B,C,D : IN STD_LOGIC;
	F : OUT STD_LOGIC
);
END small_ckt;

ARCHITECTURE dataflow OF small_ckt IS
BEGIN
	F <= (((A AND B) OR (NOT B AND C)) OR ((NOT B AND C) AND D));
END dataflow;
	