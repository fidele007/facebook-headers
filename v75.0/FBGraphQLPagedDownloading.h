/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBGraphQLPagedDownloading <NSObject,FBGraphQLPagedDownloadingAnnouncingInterface>
@property (nonatomic,copy,readonly) NSString * targetID; 
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) id<FBGraphQLConnectionInterface> connection; 
@required
-(BOOL)loadingTail;
-(BOOL)canLoadTail;
-(void)loadTail;
-(BOOL)loadingHead;
-(id)analytics;
-(id)lastHeadLoadError;
-(BOOL)loadingInitial;
-(id)lastTailLoadError;
-(void)loadHeadWithRefreshMode:(id)arg1 caller:(id)arg2;
-(void)startStreaming;
-(void)_cancelRequestsAndResetLoadState;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1;
-(id<FBGraphQLConnectionInterface>)connection;
-(NSString *)targetID;

@end

