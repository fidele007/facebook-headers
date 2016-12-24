/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>
#import <Facebook/FBAnalyticsInfoSource.h>

@protocol FBAttachmentNodeDelegate;
@class ASDisplayNode, NSString;

@interface FBAttachmentNode : ASDisplayNode <FBAnalyticsInfoSource> {

	BOOL _delegateNodeWillAppear;
	BOOL _delegateNodeDidDissapear;
	BOOL _storyHasFullscreenFocus;
	BOOL _edgeAntialiasingEnabled;
	ASDisplayNode* _owningViewNode;
	id<FBAttachmentNodeDelegate> _delegate;
	ASDisplayNode* _accessoryNode;

}

@property (assign,nonatomic,__weak) ASDisplayNode * owningViewNode;                     //@synthesize owningViewNode=_owningViewNode - In the implementation block
@property (assign,nonatomic,__weak) id<FBAttachmentNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPageable,nonatomic,readonly) BOOL pageable; 
@property (nonatomic,retain) ASDisplayNode * accessoryNode;                             //@synthesize accessoryNode=_accessoryNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(id)analyticsModule;
-(id)analyticsExtras;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)willEnterHierarchy;
-(void)didExitHierarchy;
-(void)setMinimorphFactor:(FBMinimorphFactor)arg1 ;
-(void)setAccessoryNode:(ASDisplayNode *)arg1 ;
-(BOOL)wantsFullscreen;
-(BOOL)isPageable;
-(ASDisplayNode *)owningViewNode;
-(void)setOwningViewNode:(ASDisplayNode *)arg1 ;
-(ASDisplayNode *)accessoryNode;
-(void)setDelegate:(id<FBAttachmentNodeDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<FBAttachmentNodeDelegate>)delegate;
-(void)layout;
-(void)setEdgeAntialiasingEnabled:(BOOL)arg1 ;
@end

