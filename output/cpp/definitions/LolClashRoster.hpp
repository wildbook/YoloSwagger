#pragma once
#include <json.hpp>
#include <optional>
#include "RewardIcon.hpp"
#include "LolClashSuggestedInvite.hpp"
#include "LolClashRosterMember.hpp"
#include "RosterWithdraw.hpp"
#include "LolClashRosterPhaseInfo.hpp"
namespace leagueapi {
  struct LolClashRoster_t {
    int32_t_t numCompletedPeriods;
    RosterWithdraw_t withdraw;
    bool_t isActiveInCurrentPhase;
    std::vector<RewardIcon_t> availableIcons;
    std::string_t shortName;
    int32_t_t wins;
    int32_t_t iconId;
    int32_t_t losses;
    std::vector<LolClashSuggestedInvite_t> suggestedInvites;
    int64_t_t tournamentId;
    std::string_t id;
    bool_t isCurrentBracketComplete;
    int32_t_t tier;
    int32_t_t currentBracketWins;
    bool_t isRegistered;
    std::vector<LolClashRosterMember_t> members;
    int32_t_t iconColorId;
    uint64_t_t captainSummonerId;
    std::vector<LolClashRosterPhaseInfo_t> phaseInfos;
    bool_t eliminated;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const LolClashRoster_t& v) {
    j["numCompletedPeriods"] = v.numCompletedPeriods;
    j["withdraw"] = v.withdraw;
    j["isActiveInCurrentPhase"] = v.isActiveInCurrentPhase;
    j["availableIcons"] = v.availableIcons;
    j["shortName"] = v.shortName;
    j["wins"] = v.wins;
    j["iconId"] = v.iconId;
    j["losses"] = v.losses;
    j["suggestedInvites"] = v.suggestedInvites;
    j["tournamentId"] = v.tournamentId;
    j["id"] = v.id;
    j["isCurrentBracketComplete"] = v.isCurrentBracketComplete;
    j["tier"] = v.tier;
    j["currentBracketWins"] = v.currentBracketWins;
    j["isRegistered"] = v.isRegistered;
    j["members"] = v.members;
    j["iconColorId"] = v.iconColorId;
    j["captainSummonerId"] = v.captainSummonerId;
    j["phaseInfos"] = v.phaseInfos;
    j["eliminated"] = v.eliminated;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolClashRoster_t& v) {
    v.numCompletedPeriods = j.at("numCompletedPeriods").get<int32_t_t>();
    v.withdraw = j.at("withdraw").get<RosterWithdraw_t>();
    v.isActiveInCurrentPhase = j.at("isActiveInCurrentPhase").get<bool_t>();
    v.availableIcons = j.at("availableIcons").get<std::vector<RewardIcon_t>>();
    v.shortName = j.at("shortName").get<std::string_t>();
    v.wins = j.at("wins").get<int32_t_t>();
    v.iconId = j.at("iconId").get<int32_t_t>();
    v.losses = j.at("losses").get<int32_t_t>();
    v.suggestedInvites = j.at("suggestedInvites").get<std::vector<LolClashSuggestedInvite_t>>();
    v.tournamentId = j.at("tournamentId").get<int64_t_t>();
    v.id = j.at("id").get<std::string_t>();
    v.isCurrentBracketComplete = j.at("isCurrentBracketComplete").get<bool_t>();
    v.tier = j.at("tier").get<int32_t_t>();
    v.currentBracketWins = j.at("currentBracketWins").get<int32_t_t>();
    v.isRegistered = j.at("isRegistered").get<bool_t>();
    v.members = j.at("members").get<std::vector<LolClashRosterMember_t>>();
    v.iconColorId = j.at("iconColorId").get<int32_t_t>();
    v.captainSummonerId = j.at("captainSummonerId").get<uint64_t_t>();
    v.phaseInfos = j.at("phaseInfos").get<std::vector<LolClashRosterPhaseInfo_t>>();
    v.eliminated = j.at("eliminated").get<bool_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const LolClashRoster_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
