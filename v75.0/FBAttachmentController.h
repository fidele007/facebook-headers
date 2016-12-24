/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAttachmentNodeDelegate.h>

@protocol FBAttachmentControllerDelegate;
@class FBUserSession, NSString;

@interface FBAttachmentController : NSObject <FBAttachmentNodeDelegate> {

	FBUserSession* _session;
	id<FBAttachmentControllerDelegate> _delegate;
	id _attachment;

}

@property (nonatomic,readonly) FBUserSession * session;                                       //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<FBAttachmentControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id attachment;                                                   //@synthesize attachment=_attachment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)handleIntent:(id)arg1 ;
-(id)analyticsExtras;
-(void)didUpdateAttachment:(id)arg1 ;
-(BOOL)allowsAttachmentUpdates;
-(id)attachmentNode;
-(BOOL)shouldAllowDismissGestureAtPoint:(CGPoint)arg1 inDirection:(long long)arg2 ;
-(void)setDelegate:(id<FBAttachmentControllerDelegate>)arg1 ;
-(id<FBAttachmentControllerDelegate>)delegate;
-(void)setAttachment:(id)arg1 ;
-(id)attachment;
-(id)initWithSession:(id)arg1 ;
-(FBUserSession *)session;
@end
