/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/SRFragmentCell.h>

@class UIImageView, NSMutableArray, FBMLFolderFeedStoryFooterConfig;

@interface FBMLFolderFeedStoryFooterCell : SRFragmentCell {

	BOOL _isBatchUpdating;
	BOOL _isDirty;
	UIImageView* _chevronView;
	NSMutableArray* _labels;
	NSMutableArray* _uploadBadgeViews;
	NSMutableArray* _uploadBadgeOverlayViews;
	FBMLFolderFeedStoryFooterConfig* _config;

}

@property (nonatomic,retain) FBMLFolderFeedStoryFooterConfig * config;              //@synthesize config=_config - In the implementation block
+(double)heightThatFitsConstrainWidth:(double)arg1 config:(id)arg2 ;
+(id)_miniChevronImage;
+(id)_badgePendingImage;
+(id)_badgeBaseImage;
+(id)_badgeOverlaySpinnerImage;
+(id)_baseImageForAccessory:(unsigned long long)arg1 ;
+(id)_overlayImageForAccessory:(unsigned long long)arg1 ;
-(void)_configureViewsFromProps;
-(void)batchUpdates:(/*^block*/id)arg1 ;
-(void)_ensureBadgeAnimations;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(FBMLFolderFeedStoryFooterConfig *)config;
-(void)setConfig:(FBMLFolderFeedStoryFooterConfig *)arg1 ;
@end

