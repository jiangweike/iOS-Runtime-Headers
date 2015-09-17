/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDDataFrames : PBCodable <NSCopying> {
    unsigned long long _cFack;
    unsigned long long _cFackCFpoll;
    unsigned long long _cFpoll;
    unsigned long long _dataCFack;
    unsigned long long _dataCFackCFpoll;
    unsigned long long _dataCFpoll;
    unsigned long long _dataFrames;
    struct { 
        unsigned int cFack : 1; 
        unsigned int cFackCFpoll : 1; 
        unsigned int cFpoll : 1; 
        unsigned int dataCFack : 1; 
        unsigned int dataCFackCFpoll : 1; 
        unsigned int dataCFpoll : 1; 
        unsigned int dataFrames : 1; 
        unsigned int null : 1; 
        unsigned int qoSdata : 1; 
        unsigned int qoSdataCFack : 1; 
        unsigned int qoSdataCFackCFpoll : 1; 
        unsigned int qoSnodataCFack : 1; 
        unsigned int qoSnodataCFpoll : 1; 
        unsigned int qoSnull : 1; 
    } _has;
    unsigned long long _null;
    unsigned long long _qoSdata;
    unsigned long long _qoSdataCFack;
    unsigned long long _qoSdataCFackCFpoll;
    unsigned long long _qoSnodataCFack;
    unsigned long long _qoSnodataCFpoll;
    unsigned long long _qoSnull;
}

@property (nonatomic) unsigned long long cFack;
@property (nonatomic) unsigned long long cFackCFpoll;
@property (nonatomic) unsigned long long cFpoll;
@property (nonatomic) unsigned long long dataCFack;
@property (nonatomic) unsigned long long dataCFackCFpoll;
@property (nonatomic) unsigned long long dataCFpoll;
@property (nonatomic) unsigned long long dataFrames;
@property (nonatomic) BOOL hasCFack;
@property (nonatomic) BOOL hasCFackCFpoll;
@property (nonatomic) BOOL hasCFpoll;
@property (nonatomic) BOOL hasDataCFack;
@property (nonatomic) BOOL hasDataCFackCFpoll;
@property (nonatomic) BOOL hasDataCFpoll;
@property (nonatomic) BOOL hasDataFrames;
@property (nonatomic) BOOL hasNull;
@property (nonatomic) BOOL hasQoSdata;
@property (nonatomic) BOOL hasQoSdataCFack;
@property (nonatomic) BOOL hasQoSdataCFackCFpoll;
@property (nonatomic) BOOL hasQoSnodataCFack;
@property (nonatomic) BOOL hasQoSnodataCFpoll;
@property (nonatomic) BOOL hasQoSnull;
@property (nonatomic) unsigned long long null;
@property (nonatomic) unsigned long long qoSdata;
@property (nonatomic) unsigned long long qoSdataCFack;
@property (nonatomic) unsigned long long qoSdataCFackCFpoll;
@property (nonatomic) unsigned long long qoSnodataCFack;
@property (nonatomic) unsigned long long qoSnodataCFpoll;
@property (nonatomic) unsigned long long qoSnull;

- (unsigned long long)cFack;
- (unsigned long long)cFackCFpoll;
- (unsigned long long)cFpoll;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataCFack;
- (unsigned long long)dataCFackCFpoll;
- (unsigned long long)dataCFpoll;
- (unsigned long long)dataFrames;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCFack;
- (BOOL)hasCFackCFpoll;
- (BOOL)hasCFpoll;
- (BOOL)hasDataCFack;
- (BOOL)hasDataCFackCFpoll;
- (BOOL)hasDataCFpoll;
- (BOOL)hasDataFrames;
- (BOOL)hasNull;
- (BOOL)hasQoSdata;
- (BOOL)hasQoSdataCFack;
- (BOOL)hasQoSdataCFackCFpoll;
- (BOOL)hasQoSnodataCFack;
- (BOOL)hasQoSnodataCFpoll;
- (BOOL)hasQoSnull;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)null;
- (unsigned long long)qoSdata;
- (unsigned long long)qoSdataCFack;
- (unsigned long long)qoSdataCFackCFpoll;
- (unsigned long long)qoSnodataCFack;
- (unsigned long long)qoSnodataCFpoll;
- (unsigned long long)qoSnull;
- (BOOL)readFrom:(id)arg1;
- (void)setCFack:(unsigned long long)arg1;
- (void)setCFackCFpoll:(unsigned long long)arg1;
- (void)setCFpoll:(unsigned long long)arg1;
- (void)setDataCFack:(unsigned long long)arg1;
- (void)setDataCFackCFpoll:(unsigned long long)arg1;
- (void)setDataCFpoll:(unsigned long long)arg1;
- (void)setDataFrames:(unsigned long long)arg1;
- (void)setHasCFack:(BOOL)arg1;
- (void)setHasCFackCFpoll:(BOOL)arg1;
- (void)setHasCFpoll:(BOOL)arg1;
- (void)setHasDataCFack:(BOOL)arg1;
- (void)setHasDataCFackCFpoll:(BOOL)arg1;
- (void)setHasDataCFpoll:(BOOL)arg1;
- (void)setHasDataFrames:(BOOL)arg1;
- (void)setHasNull:(BOOL)arg1;
- (void)setHasQoSdata:(BOOL)arg1;
- (void)setHasQoSdataCFack:(BOOL)arg1;
- (void)setHasQoSdataCFackCFpoll:(BOOL)arg1;
- (void)setHasQoSnodataCFack:(BOOL)arg1;
- (void)setHasQoSnodataCFpoll:(BOOL)arg1;
- (void)setHasQoSnull:(BOOL)arg1;
- (void)setNull:(unsigned long long)arg1;
- (void)setQoSdata:(unsigned long long)arg1;
- (void)setQoSdataCFack:(unsigned long long)arg1;
- (void)setQoSdataCFackCFpoll:(unsigned long long)arg1;
- (void)setQoSnodataCFack:(unsigned long long)arg1;
- (void)setQoSnodataCFpoll:(unsigned long long)arg1;
- (void)setQoSnull:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end