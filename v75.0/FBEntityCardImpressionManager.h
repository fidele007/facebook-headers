/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEntityCardsAnalyticsLogger;
@class NSString, NSDate, UIViewController;

@interface FBEntityCardImpressionManager : NSObject {

	id<FBEntityCardsAnalyticsLogger> _logger;
	NSString* _lastDisplayedEntityID;
	NSDate* _appearedTime;
	UIViewController* _lastDisplayedViewController;

}
-(id)initWithLogger:(id)arg1 ;
-(void)entityCardDisappeared;
-(void)entityCardAppearedWithEntity:(id)arg1 viewController:(id)arg2 ;
-(void)dealloc;
@end

