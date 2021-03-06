/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTFBSessionModule.h>

@class RCTBridge, FBUserSession, NSString;

@interface FBFacebookReactNavigator : NSObject <RCTFBSessionModule> {

	RCTBridge* _bridge;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@property (assign,nonatomic,__weak) FBUserSession * session;                          //@synthesize session=_session - In the implementation block
+(id)moduleName;
+(id)__rct_export__710;
+(id)__rct_export__1091;
+(id)__rct_export__1212;
+(id)__rct_export__1343;
+(id)__rct_export__1414;
+(id)__rct_export__1635;
+(id)__rct_export__2066;
+(id)__rct_export__2137;
+(id)__rct_export__2278;
+(id)__rct_export__2579;
+(id)__rct_export__27610;
+(id)__rct_export__29811;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)_hostViewControllerForReactTag:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleURL:(id)arg1 reactTag:(id)arg2 ;
-(void)_purgeReactSearchViewsFromViewStackIfNecessary:(id)arg1 viewController:(id)arg2 ;
-(void)replaceURL:(id)arg1 reactTag:(id)arg2 ;
-(void)handleIntent:(id)arg1 reactTag:(id)arg2 ;
-(void)openPhoto:(id)arg1 fbid:(id)arg2 height:(id)arg3 width:(id)arg4 ;
-(void)openLikersList:(id)arg1 feedbackID:(id)arg2 ;
-(void)openURL:(id)arg1 url:(id)arg2 ;
-(void)setLeftBarButton:(id)arg1 config:(id)arg2 ;
-(void)setRightBarButton:(id)arg1 config:(id)arg2 ;
-(void)clearRightBarButton:(id)arg1 ;
-(void)setNavigationBarTitle:(id)arg1 title:(id)arg2 ;
-(void)openReactView:(id)arg1 module:(id)arg2 props:(id)arg3 animated:(BOOL)arg4 navigatorOptions:(id)arg5 ;
-(void)openTarget:(id)arg1 fbid:(id)arg2 type:(id)arg3 ;
-(void)replaceTarget:(id)arg1 fbid:(id)arg2 type:(id)arg3 ;
-(void)openBrowseSearchResultPage:(id)arg1 querySemantic:(id)arg2 title:(id)arg3 typeaheadSessionID:(id)arg4 candidateSessionID:(id)arg5 inheritScopedSearchScopeEntity:(BOOL)arg6 ;
-(void)dismiss:(id)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(RCTBridge *)bridge;
@end

