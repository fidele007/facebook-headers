/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBRepliesConnectionSectionComponentListener.h>

@class NSString;

@interface FBRepliesConnectionSectionComponentListenerAnnouncer : FBAnnouncerBase <FBRepliesConnectionSectionComponentListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)hideCommentComposerDuringEditingForReply:(id)arg1 ;
-(void)unhideCommentComposerAfterEditingForReply:(id)arg1 ;
-(void)switchToEditModeWithReply:(id)arg1 ;
-(void)exitEditModeWithReply:(id)arg1 ;
-(void)activateComposerForReply:(id)arg1 parentComment:(id)arg2 ;
-(void)activateComposerForParentComment:(id)arg1 ;
-(void)didTapLikeOnReply:(id)arg1 ;
-(void)unfocusReplyThread;
-(void)scrollToReplyBeingEdited:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

