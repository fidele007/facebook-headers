/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentHostingViewDelegate.h>

@protocol FBPrivacyCheckupAppNoticeViewControllerDelegate;
@class CKComponentHostingView, FBPrivacyReviewCoreToolbox, FBPrivacyCheckupModalNoticeData, NSString;

@interface FBPrivacyCheckupAppNoticeViewController : UIViewController <CKComponentHostingViewDelegate> {

	CKComponentHostingView* _hostingView;
	FBPrivacyReviewCoreToolbox* _toolbox;
	FBPrivacyCheckupModalNoticeData* _noticeData;
	id<FBPrivacyCheckupAppNoticeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPrivacyCheckupAppNoticeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(id)initWithToolbox:(id)arg1 ;
-(void)didTapCancelButton:(id)arg1 ;
-(void)didTapPrimaryButton:(id)arg1 ;
-(void)didTapSecondaryButton:(id)arg1 ;
-(void)setNoticeData:(id)arg1 ;
-(void)setDelegate:(id<FBPrivacyCheckupAppNoticeViewControllerDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPrivacyCheckupAppNoticeViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

