//
//  FacebookController.cpp
//  friendSmasher
//
//  Created by Ali Parr on 23/10/2013.
//
//

#include "ParseController.h"

namespace FriendSmasher
{
    namespace Game
    {
        void ParseController::Login(void (*callback)(bool))
        {
            [PFFacebookUtils initializeFacebook];
            
            NSArray *permissions = [[NSArray alloc] initWithObjects:
                                    @"email",
                                    @"publish_actions",
                                    nil];
             
            [PFFacebookUtils logInWithPermissions:permissions block:^(PFUser *user, NSError *error) {
             
            if (!user) {
                NSLog(@"Uh oh. The user cancelled the Facebook login.");
                callback(false);
             } else {
                NSLog(@"User logged in.");
                callback(true);
             }
            }];
        }
        
        void ParseController::GetProperty(NSString* property, void (*callback)(NSString*, u32))
        {
            PFUser *currentUser = [PFUser currentUser];
            u32 uValue = [[currentUser objectForKey:property] intValue];
            callback(property, uValue);
        }
        
        void ParseController::SetProperty(NSString* property, u32 uValue, void (*callback)(NSString*, bool))
        {
            NSNumber *val = [NSNumber numberWithInt:uValue];
            
            [[PFUser currentUser] setObject:val forKey:property];
            [[PFUser currentUser] saveInBackgroundWithBlock:^(BOOL succeeded, NSError *error) {
                callback(property, succeeded);
            }];
        }
    }
}

