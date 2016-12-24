/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBStorylineTrashBinView, UILabel, NSString;

@interface FBStorylineMediaTrashBinOverlayView : UIView {

	FBStorylineTrashBinView* _trashBin;
	UILabel* _textLabel;
	NSString* _normalText;
	unsigned long long _mode;
	NSString* _canNotDeleteText;

}

@property (nonatomic,readonly) CGRect deletionAreaFrame; 
@property (nonatomic,readonly) unsigned long long mode;               //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSString * canNotDeleteText;               //@synthesize canNotDeleteText=_canNotDeleteText - In the implementation block
-(void)showNormalMode:(BOOL)arg1 ;
-(void)showCannotDeleteMode:(BOOL)arg1 ;
-(CGRect)deletionAreaFrame;
-(void)showDeletionMode:(BOOL)arg1 ;
-(void)setCanNotDeleteText:(NSString *)arg1 ;
-(NSString *)canNotDeleteText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)mode;
-(void)hide:(BOOL)arg1 ;
@end

