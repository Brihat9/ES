LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.NUMERIC_STD.ALL;

ENTITY func_tb IS
END func_tb;

ARCHITECTURE behavioral OF func_tb IS
	COMPONENT func 
	PORT (
		X1, X2, X3: IN STD_LOGIC;
		F: OUT STD_LOGIC
	);
	END COMPONENT;
	
	SIGNAL input: STD_LOGIC_VECTOR(2 DOWNTO 0):= "000";
	SIGNAL output: STD_LOGIC :='0';

	BEGIN
		uut: func PORT MAP (
			X3 => input(2),
			X2 => input(1),
			X1 => input(0),
			F => output
		);

	stim_proc: PROCESS

	BEGIN
		FOR index IN 0 TO 7 LOOP
			input <= STD_LOGIC_VECTOR(TO_UNSIGNED(index,3));
			WAIT FOR 50 ns;
		END LOOP;
	END PROCESS;

END behavioral;