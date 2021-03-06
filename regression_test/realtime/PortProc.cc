// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version CRL 113 200/6 R5A
// for ebotbar (ebotbar@ebotbarVB) on Fri Oct 26 17:43:41 2018

// Copyright (c) 2000-2018 Ericsson Telecom AB

// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "PortProc.hh"

namespace realtimeTimestamp {

void ef__incoming__call(const INTEGER& p__par, const BOOLEAN& p__set__timestamp)
{
  Sig_call x;
  x.p() = p__par;
  if (p__set__timestamp) {
    CT_component_ptProc.incoming_call(x, TTCN_Runtime::now());
  }
  else {
    CT_component_ptProc.incoming_call(x);
  }
}

void ef__incoming__reply(const INTEGER& p__par, const CHARSTRING& p__ret, const BOOLEAN& p__set__timestamp)
{
  Sig_reply x;
  x.p() = p__par;
  x.return_value() = p__ret;
  if (p__set__timestamp) {
    CT_component_ptProc.incoming_reply(x, TTCN_Runtime::now());
  }
  else {
    CT_component_ptProc.incoming_reply(x);
  }
}

void ef__incoming__exception(const BOOLEAN& p__ex, const BOOLEAN& p__set__timestamp)
{
  if (p__set__timestamp) {
    CT_component_ptProc.incoming_exception(Sig_exception(p__ex), TTCN_Runtime::now());
  }
  else {
    CT_component_ptProc.incoming_exception(Sig_exception(p__ex));
  }
}

PortProc::PortProc(const char *par_port_name)
	: PortProc_BASE(par_port_name)
{

}

PortProc::~PortProc()
{

}

void PortProc::set_parameter(const char * /*parameter_name*/,
	const char * /*parameter_value*/)
{

}

/*void PortProc::Handle_Fd_Event(int fd, boolean is_readable,
	boolean is_writable, boolean is_error) {}*/

void PortProc::Handle_Fd_Event_Error(int /*fd*/)
{

}

void PortProc::Handle_Fd_Event_Writable(int /*fd*/)
{

}

void PortProc::Handle_Fd_Event_Readable(int /*fd*/)
{

}

/*void PortProc::Handle_Timeout(double time_since_last_call) {}*/

void PortProc::user_map(const char * /*system_port*/)
{

}

void PortProc::user_unmap(const char * /*system_port*/)
{

}

void PortProc::user_start()
{

}

void PortProc::user_stop()
{

}

void PortProc::outgoing_call(const Sig_call& /*call_par*/)
{

}

void PortProc::outgoing_reply(const Sig_reply& /*reply_par*/)
{

}

void PortProc::outgoing_raise(const Sig_exception& /*raise_exception*/)
{

}

} /* end of namespace */

