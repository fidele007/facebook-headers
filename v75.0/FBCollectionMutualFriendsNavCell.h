/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCollectionNavCell.h>

@class FBCollectionFacepileView, FBMemPerson;

@interface FBCollectionMutualFriendsNavCell : FBCollectionNavCell {

	FBCollectionFacepileView* _facePileView;
	FBMemPerson* _person;

}

@property (nonatomic,retain) FBMemPerson * person;              //@synthesize person=_person - In the implementation block
-(id)initWithReuseIdentifier:(id)arg1 session:(id)arg2 showCustomBorder:(BOOL)arg3 ;
-(void)layoutSubviews;
-(void)setPerson:(FBMemPerson *)arg1 ;
-(FBMemPerson *)person;
@end

