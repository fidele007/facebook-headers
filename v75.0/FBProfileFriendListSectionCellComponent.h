/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBFriendingToolbox, FBMemPerson;

@interface FBProfileFriendListSectionCellComponent : CKCompositeComponent {

	FBFriendingToolbox* _toolbox;
	FBMemPerson* _person;
	CKTypedComponentAction<> _personCellAction;
	const FBGraphQLFieldSetRef _personFragmentFieldSet;

}

@property (nonatomic,readonly) FBMemPerson * person;              //@synthesize person=_person - In the implementation block
+(id)newWithInitialPerson:(id)arg1 toolbox:(id)arg2 personFragmentFieldSet:(const FBGraphQLFieldSetRef)arg3 didTapFriendButtonAction:(CKTypedComponentAction<>)arg4 didTapOverflowButtonAction:(CKTypedComponentAction<>)arg5 didTapPersonCellAction:(CKTypedComponentAction<>)arg6 ;
-(void)_didTapPersonCell;
-(FBMemPerson *)person;
@end

