/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBFriendingToolbox, FBMemFriendingPossibilitiesEdge;

@interface FBFriendSuggestionCellComponent : CKCompositeComponent {

	FBFriendingToolbox* _toolbox;
	FBMemFriendingPossibilitiesEdge* _possibilitiesEdge;

}

@property (nonatomic,retain) FBMemFriendingPossibilitiesEdge * possibilitiesEdge;              //@synthesize possibilitiesEdge=_possibilitiesEdge - In the implementation block
+(id)newWithPossibilitiesEdge:(id)arg1 separatorStyle:(unsigned long long)arg2 buttonAlignment:(unsigned long long)arg3 toolbox:(id)arg4 ;
-(FBMemFriendingPossibilitiesEdge *)possibilitiesEdge;
-(void)didTapPositiveButton:(id)arg1 ;
-(void)didTapNegativeButton:(id)arg1 ;
-(void)setPossibilitiesEdge:(FBMemFriendingPossibilitiesEdge *)arg1 ;
@end

