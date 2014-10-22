/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, GEORPProblem, GEORPUserCredentials;

@interface GEORPProblemRequest : PBRequest <NSCopying> {
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEOPDClientMetadata *_clientMetadata;
    GEORPProblem *_problem;
    GEORPUserCredentials *_userCredentials;
}

@property(retain) GEOPDAnalyticMetadata * analyticMetadata;
@property(retain) GEOPDClientMetadata * clientMetadata;
@property(readonly) bool hasAnalyticMetadata;
@property(readonly) bool hasClientMetadata;
@property(readonly) bool hasProblem;
@property(readonly) bool hasUserCredentials;
@property(retain) GEORPProblem * problem;
@property(retain) GEORPUserCredentials * userCredentials;

- (id)analyticMetadata;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnalyticMetadata;
- (bool)hasClientMetadata;
- (bool)hasProblem;
- (bool)hasUserCredentials;
- (unsigned long long)hash;
- (id)initWithProblem:(id)arg1 traits:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)problem;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setProblem:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (id)userCredentials;
- (void)writeTo:(id)arg1;

@end
