/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNativeArticleEngagementActionControllerProtocol.h>

@protocol FBQueriedActorFieldsProtocol, FBNativeArticleEngagementActionControllerDelegate;
@class ASDisplayNode, FBUserSession, FBMemModelObject, FBNativeArticleFollowButtonNode, NSString;

@interface FBNativeArticleFollowController : NSObject <FBNativeArticleEngagementActionControllerProtocol> {

	int _updatedLikeStatusSentinel;
	FBUserSession* _session;
	FBMemModelObject*<FBQueriedActorFieldsProtocol> _actor;
	FBNativeArticleFollowButtonNode* _buttonNode;
	id<FBNativeArticleEngagementActionControllerDelegate> _delegate;

}

@property (nonatomic,readonly) ASDisplayNode * buttonNode;                                                       //@synthesize buttonNode=_buttonNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBNativeArticleEngagementActionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSession:(id)arg1 buttonConfig:(id)arg2 actor:(id)arg3 ;
-(ASDisplayNode *)buttonNode;
-(void)_performFollowAction;
-(void)_updateFollowButtonWithSubscribee:(id)arg1 ;
-(void)setDelegate:(id<FBNativeArticleEngagementActionControllerDelegate>)arg1 ;
-(id<FBNativeArticleEngagementActionControllerDelegate>)delegate;
@end
