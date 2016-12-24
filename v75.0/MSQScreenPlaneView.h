/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MQSceneObjectView.h>

@class MQEventHandler, SCNNode, SCNMaterial, MSQScreenPlaneModel;

@interface MSQScreenPlaneView : MQSceneObjectView {

	MQEventHandler* onChangeHandler;
	MQEventHandler* onMaterialChangeHandler;
	SCNNode* planeNode;
	SCNMaterial* planeMaterial;
	MSQScreenPlaneModel* _model;

}

@property (assign,nonatomic,__weak) MSQScreenPlaneModel * model;              //@synthesize model=_model - In the implementation block
-(id)initWithScreenPlaneModel:(id)arg1 ;
-(void)onEnterFrame:(double)arg1 ;
-(void)onChange:(id)arg1 ;
-(void)initScene;
-(void)destroyScene;
-(id)initWithSceneObjectModel:(id)arg1 ;
-(void)updateRenderingOrder:(long long)arg1 ;
-(void)unbindTransform:(id)arg1 ;
-(void)bindTransform:(id)arg1 ;
-(void)onTransformChange:(id)arg1 ;
-(void)onMaterialChange:(id)arg1 ;
-(void)setUpAndAddPlane;
-(void)removePlane;
-(MSQScreenPlaneModel *)model;
-(void)setModel:(MSQScreenPlaneModel *)arg1 ;
-(void)destroy;
@end

