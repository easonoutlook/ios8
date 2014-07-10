/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class CKDPResponseOperationResultErrorClient, CKDPResponseOperationResultErrorPlugin, CKDPResponseOperationResultErrorServer, NSString;

@interface CKDPResponseOperationResultError : PBCodable <NSCopying>
{
    CKDPResponseOperationResultErrorClient *_clientError;
    NSString *_errorDescription;
    NSString *_errorInternal;
    NSString *_errorKey;
    CKDPResponseOperationResultErrorPlugin *_pluginError;
    int _retryAfterSeconds;
    CKDPResponseOperationResultErrorServer *_serverError;
    struct {
        unsigned int retryAfterSeconds:1;
    } _has;
}

@property(retain, nonatomic) NSString *errorInternal; // @synthesize errorInternal=_errorInternal;
@property(retain, nonatomic) NSString *errorKey; // @synthesize errorKey=_errorKey;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) int retryAfterSeconds; // @synthesize retryAfterSeconds=_retryAfterSeconds;
@property(retain, nonatomic) CKDPResponseOperationResultErrorPlugin *pluginError; // @synthesize pluginError=_pluginError;
@property(retain, nonatomic) CKDPResponseOperationResultErrorServer *serverError; // @synthesize serverError=_serverError;
@property(retain, nonatomic) CKDPResponseOperationResultErrorClient *clientError; // @synthesize clientError=_clientError;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasErrorInternal;
@property(readonly, nonatomic) _Bool hasErrorKey;
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(nonatomic) _Bool hasRetryAfterSeconds;
@property(readonly, nonatomic) _Bool hasPluginError;
@property(readonly, nonatomic) _Bool hasServerError;
@property(readonly, nonatomic) _Bool hasClientError;

@end

