/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBLigerRequestObserver.h>

@class NSMutableDictionary;

@interface FBLigerHTTPRequestProcessObserver : NSObject <FBLigerRequestObserver> {

	TimeUtilGeneric<std::__1::chrono::steady_clock>* _clock;
	NSMutableDictionary* _observers;

}
-(void)request:(id)arg1 completedWithResponse:(id)arg2 events:(const vector<proxygen::TraceEvent, std::__1::allocator<proxygen::TraceEvent> >*)arg3 ;
-(void)request:(id)arg1 failedWithError:(id)arg2 events:(const vector<proxygen::TraceEvent, std::__1::allocator<proxygen::TraceEvent> >*)arg3 ;
-(void)request:(id)arg1 wasCancelledWithEvents:(const vector<proxygen::TraceEvent, std::__1::allocator<proxygen::TraceEvent> >*)arg2 ;
-(id)getUnitObserverForRequest:(id)arg1 ;
-(void)clearObserverForRequest:(id)arg1 ;
-(BOOL)shouldLogRequest:(id)arg1 ;
-(void)requestStartedLoading:(id)arg1 ;
-(id)init;
@end

