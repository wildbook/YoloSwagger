#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterPhaseInfo.hpp"
#include "RosterWithdraw.hpp"
#include "LolClashSuggestedInvite.hpp"
#include "LolClashRosterMember.hpp"
#include "RewardIcon.hpp"
namespace leagueapi {
  struct LolClashRoster_t {
    int64_t tournamentId;
    int32_t numCompletedPeriods;
    int32_t wins;
    int32_t iconId;
    uint64_t captainSummonerId;
    std::vector<RewardIcon_t> availableIcons;
    bool isRegistered;
    std::vector<LolClashRosterPhaseInfo_t> phaseInfos;
    bool isCurrentBracketComplete;
    std::vector<LolClashRosterMember_t> members;
    std::string shortName;
    std::vector<LolClashSuggestedInvite_t> suggestedInvites;
    int32_t tier;
    std::string id;
    int32_t losses;
    bool eliminated;
    RosterWithdraw_t withdraw;
    std::string name;
    int32_t iconColorId;
    int32_t currentBracketWins;
    bool isActiveInCurrentPhase;
  };

  inline void to_json(nlohmann::json& j, const LolClashRoster_t& v) {
    j["tournamentId"] = v.tournamentId;
    j["numCompletedPeriods"] = v.numCompletedPeriods;
    j["wins"] = v.wins;
    j["iconId"] = v.iconId;
    j["captainSummonerId"] = v.captainSummonerId;
    j["availableIcons"] = v.availableIcons;
    j["isRegistered"] = v.isRegistered;
    j["phaseInfos"] = v.phaseInfos;
    j["isCurrentBracketComplete"] = v.isCurrentBracketComplete;
    j["members"] = v.members;
    j["shortName"] = v.shortName;
    j["suggestedInvites"] = v.suggestedInvites;
    j["tier"] = v.tier;
    j["id"] = v.id;
    j["losses"] = v.losses;
    j["eliminated"] = v.eliminated;
    j["withdraw"] = v.withdraw;
    j["name"] = v.name;
    j["iconColorId"] = v.iconColorId;
    j["currentBracketWins"] = v.currentBracketWins;
    j["isActiveInCurrentPhase"] = v.isActiveInCurrentPhase;
  }

  inline void from_json(const nlohmann::json& j, LolClashRoster_t& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.numCompletedPeriods = j.at("numCompletedPeriods").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.iconId = j.at("iconId").get<int32_t>();
    v.captainSummonerId = j.at("captainSummonerId").get<uint64_t>();
    v.availableIcons = j.at("availableIcons").get<std::vector<RewardIcon_t>>();
    v.isRegistered = j.at("isRegistered").get<bool>();
    v.phaseInfos = j.at("phaseInfos").get<std::vector<LolClashRosterPhaseInfo_t>>();
    v.isCurrentBracketComplete = j.at("isCurrentBracketComplete").get<bool>();
    v.members = j.at("members").get<std::vector<LolClashRosterMember_t>>();
    v.shortName = j.at("shortName").get<std::string>();
    v.suggestedInvites = j.at("suggestedInvites").get<std::vector<LolClashSuggestedInvite_t>>();
    v.tier = j.at("tier").get<int32_t>();
    v.id = j.at("id").get<std::string>();
    v.losses = j.at("losses").get<int32_t>();
    v.eliminated = j.at("eliminated").get<bool>();
    v.withdraw = j.at("withdraw").get<RosterWithdraw_t>();
    v.name = j.at("name").get<std::string>();
    v.iconColorId = j.at("iconColorId").get<int32_t>();
    v.currentBracketWins = j.at("currentBracketWins").get<int32_t>();
    v.isActiveInCurrentPhase = j.at("isActiveInCurrentPhase").get<bool>();
  }
}
