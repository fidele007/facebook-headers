/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBUserSession, FBMemProductItem;

@interface FBReactionServiceListItemComponent : CKCompositeComponent {

	CKTypedComponentAction<> _action;
	FBUserSession* _session;
	FBMemProductItem* _productItem;

}

@property (nonatomic,readonly) FBUserSession * session;                     //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBMemProductItem * productItem;              //@synthesize productItem=_productItem - In the implementation block
+(id)newWithProduct:(id)arg1 reactionContext:(id)arg2 reactionUnit:(id)arg3 action:(CKTypedComponentAction<>)arg4 ;
-(void)tapped;
-(FBMemProductItem *)productItem;
-(FBUserSession *)session;
@end

