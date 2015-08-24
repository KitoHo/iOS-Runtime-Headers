/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFLibrarySQLiteConnectionWrapper : NSObject {
    MFProtectedSQLiteConnection *_connection;
    BOOL _invalid;
    unsigned int _refcount;
    NSArray *_stack;
    BOOL _writer;
}

@property (nonatomic, readonly) MFProtectedSQLiteConnection *connection;
@property (nonatomic) BOOL invalid;
@property (nonatomic, readonly) unsigned int refcount;
@property (nonatomic, readonly) BOOL writer;

+ (id)wrapperWithConnection:(id)arg1 forWriting:(BOOL)arg2;

- (id)connection;
- (void)dealloc;
- (unsigned int)decrementRefcount;
- (unsigned int)incrementRefcount;
- (id)initWithConnection:(id)arg1 forWriting:(BOOL)arg2;
- (BOOL)invalid;
- (unsigned int)refcount;
- (void)setInvalid:(BOOL)arg1;
- (BOOL)writer;

@end
