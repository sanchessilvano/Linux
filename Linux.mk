##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=Linux
ConfigurationName      :=Release
WorkspacePath          :="E:/PROG II/trabalho Final/75/OperatingSystem"
ProjectPath            :="E:/PROG II/trabalho Final/75/OperatingSystem/Linux"
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Proeg
Date                   :=08/07/2019
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
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/SistemaOperacional.cpp$(ObjectSuffix) $(IntermediateDirectory)/SistemaDeArquivos.cpp$(ObjectSuffix) $(IntermediateDirectory)/NTFS.cpp$(ObjectSuffix) $(IntermediateDirectory)/Linux_Educacional.cpp$(ObjectSuffix) $(IntermediateDirectory)/Mac.cpp$(ObjectSuffix) $(IntermediateDirectory)/Debian.cpp$(ObjectSuffix) $(IntermediateDirectory)/EXT3.cpp$(ObjectSuffix) $(IntermediateDirectory)/Programa.cpp$(ObjectSuffix) $(IntermediateDirectory)/Ubuntu.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/Windows.cpp$(ObjectSuffix) $(IntermediateDirectory)/Fat32.cpp$(ObjectSuffix) $(IntermediateDirectory)/Linux.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/PROG II/trabalho Final/75/OperatingSystem/Linux/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/SistemaOperacional.cpp$(ObjectSuffix): SistemaOperacional.cpp $(IntermediateDirectory)/SistemaOperacional.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/PROG II/trabalho Final/75/OperatingSystem/Linux/SistemaOperacional.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SistemaOperacional.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SistemaOperacional.cpp$(DependSuffix): SistemaOperacional.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SistemaOperacional.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SistemaOperacional.cpp$(DependSuffix) -MM SistemaOperacional.cpp

$(IntermediateDirectory)/SistemaOperacional.cpp$(PreprocessSuffix): SistemaOperacional.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SistemaOperacional.cpp$(PreprocessSuffix) SistemaOperacional.cpp

$(IntermediateDirectory)/SistemaDeArquivos.cpp$(ObjectSuffix): SistemaDeArquivos.cpp $(IntermediateDirectory)/SistemaDeArquivos.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/PROG II/trabalho Final/75/OperatingSystem/Linux/SistemaDeArquivos.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/SistemaDeArquivos.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/SistemaDeArquivos.cpp$(DependSuffix): SistemaDeArquivos.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/SistemaDeArquivos.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/SistemaDeArquivos.cpp$(DependSuffix) -MM SistemaDeArquivos.cpp

$(IntermediateDirectory)/SistemaDeArquivos.cpp$(PreprocessSuffix): SistemaDeArquivos.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/SistemaDeArquivos.cpp$(PreprocessSuffix) SistemaDeArquivos.cpp

$(IntermediateDirectory)/NTFS.cpp$(ObjectSuffix): NTFS.cpp $(IntermediateDirectory)/NTFS.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/PROG II/trabalho Final/75/OperatingSystem/Linux/NTFS.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NTFS.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NTFS.cpp$(DependSuffix): NTFS.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/NTFS.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/NTFS.cpp$(DependSuffix) -MM NTFS.cpp

$(IntermediateDirectory)/NTFS.cpp$(PreprocessSuffix): NTFS.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NTFS.cpp$(PreprocessSuffix) NTFS.cpp

$(IntermediateDirectory)/Linux_Educacional.cpp$(ObjectSuffix): Linux_Educacional.cpp $(IntermediateDirectory)/Linux_Educacional.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/PROG II/trabalho Final/75/OperatingSystem/Linux/Linux_Educacional.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Linux_Educacional.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Linux_Educacional.cpp$(DependSuffix): Linux_Educacional.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Linux_Educacional.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Linux_Educacional.cpp$(DependSuffix) -MM Linux_Educacional.cpp

$(IntermediateDirectory)/Linux_Educacional.cpp$(PreprocessSuffix): Linux_Educacional.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Linux_Educacional.cpp$(PreprocessSuffix) Linux_Educacional.cpp

$(IntermediateDirectory)/Mac.cpp$(ObjectSuffix): Mac.cpp $(IntermediateDirectory)/Mac.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/PROG II/trabalho Final/75/OperatingSystem/Linux/Mac.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Mac.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Mac.cpp$(DependSuffix): Mac.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Mac.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Mac.cpp$(DependSuffix) -MM Mac.cpp

$(IntermediateDirectory)/Mac.cpp$(PreprocessSuffix): Mac.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Mac.cpp$(PreprocessSuffix) Mac.cpp

$(IntermediateDirectory)/Debian.cpp$(ObjectSuffix): Debian.cpp $(IntermediateDirectory)/Debian.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/PROG II/trabalho Final/75/OperatingSystem/Linux/Debian.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Debian.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Debian.cpp$(DependSuffix): Debian.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Debian.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Debian.cpp$(DependSuffix) -MM Debian.cpp

$(IntermediateDirectory)/Debian.cpp$(PreprocessSuffix): Debian.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Debian.cpp$(PreprocessSuffix) Debian.cpp

$(IntermediateDirectory)/EXT3.cpp$(ObjectSuffix): EXT3.cpp $(IntermediateDirectory)/EXT3.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/PROG II/trabalho Final/75/OperatingSystem/Linux/EXT3.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/EXT3.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/EXT3.cpp$(DependSuffix): EXT3.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/EXT3.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/EXT3.cpp$(DependSuffix) -MM EXT3.cpp

$(IntermediateDirectory)/EXT3.cpp$(PreprocessSuffix): EXT3.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/EXT3.cpp$(PreprocessSuffix) EXT3.cpp

$(IntermediateDirectory)/Programa.cpp$(ObjectSuffix): Programa.cpp $(IntermediateDirectory)/Programa.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/PROG II/trabalho Final/75/OperatingSystem/Linux/Programa.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Programa.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Programa.cpp$(DependSuffix): Programa.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Programa.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Programa.cpp$(DependSuffix) -MM Programa.cpp

$(IntermediateDirectory)/Programa.cpp$(PreprocessSuffix): Programa.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Programa.cpp$(PreprocessSuffix) Programa.cpp

$(IntermediateDirectory)/Ubuntu.cpp$(ObjectSuffix): Ubuntu.cpp $(IntermediateDirectory)/Ubuntu.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/PROG II/trabalho Final/75/OperatingSystem/Linux/Ubuntu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Ubuntu.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Ubuntu.cpp$(DependSuffix): Ubuntu.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Ubuntu.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Ubuntu.cpp$(DependSuffix) -MM Ubuntu.cpp

$(IntermediateDirectory)/Ubuntu.cpp$(PreprocessSuffix): Ubuntu.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Ubuntu.cpp$(PreprocessSuffix) Ubuntu.cpp

$(IntermediateDirectory)/Windows.cpp$(ObjectSuffix): Windows.cpp $(IntermediateDirectory)/Windows.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/PROG II/trabalho Final/75/OperatingSystem/Linux/Windows.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Windows.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Windows.cpp$(DependSuffix): Windows.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Windows.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Windows.cpp$(DependSuffix) -MM Windows.cpp

$(IntermediateDirectory)/Windows.cpp$(PreprocessSuffix): Windows.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Windows.cpp$(PreprocessSuffix) Windows.cpp

$(IntermediateDirectory)/Fat32.cpp$(ObjectSuffix): Fat32.cpp $(IntermediateDirectory)/Fat32.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/PROG II/trabalho Final/75/OperatingSystem/Linux/Fat32.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Fat32.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Fat32.cpp$(DependSuffix): Fat32.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Fat32.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Fat32.cpp$(DependSuffix) -MM Fat32.cpp

$(IntermediateDirectory)/Fat32.cpp$(PreprocessSuffix): Fat32.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Fat32.cpp$(PreprocessSuffix) Fat32.cpp

$(IntermediateDirectory)/Linux.cpp$(ObjectSuffix): Linux.cpp $(IntermediateDirectory)/Linux.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "E:/PROG II/trabalho Final/75/OperatingSystem/Linux/Linux.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Linux.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Linux.cpp$(DependSuffix): Linux.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Linux.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Linux.cpp$(DependSuffix) -MM Linux.cpp

$(IntermediateDirectory)/Linux.cpp$(PreprocessSuffix): Linux.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Linux.cpp$(PreprocessSuffix) Linux.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Release/


