/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class CKComponent, FBSnacksToolbox, NSArray, FBHScrollComponent;

@interface FBInlineSnacksComponent : CKCompositeComponent {

	CKComponent* _mainComponent;
	BOOL _hasNewSeenState;
	FBSnacksToolbox* _toolbox;
	CKComponent* _selfCellComponent;
	NSArray* _friendBuckets;
	FBHScrollComponent* _hScrollComponent;
	NSArray* _hScrollFriendComponents;

}

@property (nonatomic,retain) FBSnacksToolbox * toolbox;                          //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,retain) CKComponent * selfCellComponent;                    //@synthesize selfCellComponent=_selfCellComponent - In the implementation block
@property (nonatomic,copy) NSArray * friendBuckets;                              //@synthesize friendBuckets=_friendBuckets - In the implementation block
@property (nonatomic,retain) FBHScrollComponent * hScrollComponent;              //@synthesize hScrollComponent=_hScrollComponent - In the implementation block
@property (nonatomic,copy) NSArray * hScrollFriendComponents;                    //@synthesize hScrollFriendComponents=_hScrollFriendComponents - In the implementation block
@property (nonatomic,readonly) BOOL hasNewSeenState;                             //@synthesize hasNewSeenState=_hasNewSeenState - In the implementation block
+(id)newWithModel:(id)arg1 toolbox:(id)arg2 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(FBSnacksToolbox *)toolbox;
-(void)setToolbox:(FBSnacksToolbox *)arg1 ;
-(FBHScrollComponent *)hScrollComponent;
-(NSArray *)friendBuckets;
-(CKComponent *)selfCellComponent;
-(void)setSelfCellComponent:(CKComponent *)arg1 ;
-(void)setFriendBuckets:(NSArray *)arg1 ;
-(void)setHScrollComponent:(FBHScrollComponent *)arg1 ;
-(NSArray *)hScrollFriendComponents;
-(void)setHScrollFriendComponents:(NSArray *)arg1 ;
-(BOOL)hasNewSeenState;
@end

