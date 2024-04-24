################################################################################
##
## Filename: 	Makefile
## {{{
## Project:	A General Purpose Pipelined FFT Implementation
##
## Purpose:	This is the main Makefile for the FFT core generator.
##		It is very simple in its construction, the most complicated
##	parts being the building of the Verilator simulation--a step that may
##	not be required for your project.
##
##	To build the FFT generator, just type 'make' on a line by itself.  For
##	a quick tutorial in how to run the generator, just type './fftgen -h'
##	to read the usage() statement.
##
## Creator:	Dan Gisselquist, Ph.D.
##		Gisselquist Technology, LLC
##
################################################################################
## }}}
## Copyright (C) 2015-2024, Gisselquist Technology, LLC
## {{{
## This program is free software (firmware): you can redistribute it and/or
## modify it under the terms of  the GNU General Public License as published
## by the Free Software Foundation, either version 3 of the License, or (at
## your option) any later version.
##
## This program is distributed in the hope that it will be useful, but WITHOUT
## ANY WARRANTY; without even the implied warranty of MERCHANTIBILITY or
## FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
## for more details.
##
## You should have received a copy of the GNU General Public License along
## with this program.  (It's in the $(ROOT)/doc directory.  Run make with no
## target there if the PDF file isn't present.)  If not, see
## <http://www.gnu.org/licenses/> for a copy.
## }}}
## License:	GPL, v3, as defined and found on www.gnu.org,
## {{{
##		http://www.gnu.org/licenses/gpl.html
##
##
################################################################################
##
## }}}
# This is really simple ...

CORED := .
VOBJDR  := $(CORED)/obj_dir
OBJDIR   := obj-pc
BENCHD  := ../bench/cpp


OBJECTS := $(addprefix $(OBJDIR)/,$(subst .cpp,.o,$(SOURCES)))
HEADERS := $(wildcard *.h)
ifneq ($(VERILATOR_ROOT),)
VERILATOR:=$(VERILATOR_ROOT)/bin/verilator
else
VERILATOR:=verilator
VERILATOR_ROOT ?= $(shell bash -c 'verilator -V|grep VERILATOR_ROOT | head -1 | sed -e " s/^.*=\s*//"')
endif
export	$(VERILATOR)
VROOT   := $(VERILATOR_ROOT)
VFLAGS  := -Wall -O3 -MMD --trace -cc
CFLAGS  := -g -Wall

$(OBJDIR)/%.o: %.cpp
	$(mk-objdir)
	$(CXX) -c $(CFLAGS) $< -o $@




dj: $(VOBJDR)/Vdj__ALL.so
$(VOBJDR)/Vdj.h: $(CORED)/dj.v
	cd $(CORED)/; $(VERILATOR) $(VFLAGS) -Isubmodules -I../../fft-sv dj.v
$(VOBJDR)/Vdj__ALL.so: $(VOBJDR)/Vdj.h
	cd $(VOBJDR); make -f Vdj.mk




## Automatic dependency handling
## {{{
# The "depends" target, to know what files things depend upon.  The depends
# file itself is kept in $(OBJDIR)/depends.txt
#
define	build-depends
	$(mk-objdir)
	@echo "Building dependency file"
	@$(CXX) $(CFLAGS) $(INCS) -MM $(SOURCES) > $(OBJDIR)/xdepends.txt
@sed -e 's/^.*.o: /$(OBJDIR)\/&/' < $(OBJDIR)/xdepends.txt > $(OBJDIR)/depends.txt
	@rm $(OBJDIR)/xdepends.txt
endef

.PHONY: depends
depends: tags
	$(build-depends)

$(OBJDIR)/depends.txt: depends

#
# Make a directory to hold all of the FFT-gen (i.e. the C++) build products
# (object files)
#
define	mk-objdir
	@bash -c "if [ ! -e $(OBJDIR) ]; then mkdir -p $(OBJDIR); fi"
endef

#
# The "tags" target
#
tags:	$(SOURCES) $(HEADERS)
	@echo "Generating tags"
	@ctags $(SOURCES) $(HEADERS)

ifneq ($(MAKECMDGOALS),clean)
-include $(OBJDIR)/depends.txt
endif
## }}}
