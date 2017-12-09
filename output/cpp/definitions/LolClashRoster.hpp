#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashRosterMember.hpp"
#include "LolClashSuggestedInvite.hpp"
#include "RewardIcon.hpp"
#include "RosterWithdraw.hpp"
#include "LolClashRosterPhaseInfo.hpp"
namespace leagueapi {
  struct LolClashRoster_t {
    std::vector<LolClashSuggestedInvite_t> suggestedInvites;
    int64_t tournamentId;
    int32_t losses;
    bool isRegistered;
    std::vector<LolClashRosterPhaseInfo_t> phaseInfos;
    std::vector<RewardIcon_t> availableIcons;
    int32_t currentBracketWins;
    std::string shortName;
    int32_t wins;
    int32_t tier;
    std::string name;
    bool isCurrentBracketComplete;
    int32_t iconId;
    RosterWithdraw_t withdraw;
    std::string id;
    int32_t iconColorId;
    uint64_t captainSummonerId;
    std::vector<LolClashRosterMember_t> members;
    bool eliminated;
    bool isActiveInCurrentPhase;
    int32_t numCompletedPeriods;
  };

  inline void to_json(nlohmann::json& j, const LolClashRoster_t& v) {
    j["suggestedInvites"] = v.suggestedInvites;
    j["tournamentId"] = v.tournamentId;
    j["losses"] = v.losses;
    j["isRegistered"] = v.isRegistered;
    j["phaseInfos"] = v.phaseInfos;
    j["availableIcons"] = v.availableIcons;
    j["currentBracketWins"] = v.currentBracketWins;
    j["shortName"] = v.shortName;
    j["wins"] = v.wins;
    j["tier"] = v.tier;
    j["name"] = v.name;
    j["isCurrentBracketComplete"] = v.isCurrentBracketComplete;
    j["iconId"] = v.iconId;
    j["withdraw"] = v.withdraw;
    j["id"] = v.id;
    j["iconColorId"] = v.iconColorId;
    j["captainSummonerId"] = v.captainSummonerId;
    j["members"] = v.members;
    j["eliminated"] = v.eliminated;
    j["isActiveInCurrentPhase"] = v.isActiveInCurrentPhase;
    j["numCompletedPeriods"] = v.numCompletedPeriods;
  }

  inline void from_json(const nlohmann::json& j, LolClashRoster_t& v) {
    v.suggestedInvites = j.at("suggestedInvites").get<std::vector<LolClashSuggestedInvite_t>>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.losses = j.at("losses").get<int32_t>();
    v.isRegistered = j.at("isRegistered").get<bool>();
    v.phaseInfos = j.at("phaseInfos").get<std::vector<LolClashRosterPhaseInfo_t>>();
    v.availableIcons = j.at("availableIcons").get<std::vector<RewardIcon_t>>();
    v.currentBracketWins = j.at("currentBracketWins").get<int32_t>();
    v.shortName = j.at("shortName").get<std::string>();
    v.wins = j.at("wins").get<int32_t>();
    v.tier = j.at("tier").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.isCurrentBracketComplete = j.at("isCurrentBracketComplete").get<bool>();
    v.iconId = j.at("iconId").get<int32_t>();
    v.withdraw = j.at("withdraw").get<RosterWithdraw_t>();
    v.id = j.at("id").get<std::string>();
    v.iconColorId = j.at("iconColorId").get<int32_t>();
    v.captainSummonerId = j.at("captainSummonerId").get<uint64_t>();
    v.members = j.at("members").get<std::vector<LolClashRosterMember_t>>();
    v.eliminated = j.at("eliminated").get<bool>();
    v.isActiveInCurrentPhase = j.at("isActiveInCurrentPhase").get<bool>();
    v.numCompletedPeriods = j.at("numCompletedPeriods").get<int32_t>();
  }
  inline std::string to_string(const LolClashRoster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
