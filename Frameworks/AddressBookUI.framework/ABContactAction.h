/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactAction : NSObject {
    UIColor *_color;
    CNContact *_contact;
    CNContactStyle *_contactStyle;
    <ABContactActionDelegate> *_delegate;
    BOOL _destructive;
    SEL _selector;
    id _target;
    NSString *_title;
    int _transportType;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactStyle *contactStyle;
@property (nonatomic) <ABContactActionDelegate> *delegate;
@property (getter=isDestructive, nonatomic) BOOL destructive;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly, retain) id target;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic) int transportType;

+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4;

- (id)color;
- (id)contact;
- (id)contactStyle;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithContact:(id)arg1;
- (id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4;
- (BOOL)isDestructive;
- (void)performActionWithSender:(id)arg1;
- (SEL)selector;
- (void)setColor:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactStyle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestructive:(BOOL)arg1;
- (void)setTransportType:(int)arg1;
- (id)target;
- (id)title;
- (int)transportType;

@end
