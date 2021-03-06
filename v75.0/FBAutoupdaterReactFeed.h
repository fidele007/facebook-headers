/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequestDelegate.h>
#import <Facebook/FBAutoupdaterFeed.h>

@protocol FBAutoupdaterFeedDelegate;
@class FBAutoupdaterHost, FBUserSession, FBSimpleNetworkerRequest, NSString;

@interface FBAutoupdaterReactFeed : NSObject <FBNetworkerRequestDelegate, FBAutoupdaterFeed> {

	id<FBAutoupdaterFeedDelegate> _delegate;
	FBAutoupdaterHost* _host;
	FBUserSession* _session;
	FBSimpleNetworkerRequest* _request;

}

@property (assign,nonatomic,__weak) id<FBAutoupdaterFeedDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBAutoupdaterHost * host;                                   //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                    //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBSimpleNetworkerRequest * request;                         //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithDelegate:(id)arg1 host:(id)arg2 session:(id)arg3 ;
-(void)fetchUpdates;
-(void)fetchUpdatesWithConnection:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<FBAutoupdaterFeedDelegate>)arg1 ;
-(id<FBAutoupdaterFeedDelegate>)delegate;
-(FBSimpleNetworkerRequest *)request;
-(id)initWithDelegate:(id)arg1 ;
-(FBAutoupdaterHost *)host;
-(void)setHost:(FBAutoupdaterHost *)arg1 ;
-(void)setRequest:(FBSimpleNetworkerRequest *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

