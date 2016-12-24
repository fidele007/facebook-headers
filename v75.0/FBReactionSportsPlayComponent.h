/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@protocol FBReactionSportsPlayComponentLogger, FBReactionSportsPlayComponentResizeDelegate;
@class FBMemSportsDataMatchDataFact, FBFeedToolbox;

@interface FBReactionSportsPlayComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	FBMemSportsDataMatchDataFact* _fact;
	FBFeedToolbox* _toolbox;
	id<FBReactionSportsPlayComponentLogger> _logger;
	id<FBReactionSportsPlayComponentResizeDelegate> _resizeDelegate;

}

@property (nonatomic,readonly) FBMemSportsDataMatchDataFact * fact;                                                //@synthesize fact=_fact - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                                            //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) id<FBReactionSportsPlayComponentLogger> logger;                                     //@synthesize logger=_logger - In the implementation block
@property (nonatomic,__weak,readonly) id<FBReactionSportsPlayComponentResizeDelegate> resizeDelegate;              //@synthesize resizeDelegate=_resizeDelegate - In the implementation block
+(id)newWithMatchFact:(id)arg1 toolbox:(id)arg2 inset:(UIEdgeInsets)arg3 minHeight:(double)arg4 dropShadow:(BOOL)arg5 logger:(id)arg6 resizeDelegate:(id)arg7 fixedWidth:(id)arg8 ;
-(FBFeedToolbox *)toolbox;
-(FBMemSportsDataMatchDataFact *)fact;
-(id<FBReactionSportsPlayComponentResizeDelegate>)resizeDelegate;
-(id<FBReactionSportsPlayComponentLogger>)logger;
@end

