/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBPlaceMenuPhotosCellDelegate;
@class FBReactionPhotoHorizontalGalleryCollectionAttachmentsView, UIButton, UIView;

@interface FBPlaceMenuPhotosCell : UITableViewCell {

	FBReactionPhotoHorizontalGalleryCollectionAttachmentsView* _galleryView;
	UIButton* _seeMorePhotosButton;
	UIView* _bottomSeparator;
	id<FBPlaceMenuPhotosCellDelegate> _delegate;

}
-(void)_didTapSeeMore;
-(id)initWithDelegate:(id)arg1 horizontalGalleryView:(id)arg2 showBottomSeparator:(BOOL)arg3 ;
-(void)layoutSubviews;
@end

