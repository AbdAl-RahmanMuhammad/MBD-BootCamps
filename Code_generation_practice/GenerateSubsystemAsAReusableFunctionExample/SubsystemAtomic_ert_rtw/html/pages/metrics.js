function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["SubsystemAtomic.c:rtM_"] = {file: "D:\\EDUCATION\\Programming\\Simulink\\Code_generation_practice\\GenerateSubsystemAsAReusableFunctionExample\\SubsystemAtomic_ert_rtw\\SubsystemAtomic.c",
	size: 8};
	 this.metricsArray.var["rtDW"] = {file: "D:\\EDUCATION\\Programming\\Simulink\\Code_generation_practice\\GenerateSubsystemAsAReusableFunctionExample\\SubsystemAtomic_ert_rtw\\SubsystemAtomic.c",
	size: 8};
	 this.metricsArray.var["rtU"] = {file: "D:\\EDUCATION\\Programming\\Simulink\\Code_generation_practice\\GenerateSubsystemAsAReusableFunctionExample\\SubsystemAtomic_ert_rtw\\SubsystemAtomic.c",
	size: 8};
	 this.metricsArray.var["rtY"] = {file: "D:\\EDUCATION\\Programming\\Simulink\\Code_generation_practice\\GenerateSubsystemAsAReusableFunctionExample\\SubsystemAtomic_ert_rtw\\SubsystemAtomic.c",
	size: 8};
	 this.metricsArray.fcn["SubsystemAtomic.c:myfun"] = {file: "D:\\EDUCATION\\Programming\\Simulink\\Code_generation_practice\\GenerateSubsystemAsAReusableFunctionExample\\SubsystemAtomic_ert_rtw\\SubsystemAtomic.c",
	stack: 16,
	stackTotal: 16};
	 this.metricsArray.fcn["SubsystemAtomic.c:myfun_Update"] = {file: "D:\\EDUCATION\\Programming\\Simulink\\Code_generation_practice\\GenerateSubsystemAsAReusableFunctionExample\\SubsystemAtomic_ert_rtw\\SubsystemAtomic.c",
	stack: 16,
	stackTotal: 16};
	 this.metricsArray.fcn["SubsystemAtomic_initialize"] = {file: "D:\\EDUCATION\\Programming\\Simulink\\Code_generation_practice\\GenerateSubsystemAsAReusableFunctionExample\\SubsystemAtomic_ert_rtw\\SubsystemAtomic.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SubsystemAtomic_step"] = {file: "D:\\EDUCATION\\Programming\\Simulink\\Code_generation_practice\\GenerateSubsystemAsAReusableFunctionExample\\SubsystemAtomic_ert_rtw\\SubsystemAtomic.c",
	stack: 0,
	stackTotal: 16};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data; }; 
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'SubsystemAtomic_metrics\'});">Global Memory: 32(bytes) Maximum Stack: 16(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
