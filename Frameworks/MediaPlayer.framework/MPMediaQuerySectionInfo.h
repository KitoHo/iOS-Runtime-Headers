/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray *_sectionIndexTitles;
    NSArray *_sections;
}

@property(readonly) unsigned long long count;
@property(copy) NSArray * sectionIndexTitles;
@property(copy,readonly) NSArray * sections;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)indexOfSectionForSectionIndexTitleAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sectionIndexTitles;
- (id)sections;
- (void)setSectionIndexTitles:(id)arg1;

@end
