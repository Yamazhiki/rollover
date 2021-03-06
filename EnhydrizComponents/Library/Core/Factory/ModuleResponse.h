//
// Created by 王斌 on 2019-01-22.
// Copyright (c) 2019 Yamazhiki. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ModuleResponse<__covariant T> : NSObject
@property(readonly) NSError *error;
@property(readonly) T object;

/**
 * 构造一个错误的Response
 * @param error 错误
 * @return ModuleResponse
 */
+ (instancetype)responseWithError:(NSError *)error;

/**
 * 构造一个包含指定对象的Response 无错误
 * @param object 对象
 * @return ModuleResponse
 */
+ (instancetype)responseWithObject:(id)object;

@end