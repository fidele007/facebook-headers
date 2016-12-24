/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBDirectInboxDataControllerListener.h>
#import <Facebook/FBJewelNetworkDataSource.h>

@protocol FBDirectEntrypointDataProvider;
@class FBUserSession, NSString;

@interface FBDirectInboxJewelNetworkDataSource : NSObject <FBDirectInboxDataControllerListener, FBJewelNetworkDataSource> {

	FBUserSession* _session;
	id<FBDirectEntrypointDataProvider> _dataProvider;
	BOOL _needsReload;
	unsigned long long _badgeCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long badgeCount;              //@synthesize badgeCount=_badgeCount - In the implementation block
@property (assign,nonatomic) BOOL needsReload;                             //@synthesize needsReload=_needsReload - In the implementation block
-(void)reloadDataWithReason:(long long)arg1 ;
-(void)inboxDataController:(id)arg1 didUpdateDirectInboxBuckets:(id)arg2 ;
-(void)inboxDataController:(id)arg1 didUpdateToBadgeCount:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)setNeedsReload:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)cancelAllRequests;
-(BOOL)needsReload;
-(void)setBadgeCount:(unsigned long long)arg1 ;
-(unsigned long long)badgeCount;
@end

