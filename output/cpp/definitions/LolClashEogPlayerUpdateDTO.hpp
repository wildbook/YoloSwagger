#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardDefinition.hpp"
namespace leagueapi {
  struct LolClashEogPlayerUpdateDTO_t {
    int64_t_t gameId;
    std::vector<ClashRewardDefinition_t> rewardProgress;
    int32_t_t seasonVp;
    std::vector<ClashRewardDefinition_t> earnedRewards;
    bool_t winner;
    int32_t_t themeVp;
    int64_t_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashEogPlayerUpdateDTO_t& v) {
    j["gameId"] = v.gameId;
    j["rewardProgress"] = v.rewardProgress;
    j["seasonVp"] = v.seasonVp;
    j["earnedRewards"] = v.earnedRewards;
    j["winner"] = v.winner;
    j["themeVp"] = v.themeVp;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashEogPlayerUpdateDTO_t& v) {
    v.gameId = j.at("gameId").get<int64_t_t>();
    v.rewardProgress = j.at("rewardProgress").get<std::vector<ClashRewardDefinition_t>>();
    v.seasonVp = j.at("seasonVp").get<int32_t_t>();
    v.earnedRewards = j.at("earnedRewards").get<std::vector<ClashRewardDefinition_t>>();
    v.winner = j.at("winner").get<bool_t>();
    v.themeVp = j.at("themeVp").get<int32_t_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t_t>();
  }
  inline std::string to_string(const LolClashEogPlayerUpdateDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
