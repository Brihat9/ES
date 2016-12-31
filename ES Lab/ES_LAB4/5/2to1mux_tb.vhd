LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.NUMERIC_STD.ALL;

ENTITY mux2to1_tb IS
END mux2to1_tb;

ARCHITECTURE behavioral OF mux2to1_tb IS
	COMPONENT mux2to1 
	PORT (
		S: IN STD_LOGIC;
		X1: IN STD_LOGIC;
		X2: IN STD_LOGIC;
		Y: OUT STD_LOGIC
	);
	END COMPONENT;
	
	SIGNAL input: STD_LOGIC_VECTOR(2 DOWNTO 0):= "000";
	SIGNAL output: STD_LOGIC;

	BEGIN
		uut: mux2to1 PORT MAP (
			S => input(2),
			X2 => input(1),
			X1 => input(0),
			Y => output
		);

	stim_proc: PROCESS

	BEGIN
		FOR index IN 0 TO 7 LOOP
			input <= STD_LOGIC_VECTOR(TO_UNSIGNED(index,3));
			WAIT FOR 50 ns;
		END LOOP;
	END PROCESS;

END behavioral;
	
