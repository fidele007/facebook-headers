/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBRichTextView.h>
#import <Facebook/FBFacecastScheduledCountdownControllerDelegate.h>

@class FBFacecastScheduledCountdownController, NSDate, NSString;

@interface FBFacecastScheduledCountdownView : FBRichTextView <FBFacecastScheduledCountdownControllerDelegate> {

	FBFacecastScheduledCountdownController* _countdown;
	NSDate* _expirationDate;
	unsigned long long _zeroFlashingSeconds;

}

@property (nonatomic,retain) NSDate * expirationDate;                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long zeroFlashingSeconds;              //@synthesize zeroFlashingSeconds=_zeroFlashingSeconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setZeroFlashingSeconds:(unsigned long long)arg1 ;
-(void)facecastScheduledCoundownController:(id)arg1 tickedTimeRemaining:(double)arg2 ;
-(void)facecastScheduledCoundownControllerTerminated:(id)arg1 ;
-(unsigned long long)zeroFlashingSeconds;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
@end

