/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface FBFeedImpressionLogger : NSObject {

	NSString* _analyticsModule;
	NSMutableDictionary* _cellsAppearTime;
	NSMutableDictionary* _storiesTrackingInfo;
	NSDictionary* _analyticsExtras;

}

@property (nonatomic,copy) NSDictionary * analyticsExtras;              //@synthesize analyticsExtras=_analyticsExtras - In the implementation block
-(NSDictionary *)analyticsExtras;
-(id)initWithAnalyticsModule:(id)arg1 ;
-(void)setAnalyticsExtras:(NSDictionary *)arg1 ;
-(void)feedUnitDidAppear:(id)arg1 trackingCodes:(id)arg2 ;
-(void)setVisibleFeedUnits:(id)arg1 ;
-(void)feedUnitDidDisappear:(id)arg1 trackingCodes:(id)arg2 ;
@end
