/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <Facebook/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSString;

@interface FBComposerCameraFramesInfo : FBValueObject <FBObjectShallowCopyProtocol, NSCopying, NSCoding> {

	NSArray* _preloadedFrames;
	unsigned long long _startingFrameIndex;

}

@property (nonatomic,copy,readonly) NSArray * preloadedFrames;                     //@synthesize preloadedFrames=_preloadedFrames - In the implementation block
@property (nonatomic,readonly) unsigned long long startingFrameIndex;              //@synthesize startingFrameIndex=_startingFrameIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)preloadedFrames;
-(unsigned long long)startingFrameIndex;
-(id)initWithPreloadedFrames:(id)arg1 startingFrameIndex:(unsigned long long)arg2 ;
-(id)shallowCopy;
@end

