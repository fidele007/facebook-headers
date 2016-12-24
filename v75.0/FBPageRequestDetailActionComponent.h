/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBPageRequestActionComponentDelegate;
@class NSString;

@interface FBPageRequestDetailActionComponent : CKCompositeComponent {

	NSString* _universalNumber;
	id<FBPageRequestActionComponentDelegate> _delegate;

}
+(id)newWithActionType:(long long)arg1 actionLink:(id)arg2 ;
+(id)newWithEmailAddress:(id)arg1 delegate:(id)arg2 ;
+(id)newWithPhoneNumber:(id)arg1 universalNumber:(id)arg2 delegate:(id)arg3 ;
-(void)_didTapEmail:(id)arg1 ;
-(void)_didTapPhone:(id)arg1 ;
@end
