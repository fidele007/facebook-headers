/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBClashSessionPersister : NSObject {

	NSString* _location;
	NSString* _pqResultKey;
	NSString* _slotTimestampKey;

}
-(id)initWithClashLocation:(id)arg1 ;
-(void)persistSessionWithClashPQResult:(id)arg1 lastSlotTakenTime:(id)arg2 fromSession:(id)arg3 ;
-(id)loadDataFromSession:(id)arg1 ;
@end
