/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED.h>

@protocol FBEventsComposerNativeModuleDelegate;
@interface FBEventsComposerModule : FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED {

	id<FBEventsComposerNativeModuleDelegate> _delegate;

}
-(id)initWithSession:(id)arg1 providerMap:(id)arg2 ;
-(void)bridgeDidInitializeModule:(id)arg1 ;
-(id)createEventsThemeSelectorViewControllerWithDelegate:(id)arg1 viewWidth:(double)arg2 yOffset:(double)arg3 ;
-(void)dealloc;
-(id)ID;
@end

