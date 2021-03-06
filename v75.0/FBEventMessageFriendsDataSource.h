/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEventMessageFriendsDataSourceListener;
@class NSString, FBUserSession;

@interface FBEventMessageFriendsDataSource : NSObject {

	NSString* _eventID;
	FBUserSession* _session;
	id<FBEventMessageFriendsDataSourceListener> _listener;
	BOOL _isFetching;
	BOOL _isEventQueried;

}
-(void)startFetching;
-(id)initWithEventID:(id)arg1 listener:(id)arg2 session:(id)arg3 ;
-(void)_sendQueryForSection:(int)arg1 afterCursor:(id)arg2 ;
-(void)_handleResponseForConnection:(id)arg1 section:(int)arg2 ;
-(int)_sectionAfterSection:(int)arg1 ;
-(void)_handleError:(id)arg1 ;
-(void)_handleResponse:(id)arg1 ;
@end

