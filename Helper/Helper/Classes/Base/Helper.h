//
//  Helper.h
//  Helper
//
//  Created by Dharmesh on 14/02/16.
//  Copyright © 2016 Dharmesh. All rights reserved.
//

#ifndef Helper_h
#define Helper_h

#ifdef DEBUG
#define DLog(format, ...) NSLog((@"%@:%d -> " format), [[[NSString alloc] initWithFormat:@"%s",__FILE__] lastPathComponent], __LINE__, ##__VA_ARGS__)
#else
#define DLog(FORMAT, ...) nil
#endif

#endif /* Helper_h */
