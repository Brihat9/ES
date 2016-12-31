LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY xor_nor IS PORT (
	a,b: IN STD_LOGIC;
	o: OUT STD_LOGIC
);
END xor_nor;

ARCHITECTURE behavorial OF xor_nor IS
SIGNAL nota,notb,xnorab: STD_LOGIC;

BEGIN
xor_nor: PROCESS (a,b,nota,notb,xnorab)

BEGIN
	nota <= a NOR a;
	notb <= b NOR b;
	xnorab <= (a NOR notb) NOR (nota NOR b);
	o <= xnorab NOR xnorab;

END PROCESS xor_nor;

END behavorial;