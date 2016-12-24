/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface FBProfileItem : NSObject {

	NSString* _name;
	UIImage* _profilePicture;

}

@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) UIImage * profilePicture;              //@synthesize profilePicture=_profilePicture - In the implementation block
-(UIImage *)profilePicture;
-(void)setProfilePicture:(UIImage *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end
