/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@protocol FBFeedHeaderSubtitleSequenceGenerator;
@class FBAnalyticsInfo, FBFeedToolbox;

@interface FBFeedHeaderSubtitleTextComponent : CKComponent {

	id<FBFeedHeaderSubtitleSequenceGenerator> _subtitleSequenceGenerator;
	BOOL _exp_allowMultipleLines;
	unsigned long long _maximumNumberOfLines;
	FBAnalyticsInfo* _analyticsInfo;
	FBFeedToolbox* _toolbox;

}
+(id)newWithSubtitleSequenceGenerator:(id)arg1 style:(FBFeedHeaderSubtitleTextComponentStyle)arg2 analyticsInfo:(id)arg3 toolbox:(id)arg4 ;
+(double)lineHeightWithExperimentCache:(id)arg1 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(void)handleLinkTap:(id)arg1 ;
@end

