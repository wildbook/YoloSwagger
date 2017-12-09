#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyEligibilityRestrictionCode_t {
    TeamHighMMRMaxSizeRestriction_E = 18,
    TeamMaxSizeRestriction_E = 7,
    PrerequisiteQueuesNotPlayedRestriction_E = 19,
    PlayerMinorRestriction_E = 16,
    PlayerInGameRestriction_E = 11,
    PlayerAvailableChampionRestriction_E = 5,
    PlayerLeaverTaintedWarningRestriction_E = 13,
    PlayerBannedRestriction_E = 4,
    PlayerMaxLevelRestriction_E = 14,
    PlayerBingeRestriction_E = 9,
    PlayerDodgeRestriction_E = 10,
    PlayerMinLevelRestriction_E = 15,
    PlayerTimedRestriction_E = 3,
    PlayerLeaverBustedRestriction_E = 12,
    QueueDisabled_E = 0,
    PlayerLevelRestriction_E = 2,
    QueueUnsupported_E = 1,
    PlayerRankedSuspensionRestriction_E = 17,
    UnknownRestriction_E = 20,
    TeamDivisionRestriction_E = 6,
    TeamMinSizeRestriction_E = 8,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyEligibilityRestrictionCode_t& v) {
    switch(v) {
      case LolLobbyEligibilityRestrictionCode_t::TeamHighMMRMaxSizeRestriction_E:
        j = "TeamHighMMRMaxSizeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::TeamMaxSizeRestriction_E:
        j = "TeamMaxSizeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PrerequisiteQueuesNotPlayedRestriction_E:
        j = "PrerequisiteQueuesNotPlayedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerMinorRestriction_E:
        j = "PlayerMinorRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerInGameRestriction_E:
        j = "PlayerInGameRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerAvailableChampionRestriction_E:
        j = "PlayerAvailableChampionRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerLeaverTaintedWarningRestriction_E:
        j = "PlayerLeaverTaintedWarningRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerBannedRestriction_E:
        j = "PlayerBannedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerMaxLevelRestriction_E:
        j = "PlayerMaxLevelRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerBingeRestriction_E:
        j = "PlayerBingeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerDodgeRestriction_E:
        j = "PlayerDodgeRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerMinLevelRestriction_E:
        j = "PlayerMinLevelRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerTimedRestriction_E:
        j = "PlayerTimedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerLeaverBustedRestriction_E:
        j = "PlayerLeaverBustedRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::QueueDisabled_E:
        j = "QueueDisabled";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerLevelRestriction_E:
        j = "PlayerLevelRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::QueueUnsupported_E:
        j = "QueueUnsupported";
      break;
      case LolLobbyEligibilityRestrictionCode_t::PlayerRankedSuspensionRestriction_E:
        j = "PlayerRankedSuspensionRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::UnknownRestriction_E:
        j = "UnknownRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::TeamDivisionRestriction_E:
        j = "TeamDivisionRestriction";
      break;
      case LolLobbyEligibilityRestrictionCode_t::TeamMinSizeRestriction_E:
        j = "TeamMinSizeRestriction";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyEligibilityRestrictionCode_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "TeamHighMMRMaxSizeRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::TeamHighMMRMaxSizeRestriction_E;
      return;
    }
    if(s == "TeamMaxSizeRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::TeamMaxSizeRestriction_E;
      return;
    }
    if(s == "PrerequisiteQueuesNotPlayedRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PrerequisiteQueuesNotPlayedRestriction_E;
      return;
    }
    if(s == "PlayerMinorRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerMinorRestriction_E;
      return;
    }
    if(s == "PlayerInGameRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerInGameRestriction_E;
      return;
    }
    if(s == "PlayerAvailableChampionRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerAvailableChampionRestriction_E;
      return;
    }
    if(s == "PlayerLeaverTaintedWarningRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerLeaverTaintedWarningRestriction_E;
      return;
    }
    if(s == "PlayerBannedRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerBannedRestriction_E;
      return;
    }
    if(s == "PlayerMaxLevelRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerMaxLevelRestriction_E;
      return;
    }
    if(s == "PlayerBingeRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerBingeRestriction_E;
      return;
    }
    if(s == "PlayerDodgeRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerDodgeRestriction_E;
      return;
    }
    if(s == "PlayerMinLevelRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerMinLevelRestriction_E;
      return;
    }
    if(s == "PlayerTimedRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerTimedRestriction_E;
      return;
    }
    if(s == "PlayerLeaverBustedRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerLeaverBustedRestriction_E;
      return;
    }
    if(s == "QueueDisabled"){
      v = LolLobbyEligibilityRestrictionCode_t::QueueDisabled_E;
      return;
    }
    if(s == "PlayerLevelRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerLevelRestriction_E;
      return;
    }
    if(s == "QueueUnsupported"){
      v = LolLobbyEligibilityRestrictionCode_t::QueueUnsupported_E;
      return;
    }
    if(s == "PlayerRankedSuspensionRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::PlayerRankedSuspensionRestriction_E;
      return;
    }
    if(s == "UnknownRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::UnknownRestriction_E;
      return;
    }
    if(s == "TeamDivisionRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::TeamDivisionRestriction_E;
      return;
    }
    if(s == "TeamMinSizeRestriction"){
      v = LolLobbyEligibilityRestrictionCode_t::TeamMinSizeRestriction_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyEligibilityRestrictionCode_t& v) {
    switch(v) {
      case LolLobbyEligibilityRestrictionCode_t::TeamHighMMRMaxSizeRestriction_E:
        return "TeamHighMMRMaxSizeRestriction";
      case LolLobbyEligibilityRestrictionCode_t::TeamMaxSizeRestriction_E:
        return "TeamMaxSizeRestriction";
      case LolLobbyEligibilityRestrictionCode_t::PrerequisiteQueuesNotPlayedRestriction_E:
        return "PrerequisiteQueuesNotPlayedRestriction";
      case LolLobbyEligibilityRestrictionCode_t::PlayerMinorRestriction_E:
        return "PlayerMinorRestriction";
      case LolLobbyEligibilityRestrictionCode_t::PlayerInGameRestriction_E:
        return "PlayerInGameRestriction";
      case LolLobbyEligibilityRestrictionCode_t::PlayerAvailableChampionRestriction_E:
        return "PlayerAvailableChampionRestriction";
      case LolLobbyEligibilityRestrictionCode_t::PlayerLeaverTaintedWarningRestriction_E:
        return "PlayerLeaverTaintedWarningRestriction";
      case LolLobbyEligibilityRestrictionCode_t::PlayerBannedRestriction_E:
        return "PlayerBannedRestriction";
      case LolLobbyEligibilityRestrictionCode_t::PlayerMaxLevelRestriction_E:
        return "PlayerMaxLevelRestriction";
      case LolLobbyEligibilityRestrictionCode_t::PlayerBingeRestriction_E:
        return "PlayerBingeRestriction";
      case LolLobbyEligibilityRestrictionCode_t::PlayerDodgeRestriction_E:
        return "PlayerDodgeRestriction";
      case LolLobbyEligibilityRestrictionCode_t::PlayerMinLevelRestriction_E:
        return "PlayerMinLevelRestriction";
      case LolLobbyEligibilityRestrictionCode_t::PlayerTimedRestriction_E:
        return "PlayerTimedRestriction";
      case LolLobbyEligibilityRestrictionCode_t::PlayerLeaverBustedRestriction_E:
        return "PlayerLeaverBustedRestriction";
      case LolLobbyEligibilityRestrictionCode_t::QueueDisabled_E:
        return "QueueDisabled";
      case LolLobbyEligibilityRestrictionCode_t::PlayerLevelRestriction_E:
        return "PlayerLevelRestriction";
      case LolLobbyEligibilityRestrictionCode_t::QueueUnsupported_E:
        return "QueueUnsupported";
      case LolLobbyEligibilityRestrictionCode_t::PlayerRankedSuspensionRestriction_E:
        return "PlayerRankedSuspensionRestriction";
      case LolLobbyEligibilityRestrictionCode_t::UnknownRestriction_E:
        return "UnknownRestriction";
      case LolLobbyEligibilityRestrictionCode_t::TeamDivisionRestriction_E:
        return "TeamDivisionRestriction";
      case LolLobbyEligibilityRestrictionCode_t::TeamMinSizeRestriction_E:
        return "TeamMinSizeRestriction";
    }
  }

}
