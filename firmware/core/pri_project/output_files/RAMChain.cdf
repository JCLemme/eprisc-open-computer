/* Quartus Prime Version 16.0.0 Build 211 04/27/2016 SJ Lite Edition */
JedecChain;
	FileRevision(JESD32A);
	DefaultMfr(6E);

	P ActionCode(Cfg)
		Device PartName(10M16SCE144) Path("/home/jclemme/Projects/eprisc-open-computer/firmware/core/pri_project/output_files/") File("epRISC_Machine.sof") MfrSpec(OpMask(1));
	P ActionCode(Cfg)
		Device PartName(10M16SCE144) Path("/home/jclemme/Projects/eprisc-open-computer/firmware/io/aux_project/output_files/") File("epRISC_Controller.sof") MfrSpec(OpMask(1));

ChainEnd;

AlteraBegin;
	ChainType(JTAG);
AlteraEnd;
