/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCompositeFilter.h>

@interface FBSportsFilter : FBCompositeFilter {

	BOOL _needsInitialization;
	BOOL _hasError;
	double _xCenter;
	double _team1X;
	double _team2X;
	CGSize _outputSize;

}

@property (nonatomic,readonly) CGSize outputSize;              //@synthesize outputSize=_outputSize - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 time:(SCD_Struct_FB100)arg3 ;
-(void)_processUpdateScoreCommand:(id)arg1 ;
-(void)_processUpdateStatusCommand:(id)arg1 ;
-(Class)coordinatorClass;
-(void)loadInitialData:(id)arg1 ;
-(void)processCommand:(id)arg1 ;
-(id)init;
-(CGSize)outputSize;
@end

