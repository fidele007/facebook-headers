/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@interface FBLeadGenCustomCheckboxComponent : CKCompositeComponent {

	CKTypedComponentAction<> _tapAction;
	id _identifier;

}

@property (nonatomic,readonly) id identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)newWithIdendifier:(id)arg1 isRequiredValue:(BOOL)arg2 bodyString:(id)arg3 optionalString:(id)arg4 errorString:(id)arg5 state:(unsigned long long)arg6 tapAction:(CKTypedComponentAction<>)arg7 ;
-(void)didTapCheckbox;
-(id)identifier;
@end

