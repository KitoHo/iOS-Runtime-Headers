/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPMatchingTree : PBCodable <NSCopying> {
    struct { 
        unsigned int styleReference : 1; 
    } _has;
    unsigned int _key;
    unsigned int _score;
    unsigned int _styleReference;
    NSMutableArray *_subTrees;
}

@property (nonatomic) BOOL hasStyleReference;
@property (nonatomic) unsigned int key;
@property (nonatomic) unsigned int score;
@property (nonatomic) unsigned int styleReference;
@property (nonatomic, retain) NSMutableArray *subTrees;

- (void)addSubTree:(id)arg1;
- (void)clearSubTrees;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStyleReference;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)key;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)score;
- (void)setHasStyleReference:(BOOL)arg1;
- (void)setKey:(unsigned int)arg1;
- (void)setScore:(unsigned int)arg1;
- (void)setStyleReference:(unsigned int)arg1;
- (void)setSubTrees:(id)arg1;
- (unsigned int)styleReference;
- (id)subTreeAtIndex:(unsigned int)arg1;
- (id)subTrees;
- (unsigned int)subTreesCount;
- (void)writeTo:(id)arg1;

@end
