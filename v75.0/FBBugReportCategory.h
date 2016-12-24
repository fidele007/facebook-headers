/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface FBBugReportCategory : NSObject {

	NSString* _name;
	NSString* _categoryID;
	UIImage* _image;

}

@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * categoryID;              //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,retain) UIImage * image;                  //@synthesize image=_image - In the implementation block
-(id)initWithName:(id)arg1 categoryID:(id)arg2 ;
-(id)initWithName:(id)arg1 categoryID:(id)arg2 image:(id)arg3 ;
-(void)setCategoryID:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(UIImage *)image;
-(NSString *)categoryID;
@end
