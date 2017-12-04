#ifndef SWAGGER_TYPES_LolLobbyEligibilityRestrictionCode_HPP
#define SWAGGER_TYPES_LolLobbyEligibilityRestrictionCode_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyEligibilityRestrictionCode {
    // 
    PlayerAvailableChampionRestriction = 5,
    // 
    PlayerBannedRestriction = 4,
    // 
    PlayerBingeRestriction = 9,
    // 
    PlayerDodgeRestriction = 10,
    // 
    PlayerInGameRestriction = 11,
    // 
    PlayerLeaverBustedRestriction = 12,
    // 
    PlayerLeaverTaintedWarningRestriction = 13,
    // 
    PlayerLevelRestriction = 2,
    // 
    PlayerMaxLevelRestriction = 14,
    // 
    PlayerMinLevelRestriction = 15,
    // 
    PlayerMinorRestriction = 16,
    // 
    PlayerRankedSuspensionRestriction = 17,
    // 
    PlayerTimedRestriction = 3,
    // 
    PrerequisiteQueuesNotPlayedRestriction = 19,
    // 
    QueueDisabled = 0,
    // 
    QueueUnsupported = 1,
    // 
    TeamDivisionRestriction = 6,
    // 
    TeamHighMMRMaxSizeRestriction = 18,
    // 
    TeamMaxSizeRestriction = 7,
    // 
    TeamMinSizeRestriction = 8,
    // 
    UnknownRestriction = 20,
  };

  void to_json(nlohmann::json& j, const LolLobbyEligibilityRestrictionCode& v) {
    switch(v) {
      case LolLobbyEligibilityRestrictionCode::PlayerAvailableChampionRestriction:
        j = "PlayerAvailableChampionRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerBannedRestriction:
        j = "PlayerBannedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerBingeRestriction:
        j = "PlayerBingeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerDodgeRestriction:
        j = "PlayerDodgeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerInGameRestriction:
        j = "PlayerInGameRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerLeaverBustedRestriction:
        j = "PlayerLeaverBustedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerLeaverTaintedWarningRestriction:
        j = "PlayerLeaverTaintedWarningRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerLevelRestriction:
        j = "PlayerLevelRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerMaxLevelRestriction:
        j = "PlayerMaxLevelRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerMinLevelRestriction:
        j = "PlayerMinLevelRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerMinorRestriction:
        j = "PlayerMinorRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerRankedSuspensionRestriction:
        j = "PlayerRankedSuspensionRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PlayerTimedRestriction:
        j = "PlayerTimedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::PrerequisiteQueuesNotPlayedRestriction:
        j = "PrerequisiteQueuesNotPlayedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::QueueDisabled:
        j = "QueueDisabled";
      break;
      case LolLobbyEligibilityRestrictionCode::QueueUnsupported:
        j = "QueueUnsupported";
      break;
      case LolLobbyEligibilityRestrictionCode::TeamDivisionRestriction:
        j = "TeamDivisionRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::TeamHighMMRMaxSizeRestriction:
        j = "TeamHighMMRMaxSizeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::TeamMaxSizeRestriction:
        j = "TeamMaxSizeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::TeamMinSizeRestriction:
        j = "TeamMinSizeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode::UnknownRestriction:
        j = "UnknownRestriction";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLobbyEligibilityRestrictionCode& v) {
    const auto s& = j.get<std::string>();
    if(s == "PlayerAvailableChampionRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerAvailableChampionRestriction;
      return;
    }
    if(s == "PlayerBannedRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerBannedRestriction;
      return;
    }
    if(s == "PlayerBingeRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerBingeRestriction;
      return;
    }
    if(s == "PlayerDodgeRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerDodgeRestriction;
      return;
    }
    if(s == "PlayerInGameRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerInGameRestriction;
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
    if(s == "PlayerLevelRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerLevelRestriction;
      return;
    }
    if(s == "PlayerMaxLevelRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerMaxLevelRestriction;
      return;
    }
    if(s == "PlayerMinLevelRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerMinLevelRestriction;
      return;
    }
    if(s == "PlayerMinorRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerMinorRestriction;
      return;
    }
    if(s == "PlayerRankedSuspensionRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerRankedSuspensionRestriction;
      return;
    }
    if(s == "PlayerTimedRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PlayerTimedRestriction;
      return;
    }
    if(s == "PrerequisiteQueuesNotPlayedRestriction"){
      v = LolLobbyEligibilityRestrictionCode::PrerequisiteQueuesNotPlayedRestriction;
      return;
    }
    if(s == "QueueDisabled"){
      v = LolLobbyEligibilityRestrictionCode::QueueDisabled;
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
    if(s == "TeamHighMMRMaxSizeRestriction"){
      v = LolLobbyEligibilityRestrictionCode::TeamHighMMRMaxSizeRestriction;
      return;
    }
    if(s == "TeamMaxSizeRestriction"){
      v = LolLobbyEligibilityRestrictionCode::TeamMaxSizeRestriction;
      return;
    }
    if(s == "TeamMinSizeRestriction"){
      v = LolLobbyEligibilityRestrictionCode::TeamMinSizeRestriction;
      return;
    }
    if(s == "UnknownRestriction"){
      v = LolLobbyEligibilityRestrictionCode::UnknownRestriction;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyEligibilityRestrictionCode_HPP
