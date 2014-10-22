/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <NSCopying> {
    MPPMediaPredicate *_conditionalPredicate;
    MPPMediaPredicate *_elsePredicate;
    MPPMediaPredicate *_thenPredicate;
}

@property(retain) MPPMediaPredicate * conditionalPredicate;
@property(retain) MPPMediaPredicate * elsePredicate;
@property(readonly) bool hasConditionalPredicate;
@property(readonly) bool hasElsePredicate;
@property(readonly) bool hasThenPredicate;
@property(retain) MPPMediaPredicate * thenPredicate;

- (void).cxx_destruct;
- (id)conditionalPredicate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)elsePredicate;
- (bool)hasConditionalPredicate;
- (bool)hasElsePredicate;
- (bool)hasThenPredicate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConditionalPredicate:(id)arg1;
- (void)setElsePredicate:(id)arg1;
- (void)setThenPredicate:(id)arg1;
- (id)thenPredicate;
- (void)writeTo:(id)arg1;

@end
