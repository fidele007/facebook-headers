/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReloadableJSExecutor.h>
#import <Facebook/FBInvalidating.h>

@class FBJSBundleSpecifier, FBReloadableJSExecutorListenerAnnouncer, FBSimpleJSExecutor, NSString;

@interface FBSimpleReloadableJSExecutor : NSObject <FBReloadableJSExecutor, FBInvalidating> {

	FBJSBundleSpecifier* _specifier;
	FBReloadableJSExecutorListenerAnnouncer* _announcer;
	recursive_mutex _underlyingExecutorMutex;
	FBSimpleJSExecutor* _underlyingExecutor;
	FBJSExecutorPerformanceStatistics _originalPerformanceStatistics;
	BOOL _useCustomJSCLibrary;
	BOOL _tryBytecode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 error:(id*)arg4 ;
-(void)reloadBundle;
-(id)initWithSpecifier:(id)arg1 JSContextProvider:(id)arg2 ;
-(FBJSExecutorPerformanceStatistics)performanceStatistics;
-(void)invalidate;
-(BOOL)isValid;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

