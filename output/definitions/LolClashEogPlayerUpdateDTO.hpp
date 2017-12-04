#ifndef SWAGGER_TYPES_LolClashEogPlayerUpdateDTO_HPP
#define SWAGGER_TYPES_LolClashEogPlayerUpdateDTO_HPP
#include <json.hpp>
#include "ClashRewardDefinition.hpp"
namespace leagueapi {
  // 
  struct LolClashEogPlayerUpdateDTO {
    // 
    std::vector<ClashRewardDefinition> earnedRewards;
    // 
    int64_t gameId;
    // 
    std::vector<ClashRewardDefinition> rewardProgress;
    // 
    int32_t seasonVp;
    // 
    int32_t themeVp;
    // 
    int64_t tournamentId;
    // 
    bool winner;
  };

  inline void to_json(nlohmann::json& j, const LolClashEogPlayerUpdateDTO& v) {
    j["earnedRewards"] = v.earnedRewards;
    j["gameId"] = v.gameId;
    j["rewardProgress"] = v.rewardProgress;
    j["seasonVp"] = v.seasonVp;
    j["themeVp"] = v.themeVp;
    j["tournamentId"] = v.tournamentId;
    j["winner"] = v.winner;
  }

  inline void from_json(const nlohmann::json& j, LolClashEogPlayerUpdateDTO& v) {
    v.earnedRewards = j.at("earnedRewards").get<std::vector<ClashRewardDefinition>>;
    v.gameId = j.at("gameId").get<int64_t>;
    v.rewardProgress = j.at("rewardProgress").get<std::vector<ClashRewardDefinition>>;
    v.seasonVp = j.at("seasonVp").get<int32_t>;
    v.themeVp = j.at("themeVp").get<int32_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
    v.winner = j.at("winner").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolClashEogPlayerUpdateDTO_HPP
