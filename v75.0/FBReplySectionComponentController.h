/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentController.h>
#import <Facebook/FBCommentComponentActionListener.h>
#import <Facebook/FBCommentComponentEditListener.h>

@class NSString;

@interface FBReplySectionComponentController : FBSectionComponentController <FBCommentComponentActionListener, FBCommentComponentEditListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_announcer;
-(void)didTapComponent:(id)arg1 ;
-(void)didTapSecondaryButton:(id)arg1 ;
-(id)_toolboxFromComponent;
-(id)_analyticsFunnel;
-(void)didTapReplyRow;
-(id)_commentFromComponent;
-(void)didTapDimmedComponent:(id)arg1 ;
-(void)didTapReplyOverlay;
-(void)didTapReplyToComment;
-(void)didTapLikeComment;
-(void)didBeginEditing;
-(void)didCancelEditing;
-(void)didCommitEditing:(id)arg1 ;
-(void)didLoad;
@end

