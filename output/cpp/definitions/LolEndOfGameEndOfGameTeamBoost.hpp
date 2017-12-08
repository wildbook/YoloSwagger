#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameEndOfGameTeamBoost_t {
    int64_t_t ipRewardForPurchaser;
    std::string_t summonerName;
    std::vector<int64_t> availableSkins;
    int64_t_t price;
    bool_t unlocked;
    int64_t_t ipReward;
    std::string_t skinUnlockMode;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGameTeamBoost_t& v) {
    j["ipRewardForPurchaser"] = v.ipRewardForPurchaser;
    j["summonerName"] = v.summonerName;
    j["availableSkins"] = v.availableSkins;
    j["price"] = v.price;
    j["unlocked"] = v.unlocked;
    j["ipReward"] = v.ipReward;
    j["skinUnlockMode"] = v.skinUnlockMode;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGameTeamBoost_t& v) {
    v.ipRewardForPurchaser = j.at("ipRewardForPurchaser").get<int64_t_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
    v.availableSkins = j.at("availableSkins").get<std::vector<int64_t>>();
    v.price = j.at("price").get<int64_t_t>();
    v.unlocked = j.at("unlocked").get<bool_t>();
    v.ipReward = j.at("ipReward").get<int64_t_t>();
    v.skinUnlockMode = j.at("skinUnlockMode").get<std::string_t>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGameTeamBoost_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
