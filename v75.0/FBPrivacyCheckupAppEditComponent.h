/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBPrivacyReviewCoreToolbox, FBPrivacyCheckupModel;

@interface FBPrivacyCheckupAppEditComponent : CKCompositeComponent {

	FBPrivacyReviewCoreToolbox* _toolbox;
	FBPrivacyCheckupModel* _checkupModel;
	CKTypedComponentAction<> _deleteAppAction;
	CKTypedComponentAction<> _deleteAppAndPostsAction;

}

@property (nonatomic,readonly) FBPrivacyReviewCoreToolbox * toolbox;                          //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,copy,readonly) FBPrivacyCheckupModel * checkupModel;                     //@synthesize checkupModel=_checkupModel - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> deleteAppAction;                      //@synthesize deleteAppAction=_deleteAppAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> deleteAppAndPostsAction;              //@synthesize deleteAppAndPostsAction=_deleteAppAndPostsAction - In the implementation block
+(id)newWithCheckupModel:(id)arg1 privacyChangeAction:(CKTypedComponentAction<>)arg2 deleteAppAction:(CKTypedComponentAction<>)arg3 deleteAppAndPostsAction:(CKTypedComponentAction<>)arg4 toolbox:(id)arg5 ;
+(id)initialState;
-(FBPrivacyReviewCoreToolbox *)toolbox;
-(FBPrivacyCheckupModel *)checkupModel;
-(CKTypedComponentAction<>)deleteAppAction;
-(CKTypedComponentAction<>)deleteAppAndPostsAction;
@end

