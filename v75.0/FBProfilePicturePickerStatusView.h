/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBBezelView;

@interface FBProfilePicturePickerStatusView : UIView {

	FBBezelView* _bezelView;

}
-(void)updateProfilePicturePickerStatus:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)_showProfilePictureBezelView:(/*^block*/id)arg1 ;
-(void)_updateProfilePictureBezelViewWithCompleteStatus:(/*^block*/id)arg1 ;
-(void)_updateProfilePictureBezelViewWithFailureStatus:(/*^block*/id)arg1 ;
-(void)_hideProfilePictureBezelViewAfterDelay:(double)arg1 success:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
