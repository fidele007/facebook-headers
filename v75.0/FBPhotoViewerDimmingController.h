/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBTimer;

@interface FBPhotoViewerDimmingController : NSObject {

	/*^block*/id _dimmingBlock;
	FBTimer* _dimmingTimer;
	long long _dimmingDisablingCounter;
	long long _undimmingDisablingCounter;
	BOOL _didResumeTimer;
	BOOL _dimmed;
	BOOL _useOneOffDimmingTimer;

}

@property (assign,nonatomic) BOOL dimmed;                             //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) BOOL useOneOffDimmingTimer;              //@synthesize useOneOffDimmingTimer=_useOneOffDimmingTimer - In the implementation block
-(BOOL)useOneOffDimmingTimer;
-(void)setUseOneOffDimmingTimer:(BOOL)arg1 ;
-(void)unDimPhotoViewer;
-(void)resumeDimmingTimer;
-(void)dimPhotoViewer;
-(void)pauseDimmingTimer;
-(void)disableDimming;
-(void)enableDimming;
-(BOOL)isDimmingEnabled;
-(BOOL)isUndimmingEnabled;
-(id)initWithTimerInterval:(long long)arg1 dimmingBlock:(/*^block*/id)arg2 ;
-(void)disableUndimming;
-(void)enableUndimming;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
@end

