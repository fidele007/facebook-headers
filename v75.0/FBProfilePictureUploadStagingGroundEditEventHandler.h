/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMediaGalleryViewControllerDelegate.h>
#import <Facebook/FBProfileMediaStagingGroundEditEventHandler.h>

@protocol FBProfileMediaStagingGroundEditEventHandlerDelegate;
@class FBMediaPickerDataSourceManager, FBPhotoCropInfo, UIViewController, NSString;

@interface FBProfilePictureUploadStagingGroundEditEventHandler : NSObject <FBMediaGalleryViewControllerDelegate, FBProfileMediaStagingGroundEditEventHandler> {

	id<FBProfileMediaStagingGroundEditEventHandlerDelegate> _delegate;
	FBMediaPickerDataSourceManager* _mediaDataSourceManager;
	FBPhotoCropInfo* _currentCropInfo;
	UIViewController* _hostingViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHostingViewController:(id)arg1 delegate:(id)arg2 ;
-(void)handleEditButtonTapEvent:(id)arg1 mediaDataSourceManager:(id)arg2 originalImageToEdit:(id)arg3 frameImage:(id)arg4 userSession:(id)arg5 logger:(id)arg6 underlayEnabled:(BOOL)arg7 ;
-(id)updateEditInfoToResImage:(id)arg1 ;
-(void)resetCropInfo;
-(void)mediaGalleryDidReturn:(id)arg1 withReason:(unsigned long long)arg2 fromFrame:(CGRect)arg3 animated:(BOOL)arg4 ;
-(void)mediaGalleryDidUpdateComposition:(id)arg1 currentPhotoAssetShown:(id)arg2 ;
-(void)mediaGalleryDidConfirmComposition:(id)arg1 currentPhotoAssetShown:(id)arg2 ;
-(void)mediaGallery:(id)arg1 didToggleSelection:(id)arg2 wasSelected:(BOOL)arg3 ;
@end
