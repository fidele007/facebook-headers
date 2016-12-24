/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBMStickerViewDelegate.h>

@protocol FBStickerResourceManager, FBMStickerPreviewViewControllerDelegate;
@class FBMStickerView, NSString;

@interface FBMStickerPreviewViewController : UIViewController <FBMStickerViewDelegate> {

	id<FBStickerResourceManager> _stickerResourceManager;
	FBMStickerView* _stickerPreviewView;
	id<FBMStickerPreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMStickerPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStickerResourceManager:(id)arg1 ;
-(BOOL)stickerViewShouldAnimate:(id)arg1 ;
-(id)stickerPreview;
-(void)configureWithStickerFbId:(unsigned long long)arg1 originalImageSizeEnabled:(BOOL)arg2 ;
-(void)setDelegate:(id<FBMStickerPreviewViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMStickerPreviewViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
