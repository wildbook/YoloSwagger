#ifndef SWAGGER_TYPES_LolQueueEligibilityEligibilityRestrictionCode_HPP
#define SWAGGER_TYPES_LolQueueEligibilityEligibilityRestrictionCode_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolQueueEligibilityEligibilityRestrictionCode {
    // 
    PlayerMinLevelRestriction = 15,
    // 
    PlayerInGameRestriction = 11,
    // 
    QueueUnsupported = 1,
    // 
    TeamDivisionRestriction = 6,
    // 
    UnknownRestriction = 20,
    // 
    PlayerMinorRestriction = 16,
    // 
    PlayerLevelRestriction = 2,
    // 
    QueueDisabled = 0,
    // 
    PlayerBannedRestriction = 4,
    // 
    PlayerMaxLevelRestriction = 14,
    // 
    PlayerDodgeRestriction = 10,
    // 
    PlayerLeaverBustedRestriction = 12,
    // 
    PlayerLeaverTaintedWarningRestriction = 13,
    // 
    PrerequisiteQueuesNotPlayedRestriction = 19,
    // 
    PlayerBingeRestriction = 9,
    // 
    PlayerAvailableChampionRestriction = 5,
    // 
    PlayerRankedSuspensionRestriction = 17,
    // 
    TeamHighMMRMaxSizeRestriction = 18,
    // 
    TeamMaxSizeRestriction = 7,
    // 
    PlayerTimedRestriction = 3,
    // 
    TeamMinSizeRestriction = 8,
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityEligibilityRestrictionCode& v) {
    switch(v) {
      case LolQueueEligibilityEligibilityRestrictionCode::PlayerMinLevelRestriction:
        j = "PlayerMinLevelRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::PlayerInGameRestriction:
        j = "PlayerInGameRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::QueueUnsupported:
        j = "QueueUnsupported";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::TeamDivisionRestriction:
        j = "TeamDivisionRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::UnknownRestriction:
        j = "UnknownRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::PlayerMinorRestriction:
        j = "PlayerMinorRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::PlayerLevelRestriction:
        j = "PlayerLevelRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::QueueDisabled:
        j = "QueueDisabled";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::PlayerBannedRestriction:
        j = "PlayerBannedRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::PlayerMaxLevelRestriction:
        j = "PlayerMaxLevelRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::PlayerDodgeRestriction:
        j = "PlayerDodgeRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::PlayerLeaverBustedRestriction:
        j = "PlayerLeaverBustedRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::PlayerLeaverTaintedWarningRestriction:
        j = "PlayerLeaverTaintedWarningRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::PrerequisiteQueuesNotPlayedRestriction:
        j = "PrerequisiteQueuesNotPlayedRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::PlayerBingeRestriction:
        j = "PlayerBingeRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::PlayerAvailableChampionRestriction:
        j = "PlayerAvailableChampionRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::PlayerRankedSuspensionRestriction:
        j = "PlayerRankedSuspensionRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::TeamHighMMRMaxSizeRestriction:
        j = "TeamHighMMRMaxSizeRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::TeamMaxSizeRestriction:
        j = "TeamMaxSizeRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::PlayerTimedRestriction:
        j = "PlayerTimedRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode::TeamMinSizeRestriction:
        j = "TeamMinSizeRestriction";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityEligibilityRestrictionCode& v) {
    const auto& s = j.get<std::string>();
    if(s == "PlayerMinLevelRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerMinLevelRestriction;
      return;
    }
    if(s == "PlayerInGameRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerInGameRestriction;
      return;
    }
    if(s == "QueueUnsupported"){
      v = LolQueueEligibilityEligibilityRestrictionCode::QueueUnsupported;
      return;
    }
    if(s == "TeamDivisionRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::TeamDivisionRestriction;
      return;
    }
    if(s == "UnknownRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::UnknownRestriction;
      return;
    }
    if(s == "PlayerMinorRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerMinorRestriction;
      return;
    }
    if(s == "PlayerLevelRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerLevelRestriction;
      return;
    }
    if(s == "QueueDisabled"){
      v = LolQueueEligibilityEligibilityRestrictionCode::QueueDisabled;
      return;
    }
    if(s == "PlayerBannedRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerBannedRestriction;
      return;
    }
    if(s == "PlayerMaxLevelRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerMaxLevelRestriction;
      return;
    }
    if(s == "PlayerDodgeRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerDodgeRestriction;
      return;
    }
    if(s == "PlayerLeaverBustedRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerLeaverBustedRestriction;
      return;
    }
    if(s == "PlayerLeaverTaintedWarningRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerLeaverTaintedWarningRestriction;
      return;
    }
    if(s == "PrerequisiteQueuesNotPlayedRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::PrerequisiteQueuesNotPlayedRestriction;
      return;
    }
    if(s == "PlayerBingeRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerBingeRestriction;
      return;
    }
    if(s == "PlayerAvailableChampionRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerAvailableChampionRestriction;
      return;
    }
    if(s == "PlayerRankedSuspensionRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerRankedSuspensionRestriction;
      return;
    }
    if(s == "TeamHighMMRMaxSizeRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::TeamHighMMRMaxSizeRestriction;
      return;
    }
    if(s == "TeamMaxSizeRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::TeamMaxSizeRestriction;
      return;
    }
    if(s == "PlayerTimedRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::PlayerTimedRestriction;
      return;
    }
    if(s == "TeamMinSizeRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode::TeamMinSizeRestriction;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityEligibilityRestrictionCode_HPP
