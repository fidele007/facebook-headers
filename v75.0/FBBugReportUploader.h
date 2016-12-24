/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBBugReportUploadingWithFBNetworker.h>

@protocol FBNetworkDispatch;
@class FBAPISessionStore, NSMutableArray, NSString;

@interface FBBugReportUploader : NSObject <FBBugReportUploadingWithFBNetworker> {

	id<FBNetworkDispatch> _networkDispatcher;
	FBAPISessionStore* _apiSessionStore;
	NSMutableArray* _bugReports;
	NSMutableArray* _attachments;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNetworkDispatcher:(id)arg1 apiSessionStore:(id)arg2 ;
-(void)uploadArchivedAttachments;
-(void)uploadGeneralFeedback:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)uploadBugReport:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)_uploadRequestForGeneralFeedback:(id)arg1 ;
-(id)_uploadRequestForMethod:(id)arg1 parameters:(id)arg2 ;
-(id)_attachmentFromData:(id)arg1 filename:(id)arg2 bugID:(id)arg3 accessToken:(id)arg4 ;
-(void)_removeAttachmentFromComposerFolder:(id)arg1 ;
-(void)uploadBugReportAttachment:(id)arg1 ;
-(id)parametersForGraphApiWithLoggedInUser:(id)arg1 configID:(id)arg2 attachmentFileNames:(id)arg3 bugReport:(id)arg4 ;
@end

