#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct TeamBoost_t {
    int64_t price;
    bool unlocked;
    int64_t ipReward;
    std::vector<int64_t> availableSkins;
    int64_t ipRewardForPurchaser;
    std::string skinUnlockMode;
    std::string summonerName;
  };

  inline void to_json(nlohmann::json& j, const TeamBoost_t& v) {
    j["price"] = v.price;
    j["unlocked"] = v.unlocked;
    j["ipReward"] = v.ipReward;
    j["availableSkins"] = v.availableSkins;
    j["ipRewardForPurchaser"] = v.ipRewardForPurchaser;
    j["skinUnlockMode"] = v.skinUnlockMode;
    j["summonerName"] = v.summonerName;
  }

  inline void from_json(const nlohmann::json& j, TeamBoost_t& v) {
    v.price = j.at("price").get<int64_t>();
    v.unlocked = j.at("unlocked").get<bool>();
    v.ipReward = j.at("ipReward").get<int64_t>();
    v.availableSkins = j.at("availableSkins").get<std::vector<int64_t>>();
    v.ipRewardForPurchaser = j.at("ipRewardForPurchaser").get<int64_t>();
    v.skinUnlockMode = j.at("skinUnlockMode").get<std::string>();
    v.summonerName = j.at("summonerName").get<std::string>();
  }
  inline std::string to_string(const TeamBoost_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
