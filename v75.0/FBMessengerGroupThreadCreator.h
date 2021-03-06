/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequestDelegate.h>

@protocol FBMessengerGroupThreadCreatorDelegate;
@class FBUserSession, NSString, NSArray, NSData, FBGraphBatchParticipatingRequest, FBSimpleNetworkerRequest;

@interface FBMessengerGroupThreadCreator : NSObject <FBNetworkerRequestDelegate> {

	FBUserSession* _session;
	NSString* _name;
	NSArray* _recipientFBIDs;
	NSData* _threadImageData;
	FBGraphBatchParticipatingRequest* _createThreadRequest;
	FBGraphBatchParticipatingRequest* _setProfileImageRequest;
	FBGraphBatchParticipatingRequest* _associateToGroupRequest;
	FBSimpleNetworkerRequest* _request;
	id<FBMessengerGroupThreadCreatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMessengerGroupThreadCreatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBGraphBatchParticipatingRequest * createThreadRequest;                 //@synthesize createThreadRequest=_createThreadRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didUpdateUploadProgress:(double)arg2 complete:(BOOL)arg3 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithSession:(id)arg1 name:(id)arg2 recipientFBIDs:(id)arg3 threadImage:(id)arg4 ;
-(void)startRequestWithAdditionalRequestBlock:(/*^block*/id)arg1 ;
-(FBGraphBatchParticipatingRequest *)createThreadRequest;
-(void)setCreateThreadRequest:(FBGraphBatchParticipatingRequest *)arg1 ;
-(void)setDelegate:(id<FBMessengerGroupThreadCreatorDelegate>)arg1 ;
-(id<FBMessengerGroupThreadCreatorDelegate>)delegate;
@end

