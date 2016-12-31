LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.NUMERIC_STD.ALL;

ENTITY add_sub_tb IS
END add_sub_tb;

ARCHITECTURE behavioral OF add_sub_tb IS
	-- component declaaration for the Unit Under Test (UUT)
	COMPONENT add_sub
	PORT(
		X3, X2, X1, X0, Y3, Y2, Y1, Y0, A_S: IN STD_LOGIC;
		S4, S3, S2, S1, S0: OUT STD_LOGIC
	);
	END COMPONENT;
	
	SIGNAL addsub: STD_LOGIC := '0';
	SIGNAL input_vector1: STD_LOGIC_VECTOR( 3 DOWNTO 0) := "0000";
	SIGNAL input_vector2: STD_LOGIC_VECTOR( 3 DOWNTO 0) := "0000";
	SIGNAL output_vector: STD_LOGIC_VECTOR( 4 DOWNTO 0) := "00000";
		
BEGIN
	--INSTANTIATE the unit under test
	uut: add_sub PORT MAP(
		A_S => addsub,
		X3 => input_vector1(3),
		X2 => input_vector1(2),
		X1 => input_vector1(1),
		X0 => input_vector1(0),
		
		Y3 => input_vector2(3),
		Y2 => input_vector2(2),
		Y1 => input_vector2(1),
		Y0 => input_vector2(0),
		
		S4 => output_vector(4),
		S3 => output_vector(3),
		S2 => output_vector(2),
		S1 => output_vector(1),
		S0 => output_vector(0)
	);
	
	--stimulus process
	stim_proc: PROCESS
	
	BEGIN
		FOR index1 IN 0 TO 15 LOOP
			input_vector1 <= std_logic_vector(to_unsigned(index1,4));
			FOR index2 IN 0 TO 15 LOOP
				input_vector2 <= std_logic_vector(to_unsigned(index2,4));
				WAIT FOR 50 ns;
			END LOOP;
		END LOOP;
	END PROCESS;
END behavioral;
		