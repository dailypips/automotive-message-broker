#ifndef AGENT_H_
#define AGENT_H_

#include <QScriptEngineAgent>
#include <QObject>

class BluemonkeyAgent: public QObject, public QScriptEngineAgent
{
	Q_OBJECT
public:
	BluemonkeyAgent(QScriptEngine* engine);
	void scriptLoad (qint64 id, const QString  &program, const QString  &fileName, int baseLineNumber );
	void scriptUnload(qint64 id);

private:
	QList<quint64> idList;
};


#endif
