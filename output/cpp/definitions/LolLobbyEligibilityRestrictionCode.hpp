#ifndef SWAGGER_TYPES_LolLobbyEligibilityRestrictionCode_HPP
#define SWAGGER_TYPES_LolLobbyEligibilityRestrictionCode_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyEligibilityRestrictionCode {
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

  inline void to_json(nlohmann::json& j, const LolLobbyEligibilityRestrictionCode& v) {
    switch(v) {
      case LolLobbyEligibilityRestrictionCode::PlayerMinLevelRestriction:
        j = "PlayerMinLevelRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerInGameRestriction:
        j = "PlayerInGameRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::QueueUnsupported:
        j = "QueueUnsupported";
      break;
      case LolLobbyEligibilityRestrictionCode::TeamDivisionRestriction:
        j = "TeamDivisionRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::UnknownRestriction:
        j = "UnknownRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerMinorRestriction:
        j = "PlayerMinorRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerLevelRestriction:
        j = "PlayerLevelRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::QueueDisabled:
        j = "QueueDisabled";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerBannedRestriction:
        j = "PlayerBannedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerMaxLevelRestriction:
        j = "PlayerMaxLevelRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerDodgeRestriction:
        j = "PlayerDodgeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerLeaverBustedRestriction:
        j = "PlayerLeaverBustedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerLeaverTaintedWarningRestriction:
        j = "PlayerLeaverTaintedWarningRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PrerequisiteQueuesNotPlayedRestriction:
        j = "PrerequisiteQueuesNotPlayedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerBingeRestriction:
        j = "PlayerBingeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerAvailableChampionRestriction:
        j = "PlayerAvailableChampionRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerRankedSuspensionRestriction:
        j = "PlayerRankedSuspensionRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::TeamHighMMRMaxSizeRestriction:
        j = "TeamHighMMRMaxSizeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::TeamMaxSizeRestriction:
        j = "TeamMaxSizeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerTimedRestriction:
        j = "PlayerTimedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::TeamMinSizeRestriction:
        j = "TeamMinSizeRestriction";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyEligibilityRestrictionCode& v) {
    const auto& s = j.get<std::string>();
    if(s == "PlayerMinLevelRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerMinLevelRestriction;
      return;
    }
    if(s == "PlayerInGameRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerInGameRestriction;
      return;
    }
    if(s == "QueueUnsupported"){
      v = LolLobbyEligibilityRestrictionCode::QueueUnsupported;
      return;
    }
    if(s == "TeamDivisionRestriction"){
      v = LolLobbyEligibilityRestrictionCode::TeamDivisionRestriction;
      return;
    }
    if(s == "UnknownRestriction"){
      v = LolLobbyEligibilityRestrictionCode::UnknownRestriction;
      return;
    }
    if(s == "PlayerMinorRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerMinorRestriction;
      return;
    }
    if(s == "PlayerLevelRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerLevelRestriction;
      return;
    }
    if(s == "QueueDisabled"){
      v = LolLobbyEligibilityRestrictionCode::QueueDisabled;
      return;
    }
    if(s == "PlayerBannedRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerBannedRestriction;
      return;
    }
    if(s == "PlayerMaxLevelRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerMaxLevelRestriction;
      return;
    }
    if(s == "PlayerDodgeRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerDodgeRestriction;
      return;
    }
    if(s == "PlayerLeaverBustedRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerLeaverBustedRestriction;
      return;
    }
    if(s == "PlayerLeaverTaintedWarningRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerLeaverTaintedWarningRestriction;
      return;
    }
    if(s == "PrerequisiteQueuesNotPlayedRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PrerequisiteQueuesNotPlayedRestriction;
      return;
    }
    if(s == "PlayerBingeRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerBingeRestriction;
      return;
    }
    if(s == "PlayerAvailableChampionRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerAvailableChampionRestriction;
      return;
    }
    if(s == "PlayerRankedSuspensionRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerRankedSuspensionRestriction;
      return;
    }
    if(s == "TeamHighMMRMaxSizeRestriction"){
      v = LolLobbyEligibilityRestrictionCode::TeamHighMMRMaxSizeRestriction;
      return;
    }
    if(s == "TeamMaxSizeRestriction"){
      v = LolLobbyEligibilityRestrictionCode::TeamMaxSizeRestriction;
      return;
    }
    if(s == "PlayerTimedRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerTimedRestriction;
      return;
    }
    if(s == "TeamMinSizeRestriction"){
      v = LolLobbyEligibilityRestrictionCode::TeamMinSizeRestriction;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyEligibilityRestrictionCode_HPP
