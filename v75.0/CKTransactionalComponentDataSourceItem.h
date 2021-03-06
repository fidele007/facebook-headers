/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentCommonItemProtocol.h>

@class CKComponentScopeRoot, NSString;

@interface CKTransactionalComponentDataSourceItem : NSObject <CKComponentCommonItemProtocol> {

	CKComponentLayout* _layout;
	id _model;
	CKComponentScopeRoot* _scopeRoot;
	CKComponentBoundsAnimation _boundsAnimation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id model;                                                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) CKComponentScopeRoot * scopeRoot;                        //@synthesize scopeRoot=_scopeRoot - In the implementation block
@property (nonatomic,readonly) CKComponentBoundsAnimation boundsAnimation;              //@synthesize boundsAnimation=_boundsAnimation - In the implementation block
-(id)lifecycleManager;
-(CKComponentScopeRoot *)scopeRoot;
-(id)initWithLayout:(const CKComponentLayout*)arg1 model:(id)arg2 scopeRoot:(id)arg3 boundsAnimation:(CKComponentBoundsAnimation)arg4 ;
-(CKComponentBoundsAnimation)boundsAnimation;
-(const CKComponentLayout*)layout;
-(id)model;
@end

