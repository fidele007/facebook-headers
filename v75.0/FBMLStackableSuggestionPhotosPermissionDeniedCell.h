/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/SRFragmentCell.h>

@protocol FBMLStackableSuggestionPhotosPermissionDeniedCellResponder;
@class UIView, SYNPhotoPermissionMessageContainerView;

@interface FBMLStackableSuggestionPhotosPermissionDeniedCell : SRFragmentCell {

	UIView* _wrapView;
	SYNPhotoPermissionMessageContainerView* _contentView;
	id<FBMLStackableSuggestionPhotosPermissionDeniedCellResponder> _responder;

}

@property (assign,nonatomic,__weak) id<FBMLStackableSuggestionPhotosPermissionDeniedCellResponder> responder;              //@synthesize responder=_responder - In the implementation block
-(void)_didTapSettingsButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setResponder:(id<FBMLStackableSuggestionPhotosPermissionDeniedCellResponder>)arg1 ;
-(id<FBMLStackableSuggestionPhotosPermissionDeniedCellResponder>)responder;
@end

