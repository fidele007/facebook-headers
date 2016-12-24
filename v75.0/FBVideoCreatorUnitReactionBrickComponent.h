/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBReactionBrickComponent.h>

@class FBReactionHorizontalScrollCardComponentsListBricksComponent, NSArray, FBVideoCreatorChannelToolbox;

@interface FBVideoCreatorUnitReactionBrickComponent : CKCompositeComponent <FBReactionBrickComponent> {

	FBReactionHorizontalScrollCardComponentsListBricksComponent* _reactionHScroll;
	NSArray* _curatorIDs;
	FBVideoCreatorChannelToolbox* _creatorChannelToolbox;

}

@property (nonatomic,retain) FBReactionHorizontalScrollCardComponentsListBricksComponent * reactionHScroll;              //@synthesize reactionHScroll=_reactionHScroll - In the implementation block
@property (nonatomic,copy) NSArray * curatorIDs;                                                                         //@synthesize curatorIDs=_curatorIDs - In the implementation block
@property (nonatomic,retain) FBVideoCreatorChannelToolbox * creatorChannelToolbox;                                       //@synthesize creatorChannelToolbox=_creatorChannelToolbox - In the implementation block
+(id)newWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 reactionUnitComponent:(id)arg4 position:(unsigned long long)arg5 indexPath:(id)arg6 ;
-(FBVideoCreatorChannelToolbox *)creatorChannelToolbox;
-(FBReactionHorizontalScrollCardComponentsListBricksComponent *)reactionHScroll;
-(void)setReactionHScroll:(FBReactionHorizontalScrollCardComponentsListBricksComponent *)arg1 ;
-(NSArray *)curatorIDs;
-(void)setCuratorIDs:(NSArray *)arg1 ;
-(void)setCreatorChannelToolbox:(FBVideoCreatorChannelToolbox *)arg1 ;
@end

