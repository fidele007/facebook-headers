/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNuxServerContext.h>

@class NSArray, NSString;

@interface FBNewAccountNUXInterstitialContext : NSObject <FBNuxServerContext> {

	NSArray* _steps;
	unsigned long long _currentStepIndex;

}

@property (nonatomic,copy) NSArray * steps;                                    //@synthesize steps=_steps - In the implementation block
@property (assign,nonatomic) unsigned long long currentStepIndex;              //@synthesize currentStepIndex=_currentStepIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parseParameters:(id)arg1 ;
-(id)initWithNuxParameters:(id)arg1 ;
-(NSArray *)steps;
-(void)setSteps:(NSArray *)arg1 ;
-(unsigned long long)currentStepIndex;
-(void)setCurrentStepIndex:(unsigned long long)arg1 ;
@end

