/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2TheaterListCell : SADomainObject

@property (nonatomic, retain) SADistance *relativeDistance;
@property (nonatomic, copy) NSString *theaterAddress;
@property (nonatomic, copy) NSString *theaterName;
@property (nonatomic, retain) SAMovieV2MovieListSnippet *theaterShowtimeListSnippet;

+ (id)theaterListCell;
+ (id)theaterListCellWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)relativeDistance;
- (void)setRelativeDistance:(id)arg1;
- (void)setTheaterAddress:(id)arg1;
- (void)setTheaterName:(id)arg1;
- (void)setTheaterShowtimeListSnippet:(id)arg1;
- (id)theaterAddress;
- (id)theaterName;
- (id)theaterShowtimeListSnippet;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
