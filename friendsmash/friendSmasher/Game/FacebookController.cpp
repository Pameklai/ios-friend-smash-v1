//
//  FacebookController.cpp
//  friendSmasher
//
//  Created by Ali Parr on 23/10/2013.
//
//

#include "FacebookController.h"

#include <Social/Social.h>
#include <Social/SLComposeViewController.h>
#include "SBJson.h"

namespace FriendSmasher
{
    namespace Game
    {
        
        static const u64 kuFBAppID = 480369938658210;
        
        NSString* FacebookController::ms_nsstrFirstName = NULL;
        u64 FacebookController::ms_uPlayerFBID(0);
        bool FacebookController::ms_bIsLoggedIn = false;
        
        
        void FacebookController::CreateNewSession()
        {
        }
        
        bool FacebookController::IsLoggedIn()
        {
            return ms_bIsLoggedIn;
        }
        
        void FacebookController::OpenSession(void (*callback)(bool))
        {
        }
        
        void FacebookController::Login(void (*callback)(bool))
        {
        }
        
        void FacebookController::Logout(void (*callback)(bool))
        {
        }
        
        void FacebookController::FetchUserDetails(void (*callback)(bool))
        {
        }
        
        void FacebookController::ProcessIncomingURL(NSURL* targetURL, void (*callback)(NSString *, NSString *))
        {
        }
        
        void FacebookController::ProcessIncomingRequest(NSURL* targetURL, void (*callback)(NSString *, NSString *))
        {
        }
        
        void FacebookController::ProcessIncomingFeed(NSURL* targetURL, void (*callback)(NSString *, NSString *))
        {
        }
        
        void FacebookController::SendRequest(const int nScore)
        {
        }
        
        void FacebookController::SendFilteredRequest(const int nScore)
        {
        }
        
        void FacebookController::SendBrag(const int nScore)
        {
        }
        
        void FacebookController::SendScore(const int nScore)
        {
        }
        
        void FacebookController::SendAchievement(eGameAchievements achievement)
        {
        }
        
        void FacebookController::GetScores()
        {
        }
        
        void FacebookController::SendOG(const u64 uFriendID)
        {
        }
        
        void FacebookController::RequestWritePermissions()
        {
        }
    }
}

