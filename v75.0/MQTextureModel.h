/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MQDataModel.h>
#import <Facebook/MSQFileResourceReferrer.h>
#import <Facebook/MQDataTextureModelProtocol.h>

@class NSData, NSString, MSQModelUndoablePrimitive, MSQModelDocumentContext, NSArray;

@interface MQTextureModel : MQDataModel <MSQFileResourceReferrer, MQDataTextureModelProtocol> {

	MSQModelUndoablePrimitive* _fileNameProperty;
	MSQModelUndoablePrimitive* _sourcePathProperty;
	MSQModelUndoablePrimitive* _installIDProperty;
	MSQModelUndoablePrimitive* _dataProperty;
	BOOL _dataSynchronized;
	BOOL _fileHashDirty;
	NSString* _fileHashCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long undoableState; 
@property (nonatomic,readonly) MSQModelDocumentContext * context; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) long long numChildren; 
@property (nonatomic,copy,readonly) NSArray * children; 
@property (assign,nonatomic,__weak) id<MQDataModelProtocol> parent; 
@property (nonatomic,retain) id<MQFileControllerProtocol> fileController; 
@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,readonly) id<MQDocumentModelProtocol> documentModel; 
@property (nonatomic,copy) NSString * fileName; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,copy) NSString * sourcePath; 
@property (nonatomic,copy) NSString * installID; 
@property (nonatomic,copy,readonly) NSString * fileHash; 
-(void)addAttributes:(id)arg1 options:(id)arg2 ;
-(void)parseAttributes:(id)arg1 options:(id)arg2 ;
-(void)didMoveToParent;
-(id)serialize:(id)arg1 options:(id)arg2 ;
-(void)parse:(id)arg1 relations:(id)arg2 fileController:(id)arg3 options:(id)arg4 ;
-(id)serializableChildren;
-(void)addObjectReferencesToSet:(id)arg1 ;
-(void)synchronizeResourcesUsingFileController:(id)arg1 ;
-(void)writeResourcesUsingFileController:(id)arg1 ;
-(void)addResourceFileNames:(id)arg1 ;
-(BOOL)convertTo:(id)arg1 withTempFileController:(id)arg2 ;
-(BOOL)_convertToPvrWithBaseName:(id)arg1 commandArguments:(id)arg2 tempFileController:(id)arg3 ;
-(BOOL)_convertToEtc2WithBaseName:(id)arg1 commandArguments:(id)arg2 pot:(long long)arg3 tempFileController:(id)arg4 ;
-(NSString *)installID;
-(void)setInstallID:(NSString *)arg1 ;
-(void)_fileNameDidChange;
-(void)_fileDataDidChange;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)tagName;
-(NSString *)fileHash;
-(void)setSourcePath:(NSString *)arg1 ;
-(NSString *)sourcePath;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end

