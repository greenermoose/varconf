/*
 *  dynvar.h - interface functions for dynamically derived Variable
 *  Copyright (C) 2001, Ron Steinke
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *  Contact:  Joseph Zupko
 *            jaz147@psu.edu
 *
 *            189 Reese St.
 *            Old Forge, PA 18518
 */
 
#ifndef VARCONF_DYNVAR_H
#define VARCONF_DYNVAR_H

#include <varconf/variable.h>
#include <varconf/dynbase.h>
#include <varconf/dyntypes.h>
#include <varconf/dyncmp.h>

namespace varconf {
namespace dynvar {

Variable concat(const Variable& one, const Variable& two)
{ return Variable(new Concat(one, two)); }

Variable ternary(const Variable& test, const Variable& true_val,
	const Variable& false_val)
{ return Variable(new Ternary(test, true_val, false_val)); }

Variable item(const std::string& section, const std::string& key)
{ return Variable(new Item(section, key)); }

Variable equal(const Variable& one, const Variable& two)
{ return Variable(new Equal(one, two)); }

Variable noteq(const Variable& one, const Variable& two)
{ return Variable(new NotEq(one, two)); }

Variable greater(const Variable& one, const Variable& two)
{ return Variable(new Greater(one, two)); }

Variable greatereq(const Variable& one, const Variable& two)
{ return Variable(new GreaterEq(one, two)); }

Variable less(const Variable& one, const Variable& two)
{ return Variable(new Less(one, two)); }

Variable lesseq(const Variable& one, const Variable& two)
{ return Variable(new LessEq(one, two)); }

}} // namespace varconf::dynvar

#endif
