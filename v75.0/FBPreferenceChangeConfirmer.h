/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBPreferenceChangeConfirmer : NSObject {

	NSMutableArray* _alertViewDelegates;
	BOOL _shouldTeardown;

}

@property (assign,nonatomic) BOOL shouldTeardown;              //@synthesize shouldTeardown=_shouldTeardown - In the implementation block
+(id)sharedTeardownConfirmer;
+(id)sharedBackgroundConfirmer;
-(void)confirmWithBlock:(/*^block*/id)arg1 cancellationBlock:(/*^block*/id)arg2 alertViewCreator:(id)arg3 ;
-(void)setShouldTeardown:(BOOL)arg1 ;
-(void)confirmerWorkerDone:(id)arg1 ;
-(BOOL)shouldTeardown;
-(id)initPrivate;
@end

