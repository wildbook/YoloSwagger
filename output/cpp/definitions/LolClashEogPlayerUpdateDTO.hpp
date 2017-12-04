#ifndef SWAGGER_TYPES_LolClashEogPlayerUpdateDTO_HPP
#define SWAGGER_TYPES_LolClashEogPlayerUpdateDTO_HPP
#include <json.hpp>
#include "ClashRewardDefinition.hpp"
namespace leagueapi {
  // 
  struct LolClashEogPlayerUpdateDTO {
    // 
    int64_t gameId;
    // 
    std::vector<ClashRewardDefinition> rewardProgress;
    // 
    int32_t seasonVp;
    // 
    std::vector<ClashRewardDefinition> earnedRewards;
    // 
    bool winner;
    // 
    int32_t themeVp;
    // 
    int64_t tournamentId;
  };

  inline void to_json(nlohmann::json& j, const LolClashEogPlayerUpdateDTO& v) {
    j["gameId"] = v.gameId;
    j["rewardProgress"] = v.rewardProgress;
    j["seasonVp"] = v.seasonVp;
    j["earnedRewards"] = v.earnedRewards;
    j["winner"] = v.winner;
    j["themeVp"] = v.themeVp;
    j["tournamentId"] = v.tournamentId;
  }

  inline void from_json(const nlohmann::json& j, LolClashEogPlayerUpdateDTO& v) {
    v.gameId = j.at("gameId").get<int64_t>;
    v.rewardProgress = j.at("rewardProgress").get<std::vector<ClashRewardDefinition>>;
    v.seasonVp = j.at("seasonVp").get<int32_t>;
    v.earnedRewards = j.at("earnedRewards").get<std::vector<ClashRewardDefinition>>;
    v.winner = j.at("winner").get<bool>;
    v.themeVp = j.at("themeVp").get<int32_t>;
    v.tournamentId = j.at("tournamentId").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolClashEogPlayerUpdateDTO_HPP
