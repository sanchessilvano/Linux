##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=Linux
ConfigurationName      :=Release
WorkspacePath          :=E:/SILVANO92/New/55/OperatingSystem
ProjectPath            :=E:/SILVANO92/New/55/OperatingSystem/Linux
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=SILVANO
Date                   :=12/05/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="Linux.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
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
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/DistribuicoesLinux.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Linux.cpp$(ObjectSuffix) $(IntermediateDirectory)/Repositorio.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "./Release"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Release"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/DistribuicoesLinux.cpp$(ObjectSuffix): DistribuicoesLinux.cpp $(IntermediateDirectory)/DistribuicoesLinux.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/SILVANO92/New/55/OperatingSystem/Linux/DistribuicoesLinux.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DistribuicoesLinux.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DistribuicoesLinux.cpp$(DependSuffix): DistribuicoesLinux.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DistribuicoesLinux.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DistribuicoesLinux.cpp$(DependSuffix) -MM DistribuicoesLinux.cpp

$(IntermediateDirectory)/DistribuicoesLinux.cpp$(PreprocessSuffix): DistribuicoesLinux.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DistribuicoesLinux.cpp$(PreprocessSuffix) DistribuicoesLinux.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/SILVANO92/New/55/OperatingSystem/Linux/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Linux.cpp$(ObjectSuffix): Linux.cpp $(IntermediateDirectory)/Linux.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/SILVANO92/New/55/OperatingSystem/Linux/Linux.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Linux.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Linux.cpp$(DependSuffix): Linux.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Linux.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Linux.cpp$(DependSuffix) -MM Linux.cpp

$(IntermediateDirectory)/Linux.cpp$(PreprocessSuffix): Linux.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Linux.cpp$(PreprocessSuffix) Linux.cpp

$(IntermediateDirectory)/Repositorio.cpp$(ObjectSuffix): Repositorio.cpp $(IntermediateDirectory)/Repositorio.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/SILVANO92/New/55/OperatingSystem/Linux/Repositorio.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Repositorio.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Repositorio.cpp$(DependSuffix): Repositorio.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Repositorio.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Repositorio.cpp$(DependSuffix) -MM Repositorio.cpp

$(IntermediateDirectory)/Repositorio.cpp$(PreprocessSuffix): Repositorio.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Repositorio.cpp$(PreprocessSuffix) Repositorio.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Release/


