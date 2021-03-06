/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBLocalPhotoMenuUploadEducationViewDelegate;
@class FBButton, UITableView;

@interface FBLocalPhotoMenuUploadEducationView : UIView {

	FBButton* _uploadButton;
	UITableView* _bodyView;
	id<FBLocalPhotoMenuUploadEducationViewDelegate> _delegate;

}

@property (nonatomic,readonly) UITableView * bodyView;                                                     //@synthesize bodyView=_bodyView - In the implementation block
@property (assign,nonatomic,__weak) id<FBLocalPhotoMenuUploadEducationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UITableView *)bodyView;
-(void)_didTapButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBLocalPhotoMenuUploadEducationViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBLocalPhotoMenuUploadEducationViewDelegate>)delegate;
@end

