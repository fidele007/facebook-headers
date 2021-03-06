/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MQSceneObjectView.h>

@protocol MQSceneModelProtocol;
@interface MQSceneView : MQSceneObjectView {

	id<MQSceneModelProtocol> _model;

}

@property (assign,nonatomic,__weak) id<MQSceneModelProtocol> model;              //@synthesize model=_model - In the implementation block
-(id)initWithSceneModel:(id)arg1 ;
-(id)initWithSceneObjectModel:(id)arg1 ;
-(void)unbindTransform:(id)arg1 ;
-(void)bindTransform:(id)arg1 ;
-(void)onTransformChange:(id)arg1 ;
-(id<MQSceneModelProtocol>)model;
-(void)setModel:(id<MQSceneModelProtocol>)arg1 ;
@end

