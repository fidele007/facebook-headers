/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@class NSString;

@interface FBFeedHScrollLoadingCardComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	NSString* _analyticsPerfLoggerEvent;
	NSString* _analyticsPerfLoggerNameSpace;
	/*^block*/id _analyticsPerfLoggerContextBlock;

}
+(id)newWithContentComponent:(id)arg1 analyticsPerfLoggerEvent:(id)arg2 analyticsPerfLoggerNameSpace:(id)arg3 analyticsPerfLoggerContextBlock:(/*^block*/id)arg4 ;
-(void)becameFullyVisible;
-(void)resignedFullyVisible;
@end

