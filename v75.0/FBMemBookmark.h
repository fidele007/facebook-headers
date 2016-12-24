/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWildeMemModelObject.h>
#import <Facebook/FBMenuItem.h>
#import <Facebook/FBQueriedEntityFieldsProtocol.h>
#import <Facebook/FBQueriedNodeFieldsProtocol.h>

@class NSString, NSNumber, NSURL;

@interface FBMemBookmark : FBWildeMemModelObject <FBMenuItem, FBQueriedEntityFieldsProtocol, FBQueriedNodeFieldsProtocol>

@property (assign,nonatomic) BOOL canDeleteOnEdit; 
@property (nonatomic,copy) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSNumber * badgeCount; 
@property (nonatomic,copy,readonly) NSString * bookmarkID; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * subtitleName; 
@property (nonatomic,copy,readonly) NSString * typeAttribute; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSURL * imageURL; 
@property (nonatomic,copy,readonly) NSString * highlightType; 
-(NSString *)highlightType;
-(void)setCanDeleteOnEdit:(BOOL)arg1 ;
-(id)sectionIDForModuleMapping;
-(BOOL)canDeleteOnEdit;
-(id)bookmarkTitle;
-(NSString *)subtitleName;
-(NSURL *)url;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)displayName;
-(NSString *)bookmarkID;
-(NSURL *)imageURL;
-(NSString *)typeAttribute;
-(id)sectionID;
-(void)setBadgeCount:(NSNumber *)arg1 ;
-(NSNumber *)badgeCount;
@end

