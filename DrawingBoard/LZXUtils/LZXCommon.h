//
//  NSObject_LZXCommon.h
//  lexue
//
//  Created by songjie on 13-4-1.
//  Copyright (c) 2013年 lezhixing. All rights reserved.
//

#define kMainScreenWidth        [[UIScreen mainScreen] bounds].size.width
#define kMainScreenHeight       [[UIScreen mainScreen] bounds].size.height
#define IOS_VERSION                       [[[UIDevice currentDevice] systemVersion] floatValue]

#ifndef LZXObjectSingleton_h
#define LZXObjectSingleton_h

#define GZOBJECT_SINGLETON_BOILERPLATE(_object_name_, _shared_obj_name_) \
+ (id)_shared_obj_name_{ \
static _object_name_ *z##_shared_obj_name_; \
static dispatch_once_t done; \
dispatch_once(&done, ^{ \
z##_shared_obj_name_ = [[_object_name_ alloc] init]; \
}); \
return z##_shared_obj_name_; \
}

#define teacher [NSString stringWithFormat:@"0"]//老师
#define student [NSString stringWithFormat:@"1"]//学生
#define USERTYPE [[[[NSBundle mainBundle] infoDictionary] objectForKey:@"UserType"] intValue]
#endif
