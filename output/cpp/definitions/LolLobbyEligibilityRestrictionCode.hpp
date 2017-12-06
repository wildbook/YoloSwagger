#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyEligibilityRestrictionCode_t {
    TeamMaxSizeRestriction_E = 7,
    PlayerMinLevelRestriction_E = 15,
    QueueDisabled_E = 0,
    TeamHighMMRMaxSizeRestriction_E = 18,
    PlayerLevelRestriction_E = 2,
    PlayerMinorRestriction_E = 16,
    PrerequisiteQueuesNotPlayedRestriction_E = 19,
    PlayerAvailableChampionRestriction_E = 5,
    QueueUnsupported_E = 1,
    UnknownRestriction_E = 20,
    PlayerInGameRestriction_E = 11,
    PlayerBannedRestriction_E = 4,
    PlayerTimedRestriction_E = 3,
    TeamMinSizeRestriction_E = 8,
    PlayerLeaverTaintedWarningRestriction_E = 13,
    PlayerMaxLevelRestriction_E = 14,
    PlayerLeaverBustedRestriction_E = 12,
    TeamDivisionRestriction_E = 6,
    PlayerDodgeRestriction_E = 10,
    PlayerRankedSuspensionRestriction_E = 17,
    PlayerBingeRestriction_E = 9,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyEligibilityRestrictionCode_t& v) {
    switch(v) {
      case LolLobbyEligibilityRestrictionCode_t::TeamMaxSizeRestriction_E:
        j = "TeamMaxSizeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerMinLevelRestriction_E:
        j = "PlayerMinLevelRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::QueueDisabled_E:
        j = "QueueDisabled";
      break;
      case LolLobbyEligibilityRestrictionCode_t::TeamHighMMRMaxSizeRestriction_E:
        j = "TeamHighMMRMaxSizeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerLevelRestriction_E:
        j = "PlayerLevelRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerMinorRestriction_E:
        j = "PlayerMinorRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PrerequisiteQueuesNotPlayedRestriction_E:
        j = "PrerequisiteQueuesNotPlayedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerAvailableChampionRestriction_E:
        j = "PlayerAvailableChampionRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::QueueUnsupported_E:
        j = "QueueUnsupported";
      break;
      case LolLobbyEligibilityRestrictionCode_t::UnknownRestriction_E:
        j = "UnknownRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerInGameRestriction_E:
        j = "PlayerInGameRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerBannedRestriction_E:
        j = "PlayerBannedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerTimedRestriction_E:
        j = "PlayerTimedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::TeamMinSizeRestriction_E:
        j = "TeamMinSizeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerLeaverTaintedWarningRestriction_E:
        j = "PlayerLeaverTaintedWarningRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerMaxLevelRestriction_E:
        j = "PlayerMaxLevelRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerLeaverBustedRestriction_E:
        j = "PlayerLeaverBustedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::TeamDivisionRestriction_E:
        j = "TeamDivisionRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerDodgeRestriction_E:
        j = "PlayerDodgeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerRankedSuspensionRestriction_E:
        j = "PlayerRankedSuspensionRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerBingeRestriction_E:
        j = "PlayerBingeRestriction";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyEligibilityRestrictionCode_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "TeamMaxSizeRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::TeamMaxSizeRestriction_E;
      return;
    }
    if(s == "PlayerMinLevelRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerMinLevelRestriction_E;
      return;
    }
    if(s == "QueueDisabled"){
      v = LolLobbyEligibilityRestrictionCode_t::QueueDisabled_E;
      return;
    }
    if(s == "TeamHighMMRMaxSizeRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::TeamHighMMRMaxSizeRestriction_E;
      return;
    }
    if(s == "PlayerLevelRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerLevelRestriction_E;
      return;
    }
    if(s == "PlayerMinorRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerMinorRestriction_E;
      return;
    }
    if(s == "PrerequisiteQueuesNotPlayedRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PrerequisiteQueuesNotPlayedRestriction_E;
      return;
    }
    if(s == "PlayerAvailableChampionRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerAvailableChampionRestriction_E;
      return;
    }
    if(s == "QueueUnsupported"){
      v = LolLobbyEligibilityRestrictionCode_t::QueueUnsupported_E;
      return;
    }
    if(s == "UnknownRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::UnknownRestriction_E;
      return;
    }
    if(s == "PlayerInGameRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerInGameRestriction_E;
      return;
    }
    if(s == "PlayerBannedRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerBannedRestriction_E;
      return;
    }
    if(s == "PlayerTimedRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerTimedRestriction_E;
      return;
    }
    if(s == "TeamMinSizeRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::TeamMinSizeRestriction_E;
      return;
    }
    if(s == "PlayerLeaverTaintedWarningRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerLeaverTaintedWarningRestriction_E;
      return;
    }
    if(s == "PlayerMaxLevelRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerMaxLevelRestriction_E;
      return;
    }
    if(s == "PlayerLeaverBustedRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerLeaverBustedRestriction_E;
      return;
    }
    if(s == "TeamDivisionRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::TeamDivisionRestriction_E;
      return;
    }
    if(s == "PlayerDodgeRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerDodgeRestriction_E;
      return;
    }
    if(s == "PlayerRankedSuspensionRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerRankedSuspensionRestriction_E;
      return;
    }
    if(s == "PlayerBingeRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerBingeRestriction_E;
      return;
    }
  }
}
