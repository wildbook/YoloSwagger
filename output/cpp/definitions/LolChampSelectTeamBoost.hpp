#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectTeamBoost_t {
    int64_t ipReward;
    int64_t ipRewardForPurchaser;
    bool unlocked;
    std::vector<int64_t> availableSkins;
    std::string summonerName;
    std::string skinUnlockMode;
    int64_t price;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectTeamBoost_t& v) {
    j["ipReward"] = v.ipReward;
    j["ipRewardForPurchaser"] = v.ipRewardForPurchaser;
    j["unlocked"] = v.unlocked;
    j["availableSkins"] = v.availableSkins;
    j["summonerName"] = v.summonerName;
    j["skinUnlockMode"] = v.skinUnlockMode;
    j["price"] = v.price;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectTeamBoost_t& v) {
    v.ipReward = j.at("ipReward").get<int64_t>();
    v.ipRewardForPurchaser = j.at("ipRewardForPurchaser").get<int64_t>();
    v.unlocked = j.at("unlocked").get<bool>();
    v.availableSkins = j.at("availableSkins").get<std::vector<int64_t>>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.skinUnlockMode = j.at("skinUnlockMode").get<std::string>();
    v.price = j.at("price").get<int64_t>();
  }
  inline std::string to_string(const LolChampSelectTeamBoost_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
