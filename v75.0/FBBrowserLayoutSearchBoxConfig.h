/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface FBBrowserLayoutSearchBoxConfig : NSObject <NSCopying> {

	unsigned long long _subtype;
	UIColor* _tappableSearchBox_normalFill;
	UIColor* _tappableSearchBox_pressedFill;
	UIColor* _tappableSearchBox_tint;
	UIColor* _tappableSearchBox_accessoryTint;
	BOOL _tappableSearchBox_hasRightAccessory;
	UIColor* _nontappableSearchBox_fill;
	UIColor* _nontappableSearchBox_tint;
	UIColor* _nontappableSearchBox_accessoryTint;
	BOOL _nontappableSearchBox_hasRightAccessory;

}
+(id)tappableSearchBoxWithNormalFill:(id)arg1 pressedFill:(id)arg2 tint:(id)arg3 accessoryTint:(id)arg4 hasRightAccessory:(BOOL)arg5 ;
+(id)nontappableSearchBoxWithFill:(id)arg1 tint:(id)arg2 accessoryTint:(id)arg3 hasRightAccessory:(BOOL)arg4 ;
-(void)matchTappableSearchBox:(/*^block*/id)arg1 nontappableSearchBox:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
