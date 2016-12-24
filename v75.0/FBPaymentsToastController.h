/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsUpdateListener.h>

@protocol FBToastPresenting, FBPaymentsToastControllerDelegate;
@class FBPaymentsToastCoordinator, NSDictionary, NSString;

@interface FBPaymentsToastController : NSObject <FBPaymentsUpdateListener> {

	id<FBToastPresenting> _toastPresenter;
	FBPaymentsToastCoordinator* _toastCoordinator;
	NSDictionary* _lastPresentedToastsByProviderIdentfier;
	id<FBPaymentsToastControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsToastControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(void)dismissToastingContext:(id)arg1 ;
-(id)initWithToastPresenter:(id)arg1 toastCoordinator:(id)arg2 ;
-(void)presentToastsWithToastingContext:(id)arg1 ;
-(void)_unregisterToastProvidersListener;
-(void)_registerToastProvidersListener;
-(void)_presentToasts:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<FBPaymentsToastControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPaymentsToastControllerDelegate>)delegate;
@end

