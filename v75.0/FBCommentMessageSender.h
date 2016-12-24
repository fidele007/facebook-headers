/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphMessageSendListening.h>

@protocol FBGraphMessageSendListening;
@class FBGraphMessageSendRequestRunner, NSString;

@interface FBCommentMessageSender : NSObject <FBGraphMessageSendListening> {

	FBGraphMessageSendRequestRunner* _messageSendRequestRunner;
	id<FBGraphMessageSendListening> _delegate;

}

@property (assign,nonatomic,__weak) id<FBGraphMessageSendListening> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendComment:(id)arg1 story:(id)arg2 recipient:(id)arg3 clientTags:(id)arg4 ;
-(void)sendGraphMessage:(id)arg1 ;
-(void)graphMessageSendRequestRunnerWillSendMessage:(id)arg1 ;
-(void)graphMessageSendRequestRunnerDidUpdateProgressForMessage:(id)arg1 didUpdateUploadProgress:(double)arg2 ;
-(void)graphMessageSendRequestRunnerDidSendMessage:(id)arg1 messageId:(id)arg2 ;
-(void)graphMessageSendRequestRunnerDidCancelSendingMessage:(id)arg1 ;
-(void)graphMessageSendRequestRunnerCouldNotSendMessage:(id)arg1 error:(id)arg2 ;
-(void)graphMessageSendRequestRunnerWillRetrySendingMessage:(id)arg1 ;
-(void)setDelegate:(id<FBGraphMessageSendListening>)arg1 ;
-(id<FBGraphMessageSendListening>)delegate;
-(id)initWithSession:(id)arg1 ;
@end

