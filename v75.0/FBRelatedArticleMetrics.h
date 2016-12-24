/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class PAInterfaceGuide;

@interface FBRelatedArticleMetrics : NSObject {

	PAInterfaceGuide* _interfaceGuide;
	double _attributionToHeadlineSpacing;
	CGSize _coverImageSize;
	CGSize _coverImageResolution;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _textInsets;
	FBTextMetrics* _sponsoredTextMetrics;
	FBTextMetrics* _kickerTextMetrics;
	FBTextMetrics* _headlineTextMetrics;

}

@property (nonatomic,readonly) UIEdgeInsets contentInsets;                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) double attributionToHeadlineSpacing;              //@synthesize attributionToHeadlineSpacing=_attributionToHeadlineSpacing - In the implementation block
@property (nonatomic,readonly) CGSize coverImageSize;                            //@synthesize coverImageSize=_coverImageSize - In the implementation block
@property (nonatomic,readonly) CGSize coverImageResolution;                      //@synthesize coverImageResolution=_coverImageResolution - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets textInsets;                          //@synthesize textInsets=_textInsets - In the implementation block
@property (nonatomic,readonly) FBTextMetrics* sponsoredTextMetrics;              //@synthesize sponsoredTextMetrics=_sponsoredTextMetrics - In the implementation block
@property (nonatomic,readonly) FBTextMetrics* kickerTextMetrics;                 //@synthesize kickerTextMetrics=_kickerTextMetrics - In the implementation block
@property (nonatomic,readonly) FBTextMetrics* headlineTextMetrics;               //@synthesize headlineTextMetrics=_headlineTextMetrics - In the implementation block
-(id)initWithInterfaceGuide:(id)arg1 ;
-(FBTextMetrics*)kickerTextMetrics;
-(CGSize)coverImageResolution;
-(FBTextMetrics*)sponsoredTextMetrics;
-(CGSize)coverImageSize;
-(FBTextMetrics*)headlineTextMetrics;
-(double)attributionToHeadlineSpacing;
-(UIEdgeInsets)contentInsets;
-(UIEdgeInsets)textInsets;
@end

