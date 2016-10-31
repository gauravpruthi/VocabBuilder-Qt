#ifndef BASEDATA_H
#define BASEDATA_H

#include <QString>
#include <QtGlobal>
#include <QVariant>

class BaseData
{
private:
    QString word;
    QString meaning;
    QString synonyms;
    QString antonyms;
    QString example;
    qint32 level;
    qint32 access_count;
    qint32 last_access;

public:
    enum WordType
    {
         Word,
         Idiom
    };
    WordType type;

    BaseData();
    QString getWord() const;
    void setWord(const QString &value);

    QString getMeaning() const;
    void setMeaning(const QString &value);

    QString getSynonyms() const;
    void setSynonyms(const QString &value);

    QString getAntonyms() const;
    void setAntonyms(const QString &value);

    QString getExample() const;
    void setExample(const QString &value);

    qint32 getLevel() const;
    void setLevel(const qint32 &value);

    qint32 getAccess_count() const;

    qint32 getLast_access() const;
};

#endif // BASEDATA_H
