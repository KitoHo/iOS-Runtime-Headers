/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGStorageParticipant : NSObject {
    SGStorageContact *_contact;
    SGIdentityKey *_participatingIdentity;
    unsigned int _role;
}

@property (nonatomic, retain) SGStorageContact *contact;
@property (nonatomic, retain) SGIdentityKey *participatingIdentity;
@property (nonatomic) unsigned int role;

+ (id)participantWithContact:(id)arg1 participatingIdentity:(id)arg2 roleType:(unsigned int)arg3;

- (void).cxx_destruct;
- (id)contact;
- (id)participatingIdentity;
- (unsigned int)role;
- (void)setContact:(id)arg1;
- (void)setParticipatingIdentity:(id)arg1;
- (void)setRole:(unsigned int)arg1;

@end
