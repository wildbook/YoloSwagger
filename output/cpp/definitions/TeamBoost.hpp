#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct TeamBoost_t {
    std::string skinUnlockMode;
    int64_t ipRewardForPurchaser;
    int64_t price;
    int64_t ipReward;
    std::string summonerName;
    bool unlocked;
    std::vector<int64_t> availableSkins;
  };

  inline void to_json(nlohmann::json& j, const TeamBoost_t& v) {
    j["skinUnlockMode"] = v.skinUnlockMode;
    j["ipRewardForPurchaser"] = v.ipRewardForPurchaser;
    j["price"] = v.price;
    j["ipReward"] = v.ipReward;
    j["summonerName"] = v.summonerName;
    j["unlocked"] = v.unlocked;
    j["availableSkins"] = v.availableSkins;
  }

  inline void from_json(const nlohmann::json& j, TeamBoost_t& v) {
    v.skinUnlockMode = j.at("skinUnlockMode").get<std::string>();
    v.ipRewardForPurchaser = j.at("ipRewardForPurchaser").get<int64_t>();
    v.price = j.at("price").get<int64_t>();
    v.ipReward = j.at("ipReward").get<int64_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.unlocked = j.at("unlocked").get<bool>();
    v.availableSkins = j.at("availableSkins").get<std::vector<int64_t>>();
  }
  inline std::string to_string(const TeamBoost_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
