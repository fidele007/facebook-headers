/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBScenePathProviding.h>

@class FBScenePath, NSString;

@interface FBMutableScenePathProvider : NSObject <FBScenePathProviding> {

	FBScenePath* _scenePath;

}

@property (nonatomic,copy) FBScenePath * scenePath;                 //@synthesize scenePath=_scenePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBScenePath *)scenePath;
-(void)setScenePath:(FBScenePath *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

