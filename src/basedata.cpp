#include "basedata.h"


qint32 BaseData::getLevel() const
{
    return level;
}

void BaseData::setLevel(const qint32 &value)
{
    level = value;
}
BaseData::BaseData()
{
}

QString BaseData::getWord() const
{
    return word;
}

void BaseData::setWord(const QString &value)
{
    word = value;
}

QString BaseData::getMeaning() const
{
    return meaning;
}

void BaseData::setMeaning(const QString &value)
{
    meaning = value;
}

QString BaseData::getSynonyms() const
{
    return synonyms;
}

void BaseData::setSynonyms(const QString &value)
{
    synonyms = value;
}

QString BaseData::getAntonyms() const
{
    return antonyms;
}

void BaseData::setAntonyms(const QString &value)
{
    antonyms = value;
}

QString BaseData::getExample() const
{
    return example;
}

void BaseData::setExample(const QString &value)
{
    example = value;
}

