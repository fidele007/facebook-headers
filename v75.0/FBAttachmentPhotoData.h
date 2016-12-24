/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, FBTextWithEntitiesInputMessage, NSArray;

@interface FBAttachmentPhotoData : FBGraphQLInput {

	NSString* _graphQLID;
	FBTextWithEntitiesInputMessage* _message;
	NSArray* _textOverlay;
	NSArray* _stickers;
	NSArray* _tags;
	NSString* _cropState;
	NSString* _filterState;
	NSString* _rotationState;
	NSString* _collageState;
	NSString* _doodlesState;
	NSString* _filterName;
	NSString* _pairedVideoId;

}

@property (nonatomic,copy) NSString * graphQLID;                                  //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy) FBTextWithEntitiesInputMessage * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSArray * textOverlay;                                 //@synthesize textOverlay=_textOverlay - In the implementation block
@property (nonatomic,copy) NSArray * stickers;                                    //@synthesize stickers=_stickers - In the implementation block
@property (nonatomic,copy) NSArray * tags;                                        //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy) NSString * cropState;                                  //@synthesize cropState=_cropState - In the implementation block
@property (nonatomic,copy) NSString * filterState;                                //@synthesize filterState=_filterState - In the implementation block
@property (nonatomic,copy) NSString * rotationState;                              //@synthesize rotationState=_rotationState - In the implementation block
@property (nonatomic,copy) NSString * collageState;                               //@synthesize collageState=_collageState - In the implementation block
@property (nonatomic,copy) NSString * doodlesState;                               //@synthesize doodlesState=_doodlesState - In the implementation block
@property (nonatomic,copy) NSString * filterName;                                 //@synthesize filterName=_filterName - In the implementation block
@property (nonatomic,copy) NSString * pairedVideoId;                              //@synthesize pairedVideoId=_pairedVideoId - In the implementation block
-(void)setGraphQLID:(NSString *)arg1 ;
-(NSString *)graphQLID;
-(NSArray *)stickers;
-(NSString *)filterName;
-(void)setStickers:(NSArray *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSArray *)textOverlay;
-(void)setTextOverlay:(NSArray *)arg1 ;
-(NSString *)cropState;
-(void)setCropState:(NSString *)arg1 ;
-(void)setFilterState:(NSString *)arg1 ;
-(NSString *)collageState;
-(void)setCollageState:(NSString *)arg1 ;
-(NSString *)doodlesState;
-(void)setDoodlesState:(NSString *)arg1 ;
-(NSString *)pairedVideoId;
-(void)setPairedVideoId:(NSString *)arg1 ;
-(NSString *)filterState;
-(NSArray *)tags;
-(FBTextWithEntitiesInputMessage *)message;
-(NSString *)rotationState;
-(void)setMessage:(FBTextWithEntitiesInputMessage *)arg1 ;
-(void)setRotationState:(NSString *)arg1 ;
-(void)setFilterName:(NSString *)arg1 ;
-(void)setTags:(NSArray *)arg1 ;
@end

