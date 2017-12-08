#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardDefinition.hpp"
namespace leagueapi {
  struct LolClashEogPlayerUpdateDTO_t {
    int32_t themeVp;
    int64_t gameId;
    bool winner;
    std::vector<ClashRewardDefinition_t> earnedRewards;
    std::vector<ClashRewardDefinition_t> rewardProgress;
    int32_t seasonVp;
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashEogPlayerUpdateDTO_t& v) {
    j["themeVp"] = v.themeVp;
    j["gameId"] = v.gameId;
    j["winner"] = v.winner;
    j["earnedRewards"] = v.earnedRewards;
    j["rewardProgress"] = v.rewardProgress;
    j["seasonVp"] = v.seasonVp;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashEogPlayerUpdateDTO_t& v) {
    v.themeVp = j.at("themeVp").get<int32_t>();
    v.gameId = j.at("gameId").get<int64_t>();
    v.winner = j.at("winner").get<bool>();
    v.earnedRewards = j.at("earnedRewards").get<std::vector<ClashRewardDefinition_t>>();
    v.rewardProgress = j.at("rewardProgress").get<std::vector<ClashRewardDefinition_t>>();
    v.seasonVp = j.at("seasonVp").get<int32_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
  }
  inline std::string to_string(const LolClashEogPlayerUpdateDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
