/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLangMap : NSObject {
    NSArray *_alternateLanguageIDs;
    BOOL _ambiguous;
    NSArray *_associatedAmbiguousLanguages;
    NSArray *_dialects;
    NSString *_generalLanguageID;
    AXDialectMap *_userPreferredDialect;
    BOOL _western;
    AXDialectMap *userLocaleDialect;
}

@property (nonatomic, retain) NSArray *alternateLanguageIDs;
@property (nonatomic, readonly) NSArray *alternativeVoiceIdentifiers;
@property (getter=isAmbiguous, nonatomic) BOOL ambiguous;
@property (nonatomic, retain) NSArray *associatedAmbiguousLanguages;
@property (nonatomic, readonly) AXDialectMap *defaultDialect;
@property (nonatomic, retain) NSArray *dialects;
@property (nonatomic, copy) NSString *generalLanguageID;
@property (nonatomic, readonly) AXDialectMap *userLocaleDialect;
@property (nonatomic) AXDialectMap *userPreferredDialect;
@property (getter=isWestern, nonatomic) BOOL western;

- (id)alternateLanguageIDs;
- (id)alternativeVoiceIdentifiers;
- (id)associatedAmbiguousLanguages;
- (id)basicDescription;
- (void)dealloc;
- (id)debugDescription;
- (id)defaultDialect;
- (id)description;
- (id)dialectWithLocaleIdentifier:(id)arg1;
- (id)dialects;
- (id)generalLanguageID;
- (id)initWithLanguageID:(id)arg1 isWestern:(BOOL)arg2 isAmbiguous:(BOOL)arg3 dialects:(id)arg4 alternateLanguageIDs:(id)arg5 associatedAmbiguousLanguages:(id)arg6;
- (BOOL)isAmbiguous;
- (BOOL)isWestern;
- (void)setAlternateLanguageIDs:(id)arg1;
- (void)setAmbiguous:(BOOL)arg1;
- (void)setAssociatedAmbiguousLanguages:(id)arg1;
- (void)setDialects:(id)arg1;
- (void)setGeneralLanguageID:(id)arg1;
- (void)setUserPreferredDialect:(id)arg1;
- (void)setWestern:(BOOL)arg1;
- (id)userLocaleDialect;
- (id)userPreferredDialect;

@end
