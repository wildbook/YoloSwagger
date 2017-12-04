#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderTeamBoost_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderTeamBoost_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderTeamBoost {
    // 
    int64_t ipRewardForPurchaser;
    // 
    std::string summonerName;
    // 
    std::vector<int64_t> availableSkins;
    // 
    int64_t price;
    // 
    bool unlocked;
    // 
    int64_t ipReward;
    // 
    std::string skinUnlockMode;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderTeamBoost& v) {
    j["ipRewardForPurchaser"] = v.ipRewardForPurchaser;
    j["summonerName"] = v.summonerName;
    j["availableSkins"] = v.availableSkins;
    j["price"] = v.price;
    j["unlocked"] = v.unlocked;
    j["ipReward"] = v.ipReward;
    j["skinUnlockMode"] = v.skinUnlockMode;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderTeamBoost& v) {
    v.ipRewardForPurchaser = j.at("ipRewardForPurchaser").get<int64_t>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.availableSkins = j.at("availableSkins").get<std::vector<int64_t>>;
    v.price = j.at("price").get<int64_t>;
    v.unlocked = j.at("unlocked").get<bool>;
    v.ipReward = j.at("ipReward").get<int64_t>;
    v.skinUnlockMode = j.at("skinUnlockMode").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderTeamBoost_HPP
