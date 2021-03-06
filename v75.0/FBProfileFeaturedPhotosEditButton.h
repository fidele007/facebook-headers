/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBWebPhotoView, FBContextualTimelineOverlayButton, UIView, FBLoadingIndicatorView, FBProfileIntroCardEditPhotoTile, FBMemPhoto, UIImage, FBMemVideo;

@interface FBProfileFeaturedPhotosEditButton : UIView {

	UIImageView* _glyphView;
	UIImageView* _photoGlyphView;
	UIImageView* _videoGlyphView;
	FBWebPhotoView* _photoView;
	FBContextualTimelineOverlayButton* _overlayButton;
	UIView* _removeButton;
	FBContextualTimelineOverlayButton* _removeButtonOverlay;
	UIImageView* _imageView;
	FBLoadingIndicatorView* _loadingIndicatorView;
	BOOL _enableFeaturedMedia;
	FBProfileIntroCardEditPhotoTile* _editPhotoTile;
	FBMemPhoto* _photo;
	UIImage* _imageBeingUploaded;
	UIImage* _thumbnailVideoBeingUploaded;
	FBMemVideo* _video;

}

@property (nonatomic,retain) FBMemPhoto * photo;                                           //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) UIImage * imageBeingUploaded;                                 //@synthesize imageBeingUploaded=_imageBeingUploaded - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailVideoBeingUploaded;                        //@synthesize thumbnailVideoBeingUploaded=_thumbnailVideoBeingUploaded - In the implementation block
@property (nonatomic,retain) FBMemVideo * video;                                           //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) FBProfileIntroCardEditPhotoTile * editPhotoTile;              //@synthesize editPhotoTile=_editPhotoTile - In the implementation block
-(id)initWithSession:(id)arg1 imageFlags:(unsigned long long)arg2 ;
-(void)_updateButtonAccessibilityLabel;
-(id)_removeButtonImage;
-(void)setImageBeingUploaded:(UIImage *)arg1 ;
-(void)setThumbnailVideoBeingUploaded:(UIImage *)arg1 ;
-(void)setEditPhotoTile:(FBProfileIntroCardEditPhotoTile *)arg1 ;
-(FBProfileIntroCardEditPhotoTile *)editPhotoTile;
-(UIImage *)imageBeingUploaded;
-(UIImage *)thumbnailVideoBeingUploaded;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setPhoto:(FBMemPhoto *)arg1 ;
-(void)_updateButtonVisibility;
-(FBMemPhoto *)photo;
-(FBMemVideo *)video;
-(void)setVideo:(FBMemVideo *)arg1 ;
@end

