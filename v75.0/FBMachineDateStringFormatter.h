/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSDateFormatter;

@interface FBMachineDateStringFormatter : NSObject {

	NSDateFormatter* _dateFormatter;
	mutex _lock;

}
+(id)sharedFormatter;
-(id)dateFromLimitedVariantsOfAnISO8601String:(id)arg1 ;
-(id)limitedVariantsOfAnISO8601StringFromDate:(id)arg1 ;
-(id)ISO8601StringFromDate:(id)arg1 timeZone:(id)arg2 dayOnly:(BOOL)arg3 ;
-(id)init;
@end
