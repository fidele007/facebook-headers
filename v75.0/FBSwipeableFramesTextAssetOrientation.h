/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBSwipeableFramesTextAssetOrientation : FBValueObject <NSCopying> {

	unsigned long long _horizontalAlignment;
	unsigned long long _verticalAlignment;
	double _horizontalMargin;
	double _verticalMargin;
	double _textBoxWidth;
	double _textBoxHeight;
	unsigned long long _horizontalAlignmentWithinTextBox;

}

@property (nonatomic,readonly) unsigned long long horizontalAlignment;                           //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (nonatomic,readonly) unsigned long long verticalAlignment;                             //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (nonatomic,readonly) double horizontalMargin;                                          //@synthesize horizontalMargin=_horizontalMargin - In the implementation block
@property (nonatomic,readonly) double verticalMargin;                                            //@synthesize verticalMargin=_verticalMargin - In the implementation block
@property (nonatomic,readonly) double textBoxWidth;                                              //@synthesize textBoxWidth=_textBoxWidth - In the implementation block
@property (nonatomic,readonly) double textBoxHeight;                                             //@synthesize textBoxHeight=_textBoxHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long horizontalAlignmentWithinTextBox;              //@synthesize horizontalAlignmentWithinTextBox=_horizontalAlignmentWithinTextBox - In the implementation block
-(double)horizontalMargin;
-(id)initWithHorizontalAlignment:(unsigned long long)arg1 verticalAlignment:(unsigned long long)arg2 horizontalMargin:(double)arg3 verticalMargin:(double)arg4 textBoxWidth:(double)arg5 textBoxHeight:(double)arg6 horizontalAlignmentWithinTextBox:(unsigned long long)arg7 ;
-(double)textBoxWidth;
-(double)textBoxHeight;
-(unsigned long long)horizontalAlignmentWithinTextBox;
-(unsigned long long)horizontalAlignment;
-(unsigned long long)verticalAlignment;
-(double)verticalMargin;
@end

