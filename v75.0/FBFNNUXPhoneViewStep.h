/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNuxInterstitial.h>
#import <Facebook/FBFNNUXStep.h>

@protocol FBFNNUXStepDelegate, FBFNNUXControllerDelegate;
@class FBFNPhoneNUXView, FBUserSession, FBFNNuxAppearanceConfiguration;

@interface FBFNNUXPhoneViewStep : FBNuxInterstitial <FBFNNUXStep> {

	FBFNPhoneNUXView* _phoneView;
	FBUserSession* _session;
	id<FBFNNUXStepDelegate> _stepDelegate;
	id<FBFNNUXControllerDelegate> _controllerDelegate;
	FBFNNuxAppearanceConfiguration* _appearanceConfiguration;
	unsigned long long _nuxMode;

}

@property (nonatomic,readonly) FBUserSession * session;                                               //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<FBFNNUXStepDelegate> stepDelegate;                             //@synthesize stepDelegate=_stepDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBFNNUXControllerDelegate> controllerDelegate;                 //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (nonatomic,readonly) FBFNNuxAppearanceConfiguration * appearanceConfiguration;              //@synthesize appearanceConfiguration=_appearanceConfiguration - In the implementation block
@property (nonatomic,readonly) unsigned long long nuxMode;                                            //@synthesize nuxMode=_nuxMode - In the implementation block
-(void)setStepDelegate:(id<FBFNNUXStepDelegate>)arg1 ;
-(id)initWithSession:(id)arg1 appearanceConfiguration:(id)arg2 upsellDataSource:(id)arg3 nuxMode:(unsigned long long)arg4 ;
-(id)initWithSession:(id)arg1 appearanceConfiguration:(id)arg2 ;
-(id<FBFNNUXStepDelegate>)stepDelegate;
-(FBFNNuxAppearanceConfiguration *)appearanceConfiguration;
-(void)configureInterstitialView:(id)arg1 ;
-(unsigned long long)nuxMode;
-(id<FBFNNUXControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id<FBFNNUXControllerDelegate>)arg1 ;
-(Class)viewControllerClass;
-(FBUserSession *)session;
@end

