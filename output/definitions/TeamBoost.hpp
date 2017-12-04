#ifndef SWAGGER_TYPES_TeamBoost_HPP
#define SWAGGER_TYPES_TeamBoost_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct TeamBoost {
    // 
    std::vector<int64_t> availableSkins;
    // 
    int64_t ipReward;
    // 
    int64_t ipRewardForPurchaser;
    // 
    int64_t price;
    // 
    std::string skinUnlockMode;
    // 
    std::string summonerName;
    // 
    bool unlocked;
  };

  inline void to_json(nlohmann::json& j, const TeamBoost& v) {
    j["availableSkins"] = v.availableSkins;
    j["ipReward"] = v.ipReward;
    j["ipRewardForPurchaser"] = v.ipRewardForPurchaser;
    j["price"] = v.price;
    j["skinUnlockMode"] = v.skinUnlockMode;
    j["summonerName"] = v.summonerName;
    j["unlocked"] = v.unlocked;
  }

  inline void from_json(const nlohmann::json& j, TeamBoost& v) {
    v.availableSkins = j.at("availableSkins").get<std::vector<int64_t>>;
    v.ipReward = j.at("ipReward").get<int64_t>;
    v.ipRewardForPurchaser = j.at("ipRewardForPurchaser").get<int64_t>;
    v.price = j.at("price").get<int64_t>;
    v.skinUnlockMode = j.at("skinUnlockMode").get<std::string>;
    v.summonerName = j.at("summonerName").get<std::string>;
    v.unlocked = j.at("unlocked").get<bool>;
  }

}
#endif // SWAGGER_TYPES_TeamBoost_HPP
