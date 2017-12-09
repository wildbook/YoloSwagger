#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterPhaseInfo.hpp"
#include "RewardIcon.hpp"
#include "RosterWithdraw.hpp"
#include "LolClashRosterMember.hpp"
#include "LolClashSuggestedInvite.hpp"
namespace leagueapi {
  struct LolClashRoster_t {
    int64_t tournamentId;
    int32_t iconId;
    RosterWithdraw_t withdraw;
    std::string shortName;
    bool isCurrentBracketComplete;
    std::string id;
    std::vector<RewardIcon_t> availableIcons;
    bool isActiveInCurrentPhase;
    int32_t tier;
    int32_t wins;
    int32_t losses;
    bool eliminated;
    bool isRegistered;
    std::vector<LolClashRosterPhaseInfo_t> phaseInfos;
    std::vector<LolClashSuggestedInvite_t> suggestedInvites;
    int32_t iconColorId;
    int32_t numCompletedPeriods;
    std::string name;
    std::vector<LolClashRosterMember_t> members;
    int32_t currentBracketWins;
    uint64_t captainSummonerId;
  };

  inline void to_json(nlohmann::json& j, const LolClashRoster_t& v) {
    j["tournamentId"] = v.tournamentId;
    j["iconId"] = v.iconId;
    j["withdraw"] = v.withdraw;
    j["shortName"] = v.shortName;
    j["isCurrentBracketComplete"] = v.isCurrentBracketComplete;
    j["id"] = v.id;
    j["availableIcons"] = v.availableIcons;
    j["isActiveInCurrentPhase"] = v.isActiveInCurrentPhase;
    j["tier"] = v.tier;
    j["wins"] = v.wins;
    j["losses"] = v.losses;
    j["eliminated"] = v.eliminated;
    j["isRegistered"] = v.isRegistered;
    j["phaseInfos"] = v.phaseInfos;
    j["suggestedInvites"] = v.suggestedInvites;
    j["iconColorId"] = v.iconColorId;
    j["numCompletedPeriods"] = v.numCompletedPeriods;
    j["name"] = v.name;
    j["members"] = v.members;
    j["currentBracketWins"] = v.currentBracketWins;
    j["captainSummonerId"] = v.captainSummonerId;
  }

  inline void from_json(const nlohmann::json& j, LolClashRoster_t& v) {
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.iconId = j.at("iconId").get<int32_t>();
    v.withdraw = j.at("withdraw").get<RosterWithdraw_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.isCurrentBracketComplete = j.at("isCurrentBracketComplete").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.availableIcons = j.at("availableIcons").get<std::vector<RewardIcon_t>>();
    v.isActiveInCurrentPhase = j.at("isActiveInCurrentPhase").get<bool>();
    v.tier = j.at("tier").get<int32_t>();
    v.wins = j.at("wins").get<int32_t>();
    v.losses = j.at("losses").get<int32_t>();
    v.eliminated = j.at("eliminated").get<bool>();
    v.isRegistered = j.at("isRegistered").get<bool>();
    v.phaseInfos = j.at("phaseInfos").get<std::vector<LolClashRosterPhaseInfo_t>>();
    v.suggestedInvites = j.at("suggestedInvites").get<std::vector<LolClashSuggestedInvite_t>>();
    v.iconColorId = j.at("iconColorId").get<int32_t>();
    v.numCompletedPeriods = j.at("numCompletedPeriods").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.members = j.at("members").get<std::vector<LolClashRosterMember_t>>();
    v.currentBracketWins = j.at("currentBracketWins").get<int32_t>();
    v.captainSummonerId = j.at("captainSummonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolClashRoster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
