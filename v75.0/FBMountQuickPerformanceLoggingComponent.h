/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBQuickPerformanceLogger, NSString;

@interface FBMountQuickPerformanceLoggingComponent : CKCompositeComponent {

	BOOL _analyticsSampled;
	FBQuickPerformanceLogger* _quickLogger;
	int _markerID;
	int _instanceKey;
	NSString* _source;
	NSString* _analyticsModule;
	NSString* _componentClassName;

}
+(id)newWithComponent:(id)arg1 componentClassName:(id)arg2 quickLoggerMarkerID:(int)arg3 instanceKey:(int)arg4 source:(id)arg5 analyticsModule:(id)arg6 ;
-(MountResult*)mountInContext:(const MountContext*)arg1 size:(CGSize)arg2 children:(shared_ptr<const std::__1::vector<CKComponentLayoutChild, std::__1::allocator<CKComponentLayoutChild> > >*)arg3 supercomponent:(id)arg4 ;
-(void)childrenDidMount;
@end

