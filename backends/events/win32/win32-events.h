#ifndef BACKEND_EVENTS_WIN32_H
#define BACKEND_EVENTS_WIN32_H

#include "common/events.h"
#include "common/queue.h"
#include "common/system.h"

class Win32EventSource : public Common::EventSource {
public:
	virtual ~Win32EventSource(){};

	virtual bool pollEvent(Common::Event &event);

protected:
	bool handleEvent(struct tagMSG &msg, Common::Event &event);
};

#endif // BACKEND_EVENTS_WIN32_H