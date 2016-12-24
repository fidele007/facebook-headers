/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEventDiscoveryFilterDataSourceDelegate;
@class FBUserSession;

@interface FBEventDiscoveryFilterDataSource : NSObject {

	FBUserSession* _session;
	id<FBEventDiscoveryFilterDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEventDiscoveryFilterDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithUserSession:(id)arg1 ;
-(id)timeFiltersFromViewer:(id)arg1 ;
-(void)notifyDeleteError:(id)arg1 networkerRequestStatus:(id)arg2 ;
-(void)notifyDelegate:(id)arg1 ;
-(void)fetchDiscoveryFilters;
-(void)setDelegate:(id<FBEventDiscoveryFilterDataSourceDelegate>)arg1 ;
-(id<FBEventDiscoveryFilterDataSourceDelegate>)delegate;
@end
