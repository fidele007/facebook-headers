/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBItemView_DEPRECATED.h>
#import <Facebook/CKComponentProvider.h>

@class FBRichTextView, NSString;

@interface FBPageVideoHubVideoCell : FBItemView_DEPRECATED <CKComponentProvider> {

	FBRichTextView* _videoTimeTextView;

}

@property (nonatomic,retain) FBRichTextView * videoTimeTextView;              //@synthesize videoTimeTextView=_videoTimeTextView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
+(void)_setupThumbnailViewWithVideoView:(id)arg1 videoSummaryView:(id)arg2 ;
+(void)_setupUFIStringForVideoSummaryView:(id)arg1 model:(id)arg2 ;
+(void)_setupTitleWithVideoSummaryView:(id)arg1 model:(id)arg2 ;
+(id)videoHostingViewForVideo:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3 intentHandler:(id)arg4 thumbnailPointer:(id)arg5 ;
+(void)setupVideoSummaryView:(id)arg1 videoView:(id)arg2 model:(id)arg3 ;
-(FBRichTextView *)videoTimeTextView;
-(void)setVideoTimeTextView:(FBRichTextView *)arg1 ;
-(void)layoutSubviews;
@end

