/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBMLPhotoPickerPhotosPermissionsViewDelegate;
@class FBMLPhotoPickerPhotosPermissionMessageContainerView, FBMLPhotoPickerPhotosPermissionSettingsPreviewFooterView;

@interface FBMLPhotoPickerPhotoPermissionsView : UIView {

	FBMLPhotoPickerPhotosPermissionMessageContainerView* _containerView;
	FBMLPhotoPickerPhotosPermissionSettingsPreviewFooterView* _footerView;
	id<FBMLPhotoPickerPhotosPermissionsViewDelegate> _delegate;
	unsigned long long _photosPermissionStatus;

}

@property (assign,nonatomic,__weak) id<FBMLPhotoPickerPhotosPermissionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long photosPermissionStatus;                                     //@synthesize photosPermissionStatus=_photosPermissionStatus - In the implementation block
-(void)_didTapButton;
-(void)setPhotosPermissionStatus:(unsigned long long)arg1 ;
-(unsigned long long)photosPermissionStatus;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMLPhotoPickerPhotosPermissionsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBMLPhotoPickerPhotosPermissionsViewDelegate>)delegate;
@end
