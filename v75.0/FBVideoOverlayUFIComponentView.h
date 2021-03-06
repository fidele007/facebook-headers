/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/CKComponentHostingViewDelegate.h>

@protocol FBVideoOverlayUFIComponentViewDelegate;
@class CKComponentHostingView, FBFeedToolbox, NSString;

@interface FBVideoOverlayUFIComponentView : UIView <CKComponentProvider, CKComponentHostingViewDelegate> {

	CKComponentHostingView* _ufiHostingView;
	FBFeedToolbox* _toolbox;
	unsigned long long _ufiThemeType;
	id<FBVideoOverlayUFIComponentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBVideoOverlayUFIComponentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)_commentAction:(id)arg1 ;
-(void)_shareAction:(id)arg1 context:(id)arg2 ;
-(void)_countsAction:(id)arg1 ;
-(void)_reactionsInputPresentationAction:(id)arg1 ;
-(void)_reactionsInputDismissalAction:(id)arg1 ;
-(id)initWithUFIThemeType:(unsigned long long)arg1 toolbox:(id)arg2 ;
-(void)updateWithFeedback:(id)arg1 playCount:(unsigned long long)arg2 canViewerShare:(BOOL)arg3 trackingCodes:(id)arg4 omitButtons:(BOOL)arg5 ;
-(void)setDelegate:(id<FBVideoOverlayUFIComponentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBVideoOverlayUFIComponentViewDelegate>)delegate;
@end

