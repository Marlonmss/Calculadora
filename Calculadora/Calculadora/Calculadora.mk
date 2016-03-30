##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Calculadora
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\Alguem\git\Calculadora\Calculadora"
ProjectPath            := "C:\Users\Alguem\git\Calculadora\Calculadora\Calculadora"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Alguem
Date                   :=29/03/2016
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Calculadora.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files (x86)/CodeBlocks/MinGW/bin/windres.exe"
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/ar.exe" rcu
CXX      := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/g++.exe"
CC       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files (x86)/CodeBlocks/MinGW/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Calculadora.cpp$(ObjectSuffix) $(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IntermediateDirectory)/Ponto.cpp$(ObjectSuffix) $(IntermediateDirectory)/Memoria.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cientifica.cpp$(ObjectSuffix) $(IntermediateDirectory)/Financeira.cpp$(ObjectSuffix) $(IntermediateDirectory)/Dispositivo.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Calculadora/Calculadora/Calculadora/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/Calculadora.cpp$(ObjectSuffix): Calculadora.cpp $(IntermediateDirectory)/Calculadora.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Calculadora/Calculadora/Calculadora/Calculadora.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Calculadora.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Calculadora.cpp$(DependSuffix): Calculadora.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Calculadora.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Calculadora.cpp$(DependSuffix) -MM "Calculadora.cpp"

$(IntermediateDirectory)/Calculadora.cpp$(PreprocessSuffix): Calculadora.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Calculadora.cpp$(PreprocessSuffix) "Calculadora.cpp"

$(IntermediateDirectory)/Data.cpp$(ObjectSuffix): Data.cpp $(IntermediateDirectory)/Data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Calculadora/Calculadora/Calculadora/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Data.cpp$(DependSuffix): Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Data.cpp$(DependSuffix) -MM "Data.cpp"

$(IntermediateDirectory)/Data.cpp$(PreprocessSuffix): Data.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Data.cpp$(PreprocessSuffix) "Data.cpp"

$(IntermediateDirectory)/Ponto.cpp$(ObjectSuffix): Ponto.cpp $(IntermediateDirectory)/Ponto.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Calculadora/Calculadora/Calculadora/Ponto.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Ponto.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Ponto.cpp$(DependSuffix): Ponto.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Ponto.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Ponto.cpp$(DependSuffix) -MM "Ponto.cpp"

$(IntermediateDirectory)/Ponto.cpp$(PreprocessSuffix): Ponto.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Ponto.cpp$(PreprocessSuffix) "Ponto.cpp"

$(IntermediateDirectory)/Memoria.cpp$(ObjectSuffix): Memoria.cpp $(IntermediateDirectory)/Memoria.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Calculadora/Calculadora/Calculadora/Memoria.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Memoria.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Memoria.cpp$(DependSuffix): Memoria.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Memoria.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Memoria.cpp$(DependSuffix) -MM "Memoria.cpp"

$(IntermediateDirectory)/Memoria.cpp$(PreprocessSuffix): Memoria.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Memoria.cpp$(PreprocessSuffix) "Memoria.cpp"

$(IntermediateDirectory)/Cientifica.cpp$(ObjectSuffix): Cientifica.cpp $(IntermediateDirectory)/Cientifica.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Calculadora/Calculadora/Calculadora/Cientifica.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cientifica.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cientifica.cpp$(DependSuffix): Cientifica.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Cientifica.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Cientifica.cpp$(DependSuffix) -MM "Cientifica.cpp"

$(IntermediateDirectory)/Cientifica.cpp$(PreprocessSuffix): Cientifica.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cientifica.cpp$(PreprocessSuffix) "Cientifica.cpp"

$(IntermediateDirectory)/Financeira.cpp$(ObjectSuffix): Financeira.cpp $(IntermediateDirectory)/Financeira.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Calculadora/Calculadora/Calculadora/Financeira.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Financeira.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Financeira.cpp$(DependSuffix): Financeira.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Financeira.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Financeira.cpp$(DependSuffix) -MM "Financeira.cpp"

$(IntermediateDirectory)/Financeira.cpp$(PreprocessSuffix): Financeira.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Financeira.cpp$(PreprocessSuffix) "Financeira.cpp"

$(IntermediateDirectory)/Dispositivo.cpp$(ObjectSuffix): Dispositivo.cpp $(IntermediateDirectory)/Dispositivo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Alguem/git/Calculadora/Calculadora/Calculadora/Dispositivo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Dispositivo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Dispositivo.cpp$(DependSuffix): Dispositivo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Dispositivo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Dispositivo.cpp$(DependSuffix) -MM "Dispositivo.cpp"

$(IntermediateDirectory)/Dispositivo.cpp$(PreprocessSuffix): Dispositivo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Dispositivo.cpp$(PreprocessSuffix) "Dispositivo.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


