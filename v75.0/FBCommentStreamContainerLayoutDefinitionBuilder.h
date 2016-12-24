/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class UIImage, UIColor;

@interface FBCommentStreamContainerLayoutDefinitionBuilder : NSObject {

	UIImage* _cardHeaderBackground;
	UIImage* _cardMiddleBackground;
	UIImage* _cardFooterBackground;
	UIColor* _backgroundColor;
	UIEdgeInsets _gutterInsets;
	UIEdgeInsets _contentInsets;
	unsigned long long _theme;
	unsigned long long _cellSeparatorStyle;
	UIEdgeInsets _cellSeparatorInsets;

}
+(id)commentStreamContainerLayoutDefinitionFromExistingCommentStreamContainerLayoutDefinition:(id)arg1 ;
+(id)commentStreamContainerLayoutDefinition;
-(id)withBackgroundColor:(id)arg1 ;
-(id)withTheme:(unsigned long long)arg1 ;
-(id)withCellSeparatorStyle:(unsigned long long)arg1 ;
-(id)withCardHeaderBackground:(id)arg1 ;
-(id)withCardMiddleBackground:(id)arg1 ;
-(id)withCardFooterBackground:(id)arg1 ;
-(id)withGutterInsets:(UIEdgeInsets)arg1 ;
-(id)withContentInsets:(UIEdgeInsets)arg1 ;
-(id)withCellSeparatorInsets:(UIEdgeInsets)arg1 ;
-(id)build;
@end
