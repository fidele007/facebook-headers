/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBStreamingEventModelDelegate <NSObject>
@required
-(void)facecastEventsModel:(id)arg1 didLoadEvent:(id)arg2;
-(void)facecastEventsModel:(id)arg1 didDeliverEvent:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)facecastEventsModelFailedToLoadEvent:(id)arg1;
-(void)facecastEventsModelRefreshed:(id)arg1;
-(void)facecastEventsModel:(id)arg1 refreshedAtIndex:(unsigned long long)arg2;

@end

