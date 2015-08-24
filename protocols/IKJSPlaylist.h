/* Generated by RuntimeBrowser.
 */

@protocol IKJSPlaylist <JSExport>

@required

- (IKJSMediaItem *)currentMediaItem;
- (id)init;
- (IKJSMediaItem *)item:(int)arg1;
- (unsigned int)length;
- (IKJSMediaItem *)nextMediaItem;
- (IKJSMediaItem *)pop;
- (IKJSMediaItem *)previousMediaItem;
- (unsigned int)push:(JSValue *)arg1;
- (NSArray *)splice:(JSValue *)arg1 :(JSValue *)arg2 :(JSValue *)arg3;

@end
