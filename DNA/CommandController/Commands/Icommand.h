#ifndef __ICOMMAND_H__
#define __ICOMMAND_H__

#pragma once

class ICommand
{
public:
	virtual void help() = 0;
	virtual void execute() = 0;
	//TODO ptr to DB
};

#endif