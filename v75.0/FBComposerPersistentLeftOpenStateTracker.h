/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerLifecycleListener.h>

@protocol OS_dispatch_queue;
@class FBPreferences, NSString, NSObject;

@interface FBComposerPersistentLeftOpenStateTracker : NSObject <FBComposerLifecycleListener> {

	FBPreferences* _preferences;
	NSString* _firstOpenedComposerCompositionID;
	BOOL _shouldSyncPreferencesOffMainThread;
	NSObject*<OS_dispatch_queue> _preferencesSyncQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPreferences:(id)arg1 shouldSyncPreferencesOffMainThread:(BOOL)arg2 ;
-(BOOL)readWasComposerLeftOpen;
-(void)clearLeftOpenState;
-(id)readsComposerLeftOpenCompositionID;
-(void)composerCreatedWithBootstrapContent:(id)arg1 bootstrapAnalyticsPayload:(id)arg2 ;
-(void)composerCompletedWithComposedResult:(id)arg1 compositionState:(id)arg2 ;
-(void)_composerPostComposedWithCompositionState:(id)arg1 ;
-(void)composerDisplayedWithCompositionState:(id)arg1 ;
@end

