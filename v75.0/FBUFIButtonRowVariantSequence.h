/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBUFIButtonRowVariantSequence.h>

@protocol FBUFIButtonRowVariantSequence <NSObject>
@required
-(id)nextVariant;

@end


@class FBUFITheme, NSValue, NSString;

@interface FBUFIButtonRowVariantSequence : NSObject <FBUFIButtonRowVariantSequence> {

	vector<FBUFIButtonRowItem, std::__1::allocator<FBUFIButtonRowItem> >* _items;
	FBUFITheme* _theme;
	NSValue* _buttonEdgeInsetsOverride;
	NSValue* _buttonTapEdgeInsetsOverride;
	NSValue* _titleInsetsOverride;
	unsigned long long _ct;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)nextVariant;
-(id)initWithItems:(const vector<FBUFIButtonRowItem, std::__1::allocator<FBUFIButtonRowItem> >*)arg1 theme:(id)arg2 buttonEdgeInsetsOverride:(id)arg3 buttonTapEdgeInsetsOverride:(id)arg4 titleInsetsOverride:(id)arg5 ;
@end

