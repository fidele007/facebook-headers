/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBPopoverControllerConfiguration : NSObject {

	Class _defaultBorderViewClass;
	Class _defaultAnimationProviderClass;

}

@property (nonatomic,readonly) Class defaultBorderViewClass;                     //@synthesize defaultBorderViewClass=_defaultBorderViewClass - In the implementation block
@property (nonatomic,readonly) Class defaultAnimationProviderClass;              //@synthesize defaultAnimationProviderClass=_defaultAnimationProviderClass - In the implementation block
+(id)sharedConfiguration;
-(Class)defaultBorderViewClass;
-(void)registerAnimationProvider:(Class)arg1 forContentViewControllerClass:(Class)arg2 ;
-(Class)animationProviderForContentViewControllerClass:(Class)arg1 ;
-(Class)defaultAnimationProviderClass;
-(id)init;
@end

