/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBStreamAnalyticsLogger, FBStreamAnalyticsContext;

@interface FBStreamAnalytics : NSObject <NSCopying> {

	FBStreamAnalyticsLogger* _logger;
	FBStreamAnalyticsContext* _context;

}

@property (nonatomic,copy,readonly) FBStreamAnalyticsLogger * logger;                //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy,readonly) FBStreamAnalyticsContext * context;              //@synthesize context=_context - In the implementation block
+(id)evaluateContext:(id)arg1 ;
-(void)logEvent:(id)arg1 extra:(/*^block*/id)arg2 ;
-(id)initWithLogger:(id)arg1 context:(id)arg2 ;
-(id)analyticsWithChildContextWithExtraParameters:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBStreamAnalyticsContext *)context;
-(FBStreamAnalyticsLogger *)logger;
@end
