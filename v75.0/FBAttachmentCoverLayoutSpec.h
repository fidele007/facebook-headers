/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBAttachmentCoverLayoutSpec : NSObject {

	BOOL _shouldConstrainSourceImageSize;
	CGSize _size;
	CGSize _minHeadlineSize;
	CGSize _maxHeadlineSize;
	CGSize _maxDescriptionSize;
	CGSize _minDescriptionSize;
	CGSize _minBylineSize;
	CGSize _maxBylineSize;
	CGSize _sourceImageSize;

}

@property (assign,nonatomic) BOOL shouldConstrainSourceImageSize;              //@synthesize shouldConstrainSourceImageSize=_shouldConstrainSourceImageSize - In the implementation block
@property (assign,nonatomic) CGSize size;                                      //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGSize minHeadlineSize;                           //@synthesize minHeadlineSize=_minHeadlineSize - In the implementation block
@property (assign,nonatomic) CGSize maxHeadlineSize;                           //@synthesize maxHeadlineSize=_maxHeadlineSize - In the implementation block
@property (assign,nonatomic) CGSize maxDescriptionSize;                        //@synthesize maxDescriptionSize=_maxDescriptionSize - In the implementation block
@property (assign,nonatomic) CGSize minDescriptionSize;                        //@synthesize minDescriptionSize=_minDescriptionSize - In the implementation block
@property (assign,nonatomic) CGSize minBylineSize;                             //@synthesize minBylineSize=_minBylineSize - In the implementation block
@property (assign,nonatomic) CGSize maxBylineSize;                             //@synthesize maxBylineSize=_maxBylineSize - In the implementation block
@property (assign,nonatomic) CGSize sourceImageSize;                           //@synthesize sourceImageSize=_sourceImageSize - In the implementation block
-(void)setSourceImageSize:(CGSize)arg1 ;
-(CGSize)sourceImageSize;
-(void)setShouldConstrainSourceImageSize:(BOOL)arg1 ;
-(CGRect)coverImageFrame;
-(CGRect)sourceImageFrame;
-(FBTextMetrics*)maxBylineTextMetrics;
-(void)setMaxBylineSize:(CGSize)arg1 ;
-(CGRect)maxMaxBylineFrame;
-(FBTextMetrics*)maxHeadlineTextMetrics;
-(CGSize)maxHeadlineConstrainedSize;
-(void)setMaxHeadlineSize:(CGSize)arg1 ;
-(CGRect)maxMaxHeadlineFrame;
-(CGSize)maxHeadlineSize;
-(FBTextMetrics*)maxDescriptionTextMetrics;
-(CGSize)maxDescriptionConstrainedSize;
-(void)setMaxDescriptionSize:(CGSize)arg1 ;
-(CGRect)maxMaxDescriptionFrame;
-(BOOL)shouldShowBottomGradient;
-(CGRect)bottomGradientFrame;
-(BOOL)shouldShowTopGradient;
-(CGRect)topGradientFrame;
-(CGRect)barFrameForBar:(long long)arg1 ;
-(id)barColorForBar:(long long)arg1 ;
-(BOOL)shouldShowCoverBorder;
-(CGRect)coverBorderFrame;
-(CGRect)overlayFrame;
-(CGSize)coverImageSize;
-(CGRect)coverVideoFrame;
-(CGRect)minMinHeadlineFrame;
-(CGRect)minMaxHeadlineFrame;
-(CGRect)maxMinHeadlineFrame;
-(CGRect)minMinDescriptionFrame;
-(CGRect)minMaxDescriptionFrame;
-(CGRect)maxMinDescriptionFrame;
-(CGRect)minMinBylineFrame;
-(CGRect)minMaxBylineFrame;
-(CGRect)maxMinBylineFrame;
-(BOOL)shouldShowMiniDescription;
-(void)setMinDescriptionSize:(CGSize)arg1 ;
-(void)setMinBylineSize:(CGSize)arg1 ;
-(void)setMinHeadlineSize:(CGSize)arg1 ;
-(CGRect)bylineAreaFrame;
-(CGSize)minHeadlineSize;
-(CGSize)maxDescriptionSize;
-(CGSize)minDescriptionSize;
-(BOOL)shouldConstrainSourceImageSize;
-(CGSize)maxBylineSize;
-(CGSize)minBylineSize;
-(FBTextMetrics*)minHeadlineTextMetrics;
-(long long)headlineTextAlignment;
-(FBTextMetrics*)minDescriptionTextMetrics;
-(FBTextMetrics*)minBylineTextMetrics;
-(CGSize)minDescriptionConstrainedSize;
-(CGSize)minBylineConstrainedSize;
-(CGSize)maxBylineConstrainedSize;
-(CGSize)minHeadlineConstrainedSize;
-(BOOL)hasCoverImage;
-(CGSize)coverVideoSize;
-(BOOL)hasCoverVideo;
-(CGSize)size;
-(id)backgroundColor;
-(id)init;
-(void)setSize:(CGSize)arg1 ;
-(FBAttachmentCoverLayoutSpecMetrics*)metrics;
-(id)borderColor;
-(id)overlayImage;
-(long long)numberOfBars;
@end

