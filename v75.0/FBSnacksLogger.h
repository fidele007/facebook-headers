/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBUserSession;

@interface FBSnacksLogger : NSObject {

	NSString* _traySessionID;
	NSString* _snacksViewerSessionID;
	FBUserSession* _session;

}
-(void)endSnacksViewerSession;
-(void)startSnacksViewerSession;
-(void)_refreshTraySessionID;
-(void)_logEvent:(id)arg1 dictionary:(id)arg2 ;
-(void)log:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
