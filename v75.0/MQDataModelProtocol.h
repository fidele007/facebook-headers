/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MQDataModelProtocol <NSObject,MSQModelDocumentNodeProtocol,MQDataModelExports,MQDataModelPersistence,MQDataModelDebug,MSQModelUndoable,MQEventDispatcherProtocol,MQDataModelLinkedObjectProtocol>
@property (assign,nonatomic,__weak) id<MQDataModelProtocol> parent; 
@property (nonatomic,retain) id<MQFileControllerProtocol> fileController; 
@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,readonly) id<MQDocumentModelProtocol> documentModel; 
@required
-(void)deselect;
-(id)collectSubtreesObjectsPassingTest:(/*^block*/id)arg1;
-(id)collectObjectsPassingTest:(/*^block*/id)arg1;
-(id)selectedSubtreeObjects;
-(id)getChildByIdentifier:(id)arg1;
-(id)findChildByIdentifier:(id)arg1;
-(void)sendChangeEvent;
-(void)willMoveToParent:(id)arg1;
-(void)didMoveToParent;
-(void)enumerateTreeUsingBlock:(/*^block*/id)arg1;
-(id<MQFileControllerProtocol>)fileController;
-(void)setFileController:(id)arg1;
-(id<MQDocumentModelProtocol>)documentModel;
-(BOOL)containsSelectedObjects;
-(void)select;
-(void)setSelected:(BOOL)arg1;
-(BOOL)selected;
-(id)selectedObjects;
-(BOOL)containsObjectPassingTest:(/*^block*/id)arg1;
-(id<MQDataModelProtocol>)parent;
-(void)setParent:(id)arg1;

@end
