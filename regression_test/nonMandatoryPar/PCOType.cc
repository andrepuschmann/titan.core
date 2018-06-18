/******************************************************************************
 * Copyright (c) 2000-2018 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v2.0
 * which accompanies this distribution, and is available at
 * https://www.eclipse.org/org/documents/epl-2.0/EPL-2.0.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Delic, Adam
 *   Lovassy, Arpad
 *   Raduly, Csaba
 *   Szabados, Kristof
 *
 ******************************************************************************/
// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version 1.6.pre4 build 4
// for ekrisza (ekrisza@EGNEC004JPBV14D) on Wed May 10 13:22:33 2006


// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "PCOType.hh"

#ifndef OLD_NAMES
namespace TnonMandatory {
#endif

PCOType::PCOType(const char *par_port_name)
	: PCOType_BASE(par_port_name)
{

}

PCOType::~PCOType()
{

}

void PCOType::set_parameter(const char * /*parameter_name*/,
	const char * /*parameter_value*/)
{

}

void PCOType::Event_Handler(const fd_set * /*read_fds*/,
	const fd_set * /*write_fds*/, const fd_set * /*error_fds*/,
	double /*time_since_last_call*/)
{

}

void PCOType::user_map(const char * /*system_port*/)
{

}

void PCOType::user_unmap(const char * /*system_port*/)
{

}

void PCOType::user_start()
{

}

void PCOType::user_stop()
{

}

void PCOType::outgoing_send(const CHARSTRING& /*send_par*/)
{

}

#ifndef OLD_NAMES
}
#endif
