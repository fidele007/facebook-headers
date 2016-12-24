/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBQueriedFeedUnitFieldsProtocol;
@class FBMemModelObject, FBFeedUnitDebugInfoManager;

@interface FBFeedUnitDebugInfoComponent : CKCompositeComponent {

	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _feedUnit;
	FBFeedUnitDebugInfoManager* _debugInfoManager;

}

@property (nonatomic,readonly) FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> feedUnit;              //@synthesize feedUnit=_feedUnit - In the implementation block
@property (nonatomic,readonly) FBFeedUnitDebugInfoManager * debugInfoManager;                            //@synthesize debugInfoManager=_debugInfoManager - In the implementation block
+(id)newWithUnit:(id)arg1 component:(id)arg2 toolbox:(id)arg3 ;
+(id)initialState;
-(FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol>)feedUnit;
-(FBFeedUnitDebugInfoManager *)debugInfoManager;
@end

