#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolQueueEligibilityEligibilityRestrictionCode_t {
    PlayerLeaverTaintedWarningRestriction_E = 13,
    PlayerInGameRestriction_E = 11,
    PrerequisiteQueuesNotPlayedRestriction_E = 19,
    PlayerDodgeRestriction_E = 10,
    QueueDisabled_E = 0,
    TeamMinSizeRestriction_E = 8,
    TeamHighMMRMaxSizeRestriction_E = 18,
    PlayerMinorRestriction_E = 16,
    PlayerAvailableChampionRestriction_E = 5,
    PlayerLevelRestriction_E = 2,
    PlayerLeaverBustedRestriction_E = 12,
    PlayerRankedSuspensionRestriction_E = 17,
    PlayerBingeRestriction_E = 9,
    PlayerTimedRestriction_E = 3,
    UnknownRestriction_E = 20,
    PlayerBannedRestriction_E = 4,
    PlayerMaxLevelRestriction_E = 14,
    PlayerMinLevelRestriction_E = 15,
    TeamMaxSizeRestriction_E = 7,
    TeamDivisionRestriction_E = 6,
    QueueUnsupported_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityEligibilityRestrictionCode_t& v) {
    switch(v) {
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerLeaverTaintedWarningRestriction_E:
        j = "PlayerLeaverTaintedWarningRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerInGameRestriction_E:
        j = "PlayerInGameRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::PrerequisiteQueuesNotPlayedRestriction_E:
        j = "PrerequisiteQueuesNotPlayedRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerDodgeRestriction_E:
        j = "PlayerDodgeRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::QueueDisabled_E:
        j = "QueueDisabled";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::TeamMinSizeRestriction_E:
        j = "TeamMinSizeRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::TeamHighMMRMaxSizeRestriction_E:
        j = "TeamHighMMRMaxSizeRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerMinorRestriction_E:
        j = "PlayerMinorRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerAvailableChampionRestriction_E:
        j = "PlayerAvailableChampionRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerLevelRestriction_E:
        j = "PlayerLevelRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerLeaverBustedRestriction_E:
        j = "PlayerLeaverBustedRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerRankedSuspensionRestriction_E:
        j = "PlayerRankedSuspensionRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerBingeRestriction_E:
        j = "PlayerBingeRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerTimedRestriction_E:
        j = "PlayerTimedRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::UnknownRestriction_E:
        j = "UnknownRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerBannedRestriction_E:
        j = "PlayerBannedRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerMaxLevelRestriction_E:
        j = "PlayerMaxLevelRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerMinLevelRestriction_E:
        j = "PlayerMinLevelRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::TeamMaxSizeRestriction_E:
        j = "TeamMaxSizeRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::TeamDivisionRestriction_E:
        j = "TeamDivisionRestriction";
      break;
      case LolQueueEligibilityEligibilityRestrictionCode_t::QueueUnsupported_E:
        j = "QueueUnsupported";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityEligibilityRestrictionCode_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "PlayerLeaverTaintedWarningRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::PlayerLeaverTaintedWarningRestriction_E;
      return;
    }
    if(s == "PlayerInGameRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::PlayerInGameRestriction_E;
      return;
    }
    if(s == "PrerequisiteQueuesNotPlayedRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::PrerequisiteQueuesNotPlayedRestriction_E;
      return;
    }
    if(s == "PlayerDodgeRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::PlayerDodgeRestriction_E;
      return;
    }
    if(s == "QueueDisabled"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::QueueDisabled_E;
      return;
    }
    if(s == "TeamMinSizeRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::TeamMinSizeRestriction_E;
      return;
    }
    if(s == "TeamHighMMRMaxSizeRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::TeamHighMMRMaxSizeRestriction_E;
      return;
    }
    if(s == "PlayerMinorRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::PlayerMinorRestriction_E;
      return;
    }
    if(s == "PlayerAvailableChampionRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::PlayerAvailableChampionRestriction_E;
      return;
    }
    if(s == "PlayerLevelRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::PlayerLevelRestriction_E;
      return;
    }
    if(s == "PlayerLeaverBustedRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::PlayerLeaverBustedRestriction_E;
      return;
    }
    if(s == "PlayerRankedSuspensionRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::PlayerRankedSuspensionRestriction_E;
      return;
    }
    if(s == "PlayerBingeRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::PlayerBingeRestriction_E;
      return;
    }
    if(s == "PlayerTimedRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::PlayerTimedRestriction_E;
      return;
    }
    if(s == "UnknownRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::UnknownRestriction_E;
      return;
    }
    if(s == "PlayerBannedRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::PlayerBannedRestriction_E;
      return;
    }
    if(s == "PlayerMaxLevelRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::PlayerMaxLevelRestriction_E;
      return;
    }
    if(s == "PlayerMinLevelRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::PlayerMinLevelRestriction_E;
      return;
    }
    if(s == "TeamMaxSizeRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::TeamMaxSizeRestriction_E;
      return;
    }
    if(s == "TeamDivisionRestriction"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::TeamDivisionRestriction_E;
      return;
    }
    if(s == "QueueUnsupported"){
      v = LolQueueEligibilityEligibilityRestrictionCode_t::QueueUnsupported_E;
      return;
    }
  }
  inline std::string to_string(const LolQueueEligibilityEligibilityRestrictionCode_t& v) {
    switch(v) {
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerLeaverTaintedWarningRestriction_E:
        return "PlayerLeaverTaintedWarningRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerInGameRestriction_E:
        return "PlayerInGameRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::PrerequisiteQueuesNotPlayedRestriction_E:
        return "PrerequisiteQueuesNotPlayedRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerDodgeRestriction_E:
        return "PlayerDodgeRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::QueueDisabled_E:
        return "QueueDisabled";
      case LolQueueEligibilityEligibilityRestrictionCode_t::TeamMinSizeRestriction_E:
        return "TeamMinSizeRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::TeamHighMMRMaxSizeRestriction_E:
        return "TeamHighMMRMaxSizeRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerMinorRestriction_E:
        return "PlayerMinorRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerAvailableChampionRestriction_E:
        return "PlayerAvailableChampionRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerLevelRestriction_E:
        return "PlayerLevelRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerLeaverBustedRestriction_E:
        return "PlayerLeaverBustedRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerRankedSuspensionRestriction_E:
        return "PlayerRankedSuspensionRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerBingeRestriction_E:
        return "PlayerBingeRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerTimedRestriction_E:
        return "PlayerTimedRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::UnknownRestriction_E:
        return "UnknownRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerBannedRestriction_E:
        return "PlayerBannedRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerMaxLevelRestriction_E:
        return "PlayerMaxLevelRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::PlayerMinLevelRestriction_E:
        return "PlayerMinLevelRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::TeamMaxSizeRestriction_E:
        return "TeamMaxSizeRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::TeamDivisionRestriction_E:
        return "TeamDivisionRestriction";
      case LolQueueEligibilityEligibilityRestrictionCode_t::QueueUnsupported_E:
        return "QueueUnsupported";
    }
  }

}
