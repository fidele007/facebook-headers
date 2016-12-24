/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdPaymentsMountComponentController.h>
#import <Facebook/FBAdPaymentsTextAndImageViewDelegate.h>

@protocol FBAdPaymentsFormComponentControllerDelegate;
@class NSString, FBAdPaymentsFormComponentView, FBAdPaymentsTextAndImageViewConfiguration, FBUserSession;

@interface FBAdPaymentsFormComponentController : NSObject <FBAdPaymentsMountComponentController, FBAdPaymentsTextAndImageViewDelegate> {

	NSString* _currentErrorDescription;
	BOOL _isCompleted;
	NSString* _componentIdentifier;
	FBAdPaymentsFormComponentView* _formComponentView;
	id<FBAdPaymentsFormComponentControllerDelegate> _delegate;
	FBAdPaymentsTextAndImageViewConfiguration* _configuration;
	FBUserSession* _session;

}

@property (assign,nonatomic,__weak) id<FBAdPaymentsFormComponentControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsTextAndImageViewConfiguration * configuration;                  //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) FBAdPaymentsFormComponentView * formComponentView;                          //@synthesize formComponentView=_formComponentView - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                    //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * componentIdentifier;                                                 //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
-(id)componentView;
-(id)initWithSession:(id)arg1 componentIdentifier:(id)arg2 ;
-(FBAdPaymentsFormComponentView *)formComponentView;
-(id)textAndImageViewConfiguration;
-(id)textInputHandler;
-(NSString *)componentIdentifier;
-(BOOL)resignFirstRespodner;
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(void)textAndImageViewDidChange:(id)arg1 isUserInput:(BOOL)arg2 isCompleted:(BOOL)arg3 errorDescription:(id)arg4 shouldAlert:(BOOL)arg5 ;
-(id)componentErrorDescription;
-(BOOL)shouldResignActiveWhenInLastPosition;
-(void)setDelegate:(id<FBAdPaymentsFormComponentControllerDelegate>)arg1 ;
-(id<FBAdPaymentsFormComponentControllerDelegate>)delegate;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isCompleted;
-(FBAdPaymentsTextAndImageViewConfiguration *)configuration;
-(FBUserSession *)session;
@end

