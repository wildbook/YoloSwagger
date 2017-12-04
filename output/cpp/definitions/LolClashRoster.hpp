#ifndef SWAGGER_TYPES_LolClashRoster_HPP
#define SWAGGER_TYPES_LolClashRoster_HPP
#include <json.hpp>
#include "RewardIcon.hpp"
#include "LolClashSuggestedInvite.hpp"
#include "LolClashRosterMember.hpp"
#include "RosterWithdraw.hpp"
#include "LolClashRosterPhaseInfo.hpp"
namespace leagueapi {
  // 
  struct LolClashRoster {
    // 
    int32_t numCompletedPeriods;
    // 
    RosterWithdraw withdraw;
    // 
    bool isActiveInCurrentPhase;
    // 
    std::vector<RewardIcon> availableIcons;
    // 
    std::string shortName;
    // 
    int32_t wins;
    // 
    int32_t iconId;
    // 
    int32_t losses;
    // 
    std::vector<LolClashSuggestedInvite> suggestedInvites;
    // 
    int64_t tournamentId;
    // 
    std::string id;
    // 
    bool isCurrentBracketComplete;
    // 
    int32_t tier;
    // 
    int32_t currentBracketWins;
    // 
    bool isRegistered;
    // 
    std::vector<LolClashRosterMember> members;
    // 
    int32_t iconColorId;
    // 
    uint64_t captainSummonerId;
    // 
    std::vector<LolClashRosterPhaseInfo> phaseInfos;
    // 
    bool eliminated;
    // 
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolClashRoster& v) {
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

  inline void from_json(const nlohmann::json& j, LolClashRoster& v) {
    v.numCompletedPeriods = j.at("numCompletedPeriods").get<int32_t>;
    v.withdraw = j.at("withdraw").get<RosterWithdraw>;
    v.isActiveInCurrentPhase = j.at("isActiveInCurrentPhase").get<bool>;
    v.availableIcons = j.at("availableIcons").get<std::vector<RewardIcon>>;
    v.shortName = j.at("shortName").get<std::string>;
    v.wins = j.at("wins").get<int32_t>;
    v.iconId = j.at("iconId").get<int32_t>;
    v.losses = j.at("losses").get<int32_t>;
    v.suggestedInvites = j.at("suggestedInvites").get<std::vector<LolClashSuggestedInvite>>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.id = j.at("id").get<std::string>;
    v.isCurrentBracketComplete = j.at("isCurrentBracketComplete").get<bool>;
    v.tier = j.at("tier").get<int32_t>;
    v.currentBracketWins = j.at("currentBracketWins").get<int32_t>;
    v.isRegistered = j.at("isRegistered").get<bool>;
    v.members = j.at("members").get<std::vector<LolClashRosterMember>>;
    v.iconColorId = j.at("iconColorId").get<int32_t>;
    v.captainSummonerId = j.at("captainSummonerId").get<uint64_t>;
    v.phaseInfos = j.at("phaseInfos").get<std::vector<LolClashRosterPhaseInfo>>;
    v.eliminated = j.at("eliminated").get<bool>;
    v.name = j.at("name").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolClashRoster_HPP
