/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSMutableDictionary;

@interface FBFeedVPVdDeduplicationKeyTracker : NSObject {

	NSMutableDictionary* _trackedVPVdDeduplicationKeys;
	mutex _trackedVPVdDeduplicationKeysLock;

}
-(void)_executeBlock:(/*^block*/id)arg1 forVPVdDeduplicationKey:(id)arg2 ;
-(void)stopTrackingVPVdDeduplicationKey:(id)arg1 ;
-(void)trackVPVdDeduplicationKey:(id)arg1 afterDelay:(double)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)init;
@end
