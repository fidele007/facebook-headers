/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBIntentHandler;
@class NSString;

@interface FBMemorialContactToolsComponent : CKCompositeComponent {

	NSString* _FBID;
	id<FBIntentHandler> _intentHandler;

}

@property (nonatomic,copy,readonly) NSString * FBID;                                //@synthesize FBID=_FBID - In the implementation block
@property (assign,nonatomic,__weak) id<FBIntentHandler> intentHandler;              //@synthesize intentHandler=_intentHandler - In the implementation block
+(id)newWithFBID:(id)arg1 memorializedPersonShortName:(id)arg2 gender:(id)arg3 intentHandler:(id)arg4 ;
-(id<FBIntentHandler>)intentHandler;
-(void)setIntentHandler:(id<FBIntentHandler>)arg1 ;
-(NSString *)FBID;
-(void)didTapContinueProfileButton:(id)arg1 ;
-(void)didTapLearnMore:(id)arg1 ;
@end

