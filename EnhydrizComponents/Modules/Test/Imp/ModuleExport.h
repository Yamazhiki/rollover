//
// Created by 王斌 on 2019-01-08.
// Copyright (c) 2019 Yamazhiki. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ModuleExportType.h"
#import "TestModuleType.h"


@interface ModuleExport : NSObject <ModuleExportType, TestModuleType>

@end
