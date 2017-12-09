#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardDefinition.hpp"
namespace leagueapi {
  struct LolClashEogPlayerUpdateDTO_t {
    int64_t gameId;
    int64_t tournamentId;
    int32_t seasonVp;
    int32_t themeVp;
    std::vector<ClashRewardDefinition_t> rewardProgress;
    std::vector<ClashRewardDefinition_t> earnedRewards;
    bool winner;
  };

  inline void to_json(nlohmann::json& j, const LolClashEogPlayerUpdateDTO_t& v) {
    j["gameId"] = v.gameId;
    j["tournamentId"] = v.tournamentId;
    j["seasonVp"] = v.seasonVp;
    j["themeVp"] = v.themeVp;
    j["rewardProgress"] = v.rewardProgress;
    j["earnedRewards"] = v.earnedRewards;
    j["winner"] = v.winner;
  }

  inline void from_json(const nlohmann::json& j, LolClashEogPlayerUpdateDTO_t& v) {
    v.gameId = j.at("gameId").get<int64_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.seasonVp = j.at("seasonVp").get<int32_t>();
    v.themeVp = j.at("themeVp").get<int32_t>();
    v.rewardProgress = j.at("rewardProgress").get<std::vector<ClashRewardDefinition_t>>();
    v.earnedRewards = j.at("earnedRewards").get<std::vector<ClashRewardDefinition_t>>();
    v.winner = j.at("winner").get<bool>();
  }
  inline std::string to_string(const LolClashEogPlayerUpdateDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
