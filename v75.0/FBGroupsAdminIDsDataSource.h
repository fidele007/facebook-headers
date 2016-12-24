/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class FBUserSession, NSMutableArray, NSString;

@interface FBGroupsAdminIDsDataSource : NSObject {

	FBUserSession* _session;
	NSMutableArray* _adminIDs;
	NSMutableArray* _moderatorIDs;
	NSString* _tailCursor;
	BOOL _canDownloadTail;
	id<FBServiceTransactionMutating> _downloadHandle;

}
-(void)downloadData:(id)arg1 ;
-(BOOL)isDownloadingData;
-(BOOL)canDownloadTail;
-(void)_downloadData:(id)arg1 downloadType:(long long)arg2 usingCache:(BOOL)arg3 ;
-(void)_downloadGroupAdmins:(BOOL)arg1 groupID:(id)arg2 downloadType:(long long)arg3 ;
-(id)getIDsForAdminType:(id)arg1 ;
-(void)invalidate:(id)arg1 ;
-(void)cancelRequests;
-(id)initWithSession:(id)arg1 ;
@end

