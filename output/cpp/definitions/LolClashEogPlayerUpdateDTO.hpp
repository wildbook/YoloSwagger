#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardDefinition.hpp"
namespace leagueapi {
  struct LolClashEogPlayerUpdateDTO_t {
    std::vector<ClashRewardDefinition_t> earnedRewards;
    int32_t themeVp;
    bool winner;
    int64_t tournamentId;
    int64_t gameId;
    std::vector<ClashRewardDefinition_t> rewardProgress;
    int32_t seasonVp;
  };

  inline void to_json(nlohmann::json& j, const LolClashEogPlayerUpdateDTO_t& v) {
    j["earnedRewards"] = v.earnedRewards;
    j["themeVp"] = v.themeVp;
    j["winner"] = v.winner;
    j["tournamentId"] = v.tournamentId;
    j["gameId"] = v.gameId;
    j["rewardProgress"] = v.rewardProgress;
    j["seasonVp"] = v.seasonVp;
  }

  inline void from_json(const nlohmann::json& j, LolClashEogPlayerUpdateDTO_t& v) {
    v.earnedRewards = j.at("earnedRewards").get<std::vector<ClashRewardDefinition_t>>();
    v.themeVp = j.at("themeVp").get<int32_t>();
    v.winner = j.at("winner").get<bool>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.gameId = j.at("gameId").get<int64_t>();
    v.rewardProgress = j.at("rewardProgress").get<std::vector<ClashRewardDefinition_t>>();
    v.seasonVp = j.at("seasonVp").get<int32_t>();
  }
  inline std::string to_string(const LolClashEogPlayerUpdateDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
