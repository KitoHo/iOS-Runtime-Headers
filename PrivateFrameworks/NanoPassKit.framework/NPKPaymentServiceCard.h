/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentServiceCard : NSObject <NSSecureCoding> {
    NSString *_applicationIdentifier;
    NSString *_passUniqueIdentifier;
    int _paymentApplicationState;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (getter=isReadyForPayment, nonatomic, readonly) BOOL availableForPayment;
@property (nonatomic, copy) NSString *passUniqueIdentifier;
@property (nonatomic) int paymentApplicationState;

+ (id)paymentServiceCardForPassUniqueID:(id)arg1 paymentApplication:(id)arg2;
+ (id)paymentServiceCardForPaymentPass:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPassUniqueIdentifier:(id)arg1 applicationIdentifier:(id)arg2 paymentApplicationState:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isReadyForPayment;
- (id)passUniqueIdentifier;
- (int)paymentApplicationState;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setPassUniqueIdentifier:(id)arg1;
- (void)setPaymentApplicationState:(int)arg1;

@end
