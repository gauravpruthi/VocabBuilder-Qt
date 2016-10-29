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

public:
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

    enum WordType
    {
         Word,
         Idiom
    };
    WordType type;

};

#endif // BASEDATA_H
