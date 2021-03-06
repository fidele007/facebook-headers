/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBDrawableShapeProtocol;
@class NSString;

@interface FBDrawnShapeView : UIView {

	NSString* _name;
	id<FBDrawableShapeProtocol> _drawnShape;

}

@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) id<FBDrawableShapeProtocol> drawnShape;              //@synthesize drawnShape=_drawnShape - In the implementation block
+(Class)layerClass;
-(void)setDrawnShape:(id<FBDrawableShapeProtocol>)arg1 ;
-(id<FBDrawableShapeProtocol>)drawnShape;
-(id)viewNamed:(id)arg1 ;
-(void)_updateDrawnShape:(id)arg1 ;
-(void)setNeedsDisplay;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end

