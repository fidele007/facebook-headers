/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBNuxStepViewController.h>

@protocol FBNUXViewControllerDelegate;
@class FBEventsDiscoveryPillNuxStep, UITapGestureRecognizer, NSString;

@interface FBEventsDiscoveryPillViewController : UIViewController <FBNuxStepViewController> {

	FBEventsDiscoveryPillNuxStep* _nuxStep;
	UITapGestureRecognizer* _tapRecognizer;
	id<FBNUXViewControllerDelegate> _delegate;
	unsigned long long _interfaceOrientationMask;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBNUXViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long interfaceOrientationMask;                  //@synthesize interfaceOrientationMask=_interfaceOrientationMask - In the implementation block
-(id)initWithStep:(id)arg1 ;
-(void)transitionToSubStep:(id)arg1 ;
-(void)setStepProgress:(unsigned long long)arg1 ofTotal:(unsigned long long)arg2 ;
-(void)setDelegate:(id<FBNUXViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBNUXViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(CGSize)contentSizeForViewInPopover;
-(void)tap:(id)arg1 ;
-(void)setInterfaceOrientationMask:(unsigned long long)arg1 ;
-(unsigned long long)interfaceOrientationMask;
@end

