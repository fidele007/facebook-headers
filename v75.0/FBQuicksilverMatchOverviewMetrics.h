/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBQuicksilverMatchOverviewMetrics : NSObject {

	double _verticalMargin;
	double _sideMargin;
	double _bottomBarHeight;
	double _playButtonHeight;
	double _playButtonFontSize;
	double _bottomLoadingIndicatorDiameter;

}

@property (nonatomic,readonly) double verticalMargin;                              //@synthesize verticalMargin=_verticalMargin - In the implementation block
@property (nonatomic,readonly) double sideMargin;                                  //@synthesize sideMargin=_sideMargin - In the implementation block
@property (nonatomic,readonly) double bottomBarHeight;                             //@synthesize bottomBarHeight=_bottomBarHeight - In the implementation block
@property (nonatomic,readonly) double playButtonHeight;                            //@synthesize playButtonHeight=_playButtonHeight - In the implementation block
@property (nonatomic,readonly) double playButtonFontSize;                          //@synthesize playButtonFontSize=_playButtonFontSize - In the implementation block
@property (nonatomic,readonly) double bottomLoadingIndicatorDiameter;              //@synthesize bottomLoadingIndicatorDiameter=_bottomLoadingIndicatorDiameter - In the implementation block
+(id)sharedInstance;
-(double)sideMargin;
-(double)bottomLoadingIndicatorDiameter;
-(double)playButtonFontSize;
-(double)playButtonHeight;
-(id)init;
-(double)bottomBarHeight;
-(double)verticalMargin;
@end

