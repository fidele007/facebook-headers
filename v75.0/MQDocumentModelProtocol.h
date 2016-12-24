/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSData, MSQPostProcessorModel;


@protocol MQDocumentModelProtocol <MQDataModelProtocol>
@property (nonatomic,copy,readonly) NSString * documentId; 
@property (assign,nonatomic) BOOL isRuntime; 
@property (nonatomic,retain) NSData * previewImageData; 
@property (assign,nonatomic) unsigned long long minimumSupportedNumberOfFaces; 
@property (assign,nonatomic) unsigned long long maximumSupportedNumberOfFaces; 
@property (assign,nonatomic) BOOL hidesSceneWhenNoFaces; 
@property (assign,nonatomic) BOOL smoothSkin; 
@property (nonatomic,copy) NSString * previewImageName; 
@property (nonatomic,readonly) id<MQTexturesModelProtocol> textures; 
@property (nonatomic,readonly) id<MQMaterialsModelProtocol> materials; 
@property (nonatomic,readonly) id<MSQPrefabsModelProtocol> prefabs; 
@property (nonatomic,readonly) id<MQSceneModelProtocol> scene; 
@property (nonatomic,readonly) id<MQScriptModelProtocol> script; 
@property (nonatomic,readonly) MSQPostProcessorModel * postProcessor; 
@property (nonatomic,copy,readonly) NSString * trackerType; 
@property (nonatomic,readonly) long long fileVersion; 
@property (nonatomic,readonly) long long creatorVersion; 
@property (nonatomic,readonly) long long writerVersion; 
@property (nonatomic,readonly) BOOL needsFaceTracker; 
@required
-(void)setIsRuntime:(BOOL)arg1;
-(id)generateDocumentID;
-(BOOL)convertAssetsTo:(id)arg1;
-(id)textureWithIdentifier:(id)arg1;
-(id)materialWithIdentifier:(id)arg1;
-(id)resourceFileNames;
-(void)synchronizeResourcesUsingFileController:(id)arg1;
-(void)writeResourcesUsingFileController:(id)arg1;
-(NSString *)documentId;
-(BOOL)isRuntime;
-(NSData *)previewImageData;
-(void)setPreviewImageData:(id)arg1;
-(unsigned long long)minimumSupportedNumberOfFaces;
-(void)setMinimumSupportedNumberOfFaces:(unsigned long long)arg1;
-(unsigned long long)maximumSupportedNumberOfFaces;
-(void)setMaximumSupportedNumberOfFaces:(unsigned long long)arg1;
-(BOOL)hidesSceneWhenNoFaces;
-(void)setHidesSceneWhenNoFaces:(BOOL)arg1;
-(BOOL)smoothSkin;
-(void)setSmoothSkin:(BOOL)arg1;
-(NSString *)previewImageName;
-(void)setPreviewImageName:(id)arg1;
-(id<MSQPrefabsModelProtocol>)prefabs;
-(MSQPostProcessorModel *)postProcessor;
-(NSString *)trackerType;
-(long long)creatorVersion;
-(long long)writerVersion;
-(BOOL)needsFaceTracker;
-(id<MQScriptModelProtocol>)script;
-(id<MQTexturesModelProtocol>)textures;
-(long long)fileVersion;
-(id<MQSceneModelProtocol>)scene;
-(id<MQMaterialsModelProtocol>)materials;

@end

