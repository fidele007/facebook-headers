/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBLeadGenToolbox, FBMemLeadGenDeepLinkData, FBLeadGenUnsharedDialogContentComponentState;

@interface FBLeadGenUnsharedDialogContentComponent : CKCompositeComponent {

	CKTypedComponentAction<> _updateStateAction;
	FBLeadGenToolbox* _toolbox;
	FBMemLeadGenDeepLinkData* _link;
	FBLeadGenUnsharedDialogContentComponentState* _state;

}

@property (nonatomic,readonly) FBLeadGenToolbox * toolbox;                                        //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBMemLeadGenDeepLinkData * link;                                   //@synthesize link=_link - In the implementation block
@property (nonatomic,readonly) FBLeadGenUnsharedDialogContentComponentState * state;              //@synthesize state=_state - In the implementation block
+(id)newWithLink:(id)arg1 toolbox:(id)arg2 userDidSubmitWithUpdatedStateAction:(CKTypedComponentAction<>)arg3 ;
-(FBLeadGenToolbox *)toolbox;
-(void)backToContextPage;
-(void)updateDialogState:(unsigned long long)arg1 signedRequestForSplitFlow:(id)arg2 splitFlowURLString:(id)arg3 ;
-(FBLeadGenUnsharedDialogContentComponentState *)state;
-(FBMemLeadGenDeepLinkData *)link;
@end

