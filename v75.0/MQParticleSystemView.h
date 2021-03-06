/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MQSceneObjectView.h>

@class MQEventHandler, SCNNode, SCNParticleSystem, MQParticleSystemModel;

@interface MQParticleSystemView : MQSceneObjectView {

	MQEventHandler* _onChangeHandler;
	SCNNode* particlesNode;
	SCNParticleSystem* particleSystem;
	MQParticleSystemModel* _model;

}

@property (assign,nonatomic,__weak) MQParticleSystemModel * model;              //@synthesize model=_model - In the implementation block
-(void)onChange:(id)arg1 ;
-(void)initScene;
-(void)destroyScene;
-(void)updateParticleSystem:(id)arg1 fromModel:(id)arg2 ;
-(void)updateRenderingOrder:(long long)arg1 ;
-(MQParticleSystemModel *)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(MQParticleSystemModel *)arg1 ;
@end

