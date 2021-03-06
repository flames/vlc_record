/*********************** Information *************************\
| $HeadURL$
|
| Author: Jo2003
|
| Begin: 22.03.2010 / 08:45:22
|
| Last edited by: $Author$
|
| $Id$
\*************************************************************/
#ifndef __032210__CDIRSTUFF_H
   #define __032210__CDIRSTUFF_H

#include <QtGlobal>
#include <QProcess>
#include <QString>
#include <QStringList>
#include <QApplication>
#include <QRegExp>
#include <QMap>
#include <QDir>
#include <QFile>


#include "defdef.h"

/********************************************************************\
|  Class: CDirStuff
|  Date:  22.03.2010 / 11:06:32
|  Author: Jo2003
|  Description: class to handle directory name stuff
|
\********************************************************************/
class CDirStuff : public QObject
{
   Q_OBJECT

public:
   CDirStuff(QObject *parent = 0);
   ~CDirStuff ();
   const QString& getDataDir ();
   const QString& getResDir ();
   const QString& getLogoDir ();
   const QString& getVodPixDir ();
   const QString& getLangDir ();
   const QString& getQtLangDir ();
   const QString& getModDir ();
   const QString& getAppDir ();
   const QString& getDocDir ();
   const QString& getBinName ();
   const QString& getTmpFolder ();
   bool  isInitialized ();
   void  setAppName(const QString& name);
   bool  portable();

protected:
   int initDirectories (bool bCreate);
   int fillSysEnvMap ();

private:
   QString                sDataDir;
   QString                sDocDir;
   QString                sLogoDir;
   QString                sVodPixDir;
   QString                sLangDir;
   QString                sQtLangDir;
   QString                sModDir;
   QString                sAppDir;
   QString                sResDir;
   QString                sBinName;
   QString                sAppName;
   QString                sTmpFolder;
   QMap<QString, QString> mSysEnv;
   int                    iInitState;
   bool                   bPortable;
};

#endif // __032210__CDIRSTUFF_H
/************************* History ***************************\
| $Log$
\*************************************************************/
